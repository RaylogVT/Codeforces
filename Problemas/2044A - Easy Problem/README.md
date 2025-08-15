https://codeforces.com/problemset/problem/2044/A

# 2044A - Easy Problem

## Resumen del problema
El problema pide leer un número entero `N` y, para cada caso de prueba, calcular e imprimir el valor de `N-1`.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un solo entero `N` ($1 \le N \le 10^9$), el número para el cual se debe realizar la operación.

## Output
Para cada caso de prueba, imprime un solo entero: el resultado de `N-1`.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| N (número)   | [1, 10^9]  |                                     |

## Ejemplos

| Input (N) | N   | Output |
| :-------- | :-- | :----- |
| 5         | 5   | `4`    |
| 1         | 1   | `0`    |
| 100       | 100 | `99`   |

## Forma de resolverlo

### Enfoque Directo (Cálculo Simple)
El problema, como su nombre "Easy Problem" sugiere, es extremadamente sencillo. La solución consiste en una operación aritmética directa. Para cada número `N` dado, el objetivo es calcular `N-1`.

1.  **Lectura de Entrada:** Se lee el número entero `N` para cada caso de prueba.
2.  **Cálculo:** Se realiza la operación de resta `N - 1`.
3.  **Impresión:** El resultado de esta resta se imprime como la salida para el caso de prueba actual.

## Análisis Matemático
Dado un número entero $N$, la operación fundamental requerida es una simple sustracción:
$$ \text{Resultado} = N - 1 $$
Esta fórmula representa la lógica central del problema, que es una operación aritmética básica sin necesidad de teoremas o propiedades matemáticas complejas.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba (desde 0 hasta `t-1`):
    a.  Leer el entero `N`.
    b.  Calcular `pares = N - 1`.
    c.  Imprimir el valor de `pares`.

## Notas Adicionales
*   **Simplicidad:** Este tipo de problema es común en las primeras etapas de los concursos de programación para asegurar que los participantes entienden el formato de entrada/salida y pueden implementar soluciones básicas.
*   **Nombre del Problema:** El nombre "Easy Problem" es una pista directa sobre la naturaleza trivial de la solución.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Una operación aritmética constante. |
| Espacial | O(1)                   | Espacio constante para almacenar las variables de entrada y salida. |