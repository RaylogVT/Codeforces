https://codeforces.com/problemset/problem/1971/A

# 1971A - My First Sorting Problem

## Resumen del problema
Dado dos números enteros `x` y `y`, el objetivo es imprimirlos en orden no decreciente (es decir, el menor primero y luego el mayor).

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   Una sola línea contiene dos enteros `x` y `y` ($1 \le x, y \le 10^9$).

## Output
Para cada caso de prueba, imprime los dos enteros `x` y `y` en orden no decreciente, separados por un espacio.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| x, y (números) | [1, 10^9]  | Enteros                               |

## Ejemplos

| Input (x, y) | x | y | Output |
| :----------- | :- | :- | :----- |
| (5, 3)       | 5 | 3 | `3 5`  |
| (10, 20)     | 10 | 20 | `10 20` |
| (7, 7)       | 7 | 7 | `7 7`  |

## Forma de resolverlo

### Enfoque Algorítmico (Comparación Directa)
El problema es una tarea de ordenamiento muy básica para dos elementos. La forma más sencilla de resolverlo es comparar los dos números dados y determinar cuál es el menor y cuál es el mayor.

1.  **Comparación:** Se comparan los dos números `x` y `y`.
2.  **Impresión Ordenada:** Se imprime el número que resulte ser el menor, seguido de un espacio, y luego el número que resulte ser el mayor. Las funciones `min()` y `max()` disponibles en la mayoría de los lenguajes de programación son ideales para esto.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer los dos enteros `x` y `y`.
    b.  Imprimir `min(x, y)` seguido de un espacio y `max(x, y)`.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Una sola comparación y dos operaciones de impresión. |
| Espacial | O(1)                   | Espacio constante para almacenar los dos números. |