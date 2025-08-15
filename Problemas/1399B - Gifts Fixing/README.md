# 1399B - Gifts Fixing

**Enlace:** https://codeforces.com/problemset/problem/1399/B

## Resumen del problema
Tienes `n` regalos. Cada regalo `i` tiene `a_i` dulces y `b_i` naranjas. Un regalo se considera "bueno" si la cantidad de dulces que contiene es igual a la cantidad mínima de dulces entre todos los regalos, Y la cantidad de naranjas que contiene es igual a la cantidad mínima de naranjas entre todos los regalos.

Puedes realizar las siguientes operaciones en cualquier regalo:
1.  Disminuir la cantidad de dulces en un regalo en uno.
2.  Disminuir la cantidad de naranjas en un regalo en uno.
3.  Disminuir la cantidad de dulces y la cantidad de naranjas en un regalo en uno (simultáneamente).

El objetivo es hacer que todos los regalos sean "buenos" utilizando el número mínimo de operaciones.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un solo entero `n` ($1 \le n \le 50$), el número de regalos.
    -   La segunda línea contiene `n` enteros $a_1, a_2, \dots, a_n$ ($0 \le a_i \le 10^9$), donde $a_i$ es la cantidad de dulces en el i-ésimo regalo.
    -   La tercera línea contiene `n` enteros $b_1, b_2, \dots, b_n$ ($0 \le b_i \le 10^9$), donde $b_i$ es la cantidad de naranjas en el i-ésimo regalo.

## Output
Para cada caso de prueba, imprime un solo entero: el número mínimo total de operaciones para hacer que todos los regalos sean buenos.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| n (regalos)  | [1, 50]    |                                     |
| a_i (dulces) | [0, 10^9]  | Cantidad de dulces en el i-ésimo regalo |
| b_i (naranjas)| [0, 10^9]  | Cantidad de naranjas en el i-ésimo regalo |

## Ejemplos

| Input (n, a, b) | n | a          | b          | min_dulces | min_naranjas | Operaciones por regalo | Output |
| :-------------- | :- | :--------- | :--------- | :--------- | :----------- | :--------------------- | :----- |
| 3 <br> 3 2 4 <br> 2 1 3 | 3 | [3, 2, 4]  | [2, 1, 3]  | 2          | 1            | `max(3-2, 2-1)=1` <br> `max(2-2, 1-1)=0` <br> `max(4-2, 3-1)=2` | `3`    |
| 2 <br> 10 10 <br> 10 10 | 2 | [10, 10] | [10, 10] | 10         | 10           | `max(10-10, 10-10)=0` <br> `max(10-10, 10-10)=0` | `0`    |
| 4 <br> 1 2 3 4 <br> 1 2 3 4 | 4 | [1, 2, 3, 4] | [1, 2, 3, 4] | 1          | 1            | `max(1-1, 1-1)=0` <br> `max(2-1, 2-1)=1` <br> `max(3-1, 3-1)=2` <br> `max(4-1, 4-1)=3` | `6`    |

## Forma de resolverlo

### Enfoque Algorítmico (Reducción al Mínimo Global)
Para que todos los regalos sean "buenos", la cantidad de dulces en cada regalo debe ser igual a la cantidad mínima de dulces entre todos los regalos (`min_dulces`), y la cantidad de naranjas en cada regalo debe ser igual a la cantidad mínima de naranjas entre todos los regalos (`min_naranjas`).

El problema se reduce a calcular, para cada regalo `i`, cuántas operaciones son necesarias para reducir sus `a_i` dulces a `min_dulces` y sus `b_i` naranjas a `min_naranjas`.

Consideremos un regalo `i` con `a_i` dulces y `b_i` naranjas. Necesitamos reducir `a_i - min_dulces` dulces y `b_i - min_naranjas` naranjas.
Sea `diff_dulces = a_i - min_dulces` y `diff_naranjas = b_i - min_naranjas`.

Las operaciones disponibles son:
1.  Disminuir solo dulces.
2.  Disminuir solo naranjas.
3.  Disminuir ambos (dulces y naranjas).

Para minimizar las operaciones para un solo regalo, es óptimo usar la operación 3 (disminuir ambos) tantas veces como sea posible. Esto significa que podemos realizar `min(diff_dulces, diff_naranjas)` operaciones que reduzcan tanto dulces como naranjas. Después de estas operaciones, uno de los dos (dulces o naranjas) habrá alcanzado su valor objetivo (`min_dulces` o `min_naranjas`). El otro ingrediente (el que aún no ha alcanzado su mínimo) necesitará `abs(diff_dulces - diff_naranjas)` operaciones adicionales (ya sea solo de dulces o solo de naranjas).

Por lo tanto, el número total de operaciones para un regalo `i` es `min(diff_dulces, diff_naranjas) + abs(diff_dulces - diff_naranjas)`.
Esta expresión se simplifica a `max(diff_dulces, diff_naranjas)`.

Así, el algoritmo consiste en:
1.  Encontrar el valor mínimo de dulces (`min_dulces`) en todo el arreglo de dulces.
2.  Encontrar el valor mínimo de naranjas (`min_naranjas`) en todo el arreglo de naranjas.
3.  Iterar sobre cada regalo y, para cada uno, calcular `max(a_i - min_dulces, b_i - min_naranjas)`.
4.  Sumar estos valores para obtener el total mínimo de operaciones.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`, el número de regalos.
    b.  Leer el arreglo `dulces` de tamaño `n`.
    c.  Leer el arreglo `naranjas` de tamaño `n`.
    d.  Encontrar `minimo_dulces` (el valor mínimo en el arreglo `dulces`).
    e.  Encontrar `minimo_naranjas` (el valor mínimo en el arreglo `naranjas`).
    f.  Inicializar `movimientos = 0`.
    g.  Iterar `indice_regalo` desde `0` hasta `n-1`:
        i.  Calcular `diff_dulces = dulces[indice_regalo] - minimo_dulces`.
        ii. Calcular `diff_naranjas = naranjas[indice_regalo] - minimo_naranjas`.
        iii. Sumar `max(diff_dulces, diff_naranjas)` a `movimientos`.
    h.  Imprimir `movimientos`.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | Dos pasadas para encontrar los mínimos y una pasada para calcular las operaciones. |
| Espacial | O(N)                   | Para almacenar los arreglos de dulces y naranjas. |