https://codeforces.com/problemset/problem/2009/A

# 2009A - Minimize!

## Resumen del problema
El problema pide calcular el valor de la expresión `(c - a) + (b - c)` para un par de enteros dados `a` y `b`. El entero `c` no se proporciona como entrada, lo que implica que su valor no afecta el resultado final de la expresión.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   Una sola línea contiene dos enteros `a` y `b` ($1 \le a \le b \le 10^9$).

## Output
Para cada caso de prueba, imprime un solo entero que es el resultado de la expresión `(c - a) + (b - c)`.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| a, b         | [1, 10^9]  | `a` siempre es menor o igual que `b`. |

## Ejemplos

| Input (a, b) | a | b | Razonamiento (c-a) + (b-c) | Output |
| :----------- | :- | :- | :------------------------- | :----- |
| (1, 5)       | 1 | 5 | (c-1) + (5-c) = 5-1 = 4    | `4`    |
| (10, 20)     | 10 | 20 | (c-10) + (20-c) = 20-10 = 10 | `10`   |
| (7, 7)       | 7 | 7 | (c-7) + (7-c) = 7-7 = 0    | `0`    |

## Forma de resolverlo

### Enfoque Algorítmico (Simplificación Algebraica)
El problema se basa en una simple propiedad algebraica. La expresión `(c - a) + (b - c)` puede simplificarse de la siguiente manera:
$$ (c - a) + (b - c) = c - a + b - c $$
Los términos `c` y `-c` se cancelan mutuamente:
$$ c - c - a + b = 0 - a + b = b - a $$
Por lo tanto, la expresión siempre se reduce a `b - a`, independientemente del valor de `c`. El algoritmo simplemente calcula esta diferencia.

## Análisis Matemático
Dada la expresión $E = (c - a) + (b - c)$, donde $a, b, c$ son números enteros.
Podemos reordenar y agrupar los términos:
$E = c - a + b - c$
$E = (c - c) + (b - a)$
$E = 0 + (b - a)$
$E = b - a$

Este análisis demuestra que el valor de la expresión depende únicamente de $a$ y $b$, y es igual a su diferencia $b - a$.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer los dos enteros `a` y `b`.
    b.  Calcular el resultado como `b - a`.
    c.  Imprimir el resultado.

## Notas Adicionales
*   La simplicidad del problema sugiere que está diseñado para probar la comprensión de propiedades algebraicas básicas o la capacidad de identificar patrones simples.
*   El nombre del problema "Minimize!" podría ser una distracción o una referencia a la minimización de operaciones, ya que la solución es la más directa posible.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Operación aritmética constante.     |
| Espacial | O(1)                   | Espacio constante para almacenar las variables. |