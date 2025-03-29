# 1374A - Required Remainder

**Enlace:** https://codeforces.com/problemset/problem/1374/A

## Resumen del problema
Dados tres enteros `x`, `y`, y `n`, necesitas encontrar el mayor entero `k` posible que cumpla las siguientes condiciones:
1.  `0 <= k <= n` (k está dentro del rango, incluyendo los límites).
2.  `k % x = y` (el residuo de `k` dividido por `x` es `y`).

Se garantiza que siempre existe una solución para los `x, y, n` dados. Este problema involucra aritmética modular básica.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 10⁴), el número de casos de prueba.
-   Cada una de las siguientes `t` líneas describe un caso de prueba y contiene tres enteros `x`, `y`, `n` (2 <= x <= 10⁹; 0 <= y < x; y <= n <= 10⁹).

## Output
Para cada caso de prueba, imprime un solo entero: el valor máximo de `k` que satisface las condiciones.

## Restricciones

| Variable | Rango       | Notas                        |
| :------- | :---------- | :--------------------------- |
| t        | [1, 10⁴]    |                              |
| x        | [2, 10⁹]    | Divisor                      |
| y        | [0, x-1]    | Residuo deseado              |
| n        | [y, 10⁹]    | Límite superior para k       |

## Ejemplos

| Input        | x, y, n | Números `k` con `k%x = y` | `k` <= n | Max k | Output |
| :----------- | :------ | :------------------------ | :------- | :---- | :----- |
| 7 <br> 7 5 12345 | 7, 5, 12345 | 5, 12, 19, ..., 12339, 12346,... | ...12339 | 12339 | `12339`|
| 7 <br> 5 0 4    | 5, 0, 4   | 0, 5, 10,...              | 0        | 0     | `0`    |
| 7 <br> 10 5 15   | 10, 5, 15 | 5, 15, 25,...             | 5, 15    | 15    | `15`   |
| 7 <br> 17 17 17 | N/A     | Input Inválido (y<x)     | N/A      | N/A   | N/A    |
| 7 <br> 12 11 133 | 12, 11, 133 | 11, 23, ..., 131, 143,... | ...131   | 131   | `131`  |
| 7 <br> 1 0 123  | 1, 0, 123 | 0, 1, 2, ... 123        | ...123   | 123   | `123`  |
| 7 <br> 999999999 999999998 1000000000 | large x,y,n | ... y ...                | y        | 999999998 | `999999998`|

## Forma de resolverlo

### a) Enfoque Algorítmico (Ajuste del Límite Superior)
La idea es encontrar el número más cercano a `n` (sin pasarse) que tenga el residuo `y` cuando se divide por `x`.
1.  **Encontrar el múltiplo de x más cercano:** Calcula el mayor múltiplo de `x` que es menor o igual a `n`. Esto se puede hacer como `max_multiple = n - (n % x)`. O usando división entera: `max_multiple = (n // x) * x`.
2.  **Añadir el residuo:** A este múltiplo, suma el residuo deseado `y`. `potential_k = max_multiple + y`. Este `potential_k` tiene el residuo correcto (`(q*x + y) % x = y`).
3.  **Verificar el límite:** Comprueba si `potential_k` está dentro del rango permitido, es decir, `potential_k <= n`.
    *   **Si `potential_k <= n`:** Este es el número más grande posible que cumple ambas condiciones. Es el resultado.
    *   **Si `potential_k > n`:** Significa que añadir `y` al `max_multiple` nos pasó del límite `n`. El número anterior que también tiene residuo `y` al dividir por `x` es `potential_k - x`. Este número *sí* estará dentro del rango (`<= n`) porque `max_multiple <= n` y `y < x`. Por lo tanto, el resultado es `potential_k - x`.
4.  **Implementación Combinada:** El código implementa esto calculando `m = n - (n % x)`. Luego verifica si `m + y <= n`. Si sí, la respuesta es `m + y`. Si no, la respuesta es `m + y - x` (lo cual el código escribe como `m - (x - y)`).

### b) Enfoque Matemático (Fórmula Directa)
Buscamos el mayor entero `k` tal que `k = q*x + y` (para algún entero `q`) y `k <= n`.
1.  Reescribimos la condición como `q*x + y <= n`, lo que implica `q*x <= n - y`.
2.  Queremos encontrar el valor más grande del cociente entero `q` que satisfaga `q*x <= n - y`.
3.  El valor más grande de `q` es `floor((n - y) / x)`, que se calcula como `(n - y) // x` usando división entera.
4.  Una vez que tenemos el `q` máximo, el `k` máximo correspondiente es `k = q * x + y`.
5.  Por lo tanto, la fórmula directa para el `k` máximo es `k = ((n - y) // x) * x + y`.

Este enfoque calcula directamente el `k` deseado sin necesidad de una verificación condicional como en el método (a), aunque ambos métodos son lógicamente equivalentes.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `x`, `y`, `n`.
    b.  **Método 1 (Como en el código):**
        i.  Calcular `rem = n % x`.
        ii. Calcular `potential_k = n - rem + y`.
        iii. Si `potential_k <= n`, el resultado es `potential_k`.
        iv. Si `potential_k > n`, el resultado es `potential_k - x`.
    c.  **Método 2 (Fórmula Directa):**
        i.  Calcular `q = (n - y) // x`.
        ii. Calcular el resultado `k = q * x + y`.
    d.  Imprimir el resultado obtenido por cualquiera de los métodos.

## Notas Adicionales
*   **Aritmética Modular:** El problema es una aplicación directa de las propiedades de la división y el residuo.
*   **Tipos de Datos:** Dado que `n`, `x` pueden ser grandes (hasta 10⁹), los cálculos intermedios (`q*x`) también pueden serlo. Es necesario usar tipos de datos que soporten estos rangos (ej. `long long` en C++). Python maneja enteros grandes automáticamente.
*   **Garantía de Solución:** El problema garantiza que `y <= n`, lo que asegura que siempre hay al menos un `k` (que podría ser `y` mismo si `y >= 0`) que cumple las condiciones.

## Complejidad

| Tipo        | Complejidad (por caso) |
| :---------- | :--------------------- |
| Temporal    | O(1)                   |
| Espacial    | O(1)                   |

*La complejidad por caso de prueba es constante O(1), ya que solo implica leer tres números y realizar un número fijo de operaciones aritméticas, independientemente de la magnitud de los números.*