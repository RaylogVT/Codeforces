# 1807B - Grab The Candies

**Enlace:** https://codeforces.com/problemset/problem/1807/B

## Resumen del problema
Mihai y Bianca están jugando con bolsas de dulces. Hay `n` bolsas, con la $i$-ésima bolsa conteniendo $a_i$ dulces. Las bolsas se dan a los jugadores en orden. Si una bolsa tiene un número par de dulces, Mihai la toma. De lo contrario, Bianca la toma. Una vez que se toma una bolsa, el número de dulces en ella se añade al total de dulces del jugador que la tomó. Mihai quiere presumir, por lo que quiere reordenar el arreglo de bolsas de manera que en cualquier momento (excepto al inicio cuando ambos tienen 0 dulces), Mihai tenga estrictamente más dulces que Bianca. Ayuda a Mihai a determinar si tal reordenamiento existe.

## Input
-   La primera línea contiene un entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un solo entero `n` ($1 \le n \le 100$), el número de bolsas en el arreglo.
    -   La segunda línea contiene `n` enteros separados por espacio $a_1, a_2, \dots, a_n$ ($1 \le a_i \le 100$), el número de dulces en cada bolsa.

## Output
Para cada caso de prueba, imprime "YES" (sin comillas) si tal reordenamiento existe, y "NO" (sin comillas) en caso contrario.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| n (bolsas)   | [1, 100]   |                                     |
| a_i (dulces) | [1, 100]   | Número de dulces en cada bolsa      |

## Ejemplos

| Input (n, a)      | n | a           | Dulces Pares | Dulces Impares | Suma Pares | Suma Impares | ¿Suma Pares > Suma Impares? | Output |
| :---------------- | :-: | :---------- | :----------- | :------------- | :---------: | :-----------: | :--------------------------: | :----- |
| (4, [1, 2, 3, 4]) | 4 | [1, 2, 3, 4]| [2, 4]       | [1, 3]         | 6           | 4             | Sí                           | `YES`  |
| (4, [1, 1, 1, 2]) | 4 | [1, 1, 1, 2]| [2]          | [1, 1, 1]      | 2           | 3             | No                           | `NO`   |
| (3, [3, 3, 3])    | 3 | [3, 3, 3]   | []           | [3, 3, 3]      | 0           | 9             | No                           | `NO`   |

## Forma de resolverlo

### Enfoque Algorítmico (Suma de Dulces Pares e Impares)
El problema pide si existe un reordenamiento de las bolsas tal que en cualquier momento (excepto al inicio), la cantidad de dulces de Mihai sea estrictamente mayor que la de Bianca. Dado que Mihai siempre toma las bolsas con un número par de dulces y Bianca las bolsas con un número impar, el conjunto total de dulces que cada uno recibirá al final está fijo, independientemente del orden en que se presenten las bolsas. Mihai recibirá la suma total de dulces de todas las bolsas con cantidad par, y Bianca recibirá la suma total de dulces de todas las bolsas con cantidad impar.

La condición de que Mihai tenga estrictamente más dulces que Bianca "en cualquier momento" podría parecer compleja, pero la capacidad de reordenar las bolsas simplifica el problema. Si la suma total de dulces que Mihai puede obtener es estrictamente mayor que la suma total que Bianca puede obtener, entonces siempre existe un orden (por ejemplo, dar todas las bolsas pares a Mihai primero) que cumple la condición. Si la suma total de Mihai no es estrictamente mayor que la de Bianca, entonces no importa el orden, Mihai no terminará con más dulces, y por lo tanto, la condición no se puede cumplir en todo momento (específicamente, no se cumplirá al final).

Por lo tanto, la tarea se reduce a verificar si la suma total de los dulces en bolsas pares es estrictamente mayor que la suma total de los dulces en bolsas impares.

1.  **Separar y Sumar Dulces:** Itera a través de las `n` bolsas. Mantén dos sumas: `suma_pares` para los dulces en bolsas pares y `suma_impares` para los dulces en bolsas impares.
2.  **Acumular Sumas:** Para cada bolsa $a_i$: si $a_i$ es par, añádelo a `suma_pares`; si es impar, añádelo a `suma_impares`.
3.  **Comparar Sumas:** Después de procesar todas las bolsas, compara `suma_pares` y `suma_impares`. Si `suma_pares > suma_impares`, la respuesta es "YES". De lo contrario, la respuesta es "NO".

## Análisis Matemático
Sea $A = \{a_1, a_2, \dots, a_n\}$ el conjunto de cantidades de dulces en las bolsas. Dividimos este conjunto en dos grupos:
-   $A_{par}$: el conjunto de cantidades de dulces que son pares.
-   $A_{impar}$: el conjunto de cantidades de dulces que son impares.

La suma total de dulces que Mihai recibirá es la suma de todos los elementos en $A_{par}$:
$$S_{par} = \sum_{a \in A_{par}} a$$
La suma total de dulces que Bianca recibirá es la suma de todos los elementos en $A_{impar}$:
$$S_{impar} = \sum_{a \in A_{impar}} a$$

El problema pregunta si existe un reordenamiento de las bolsas tal que en cada paso $k$ (desde $k=1$ hasta $n$), la suma de dulces de Mihai sea estrictamente mayor que la de Bianca. La capacidad de reordenar las bolsas es clave.

Consideremos el reordenamiento donde todas las bolsas con cantidades pares se presentan primero, seguidas por todas las bolsas con cantidades impares.
-   Mientras se presentan las bolsas pares, la suma de Mihai aumenta y la de Bianca es 0. Como $a_i \ge 1$, Mihai tendrá estrictamente más dulces que Bianca tan pronto como tome su primera bolsa par.
-   Después de que todas las bolsas pares han sido tomadas, Mihai tiene $S_{par}$ dulces y Bianca tiene 0.
-   Luego, se presentan las bolsas impares. La suma de Bianca aumenta.
-   Al final, Mihai tiene $S_{par}$ y Bianca tiene $S_{impar}$.

Para que Mihai tenga estrictamente más dulces que Bianca *al final* del proceso, se debe cumplir:
$$S_{par} > S_{impar}$$
Si esta condición se cumple, el reordenamiento mencionado (pares primero, impares después) garantiza que la condición del problema se satisfaga. Mihai empieza con 0, Bianca con 0. Tras la primera bolsa par, Mihai > Bianca. Esta relación se mantiene mientras se dan las bolsas pares. Después de todas las pares, Mihai = $S_{par}$, Bianca = 0. Luego, al dar las impares, la suma de Bianca aumenta, pero si $S_{par} > S_{impar}$, la suma de Mihai siempre será estrictamente mayor que la de Bianca en cada paso posterior y al final.

Si $S_{par} \le S_{impar}$, entonces al final del proceso, Mihai no tendrá estrictamente más dulces que Bianca. Por lo tanto, no importa el orden, la condición de que Mihai *siempre* tenga más dulces (después del inicio) no se puede cumplir, ya que fallará al menos al final.

La condición necesaria y suficiente es simplemente verificar si la suma total de los dulces pares es estrictamente mayor que la suma total de los dulces impares:
$$ S_{par} > S_{impar} $$

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer los `n` enteros $a_1, a_2, \dots, a_n$.
    c.  Inicializar `suma_pares = 0`, `suma_impares = 0`.
    d.  Iterar a través de cada elemento $a_i$ desde $i=1$ hasta $n$:
        i.  Verificar si $a_i$ es par. Una forma es calcular el residuo: `if a_i % 2 == 0:`
        ii. Si es par, sumar $a_i$ a `suma_pares`: `suma_pares = suma_pares + a_i`.
        iii.Si es impar, sumar $a_i$ a `suma_impares`: `suma_impares = suma_impares + a_i`.
    e.  Comparar las sumas finales: `if suma_pares > suma_impares:`
    f.  Si `suma_pares` es estrictamente mayor que `suma_impares`, imprimir "YES".
    g.  De lo contrario, imprimir "NO".

## Notas Adicionales
*   **Reordenamiento:** La clave del problema es darse cuenta de que la posibilidad de reordenar simplifica la condición "en cualquier momento" a una comparación de sumas totales finales.
*   **Eficiencia:** Sumar los elementos pares e impares requiere una sola iteración sobre el arreglo, lo que resulta en una complejidad temporal de O(N) por caso de prueba.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | Iteración lineal sobre el arreglo. |
| Espacial | O(1)                   | Espacio constante para las sumas. |