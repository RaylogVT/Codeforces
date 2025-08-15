https://codeforces.com/problemset/problem/1729/A

# 1729A - Two Elevators

## Resumen del problema
Hay dos elevadores en un edificio. El primer elevador está actualmente en el piso `a`. El segundo elevador está en el piso `b` y primero se dirige al piso `c`, y luego desde el piso `c` va al piso 1. Ambos elevadores se mueven un piso por segundo. Se quiere saber qué elevador llegará primero al piso 1.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 10^4$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   Una sola línea contiene tres enteros `a`, `b`, y `c` ($1 \le a, b, c \le 10^9$), que representan las posiciones iniciales y el destino intermedio.

## Output
Para cada caso de prueba, imprime un solo entero:
-   `1` si el primer elevador llega al piso 1 más rápido.
-   `2` si el segundo elevador llega al piso 1 más rápido.
-   `3` si ambos elevadores llegan al piso 1 al mismo tiempo.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 10^4]  |                                     |
| a, b, c      | [1, 10^9]  | Pisos del edificio                  |

## Ejemplos

| Input (a, b, c) | a | b | c | Tiempo Elevador 1 | Tiempo Elevador 2 | Razonamiento | Output |
| :-------------- | :- | :- | :- | :---------------- | :---------------- | :----------- | :----- |
| (5, 2, 3)       | 5 | 2 | 3 | `abs(5-1) = 4`    | `abs(2-3) + abs(3-1) = 1 + 2 = 3` | Elevador 2 es más rápido | `2`    |
| (3, 5, 1)       | 3 | 5 | 1 | `abs(3-1) = 2`    | `abs(5-1) + abs(1-1) = 4 + 0 = 4` | Elevador 1 es más rápido | `1`    |
| (4, 2, 1)       | 4 | 2 | 1 | `abs(4-1) = 3`    | `abs(2-1) + abs(1-1) = 1 + 0 = 1` | Elevador 2 es más rápido | `2`    |
| (3, 2, 1)       | 3 | 2 | 1 | `abs(3-1) = 2`    | `abs(2-1) + abs(1-1) = 1 + 0 = 1` | Elevador 2 es más rápido | `2`    |
| (1, 10, 1)      | 1 | 10 | 1 | `abs(1-1) = 0`    | `abs(10-1) + abs(1-1) = 9 + 0 = 9` | Elevador 1 es más rápido | `1`    |
| (5, 10, 6)      | 5 | 10 | 6 | `abs(5-1) = 4`    | `abs(10-6) + abs(6-1) = 4 + 5 = 9` | Elevador 1 es más rápido | `1`    |
| (7, 4, 2)       | 7 | 4 | 2 | `abs(7-1) = 6`    | `abs(4-2) + abs(2-1) = 2 + 1 = 3` | Elevador 2 es más rápido | `2`    |
| (4, 1, 1)       | 4 | 1 | 1 | `abs(4-1) = 3`    | `abs(1-1) + abs(1-1) = 0 + 0 = 0` | Elevador 2 es más rápido | `2`    |
| (3, 3, 1)       | 3 | 3 | 1 | `abs(3-1) = 2`    | `abs(3-1) + abs(1-1) = 2 + 0 = 2` | Ambos llegan al mismo tiempo | `3`    |

## Forma de resolverlo

### Enfoque Algorítmico (Cálculo y Comparación de Tiempos)
El problema se reduce a calcular el tiempo que le toma a cada elevador llegar al piso 1 y luego comparar estos tiempos. Dado que cada elevador se mueve un piso por segundo, el tiempo que tarda en moverse entre dos pisos es simplemente la diferencia absoluta entre los números de esos pisos.

1.  **Tiempo del Elevador 1:** El elevador 1 comienza en el piso `a` y se dirige directamente al piso 1. El tiempo que le toma es la distancia entre `a` y 1, que se calcula como `abs(a - 1)`.
2.  **Tiempo del Elevador 2:** El elevador 2 comienza en el piso `b`, primero va al piso `c`, y luego desde `c` va al piso 1. El tiempo total que le toma es la suma de dos trayectos:
    *   De `b` a `c`: `abs(b - c)`
    *   De `c` a 1: `abs(c - 1)`
    El tiempo total para el elevador 2 es `abs(b - c) + abs(c - 1)`.
3.  **Comparación:** Una vez calculados ambos tiempos, se comparan:
    *   Si el tiempo del elevador 1 es menor, el elevador 1 es más rápido.
    *   Si el tiempo del elevador 2 es menor, el elevador 2 es más rápido.
    *   Si los tiempos son iguales, ambos llegan al mismo tiempo.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer los enteros `a`, `b`, y `c`.
    b.  Calcular `segundosElevador1 = abs(a - 1)`.
    c.  Calcular `segundosElevador2 = abs(b - c) + abs(c - 1)`.
    d.  Si `segundosElevador1 < segundosElevador2`, imprimir `1`.
    e.  Si `segundosElevador1 > segundosElevador2`, imprimir `2`.
    f.  Si `segundosElevador1 == segundosElevador2`, imprimir `3`.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Operaciones aritméticas y comparaciones constantes. |
| Espacial | O(1)                   | Espacio constante para almacenar variables. |