https://codeforces.com/problemset/problem/1325/A

# 1325A - EhAb AnD gCd

## Resumen del problema
Dado un entero positivo `x`, se deben encontrar dos enteros positivos `a` y `b` tales que su suma sea igual a `x` (`a + b = x`), y la suma de su máximo común divisor (GCD) y su mínimo común múltiplo (LCM) también sea igual a `x` (`gcd(a, b) + lcm(a, b) = x`).

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La única línea contiene un solo entero `x` ($2 \le x \le 10^9$).

## Output
Para cada caso de prueba, imprime dos enteros positivos `a` y `b` que satisfagan las condiciones.

## Ejemplos

| Input (x) | a | b | a + b | gcd(a,b) | lcm(a,b) | gcd(a,b) + lcm(a,b) | Output |
| :-------- | :- | :- | :---- | :------- | :------- | :------------------ | :----- |
| 2         | 1 | 1 | 2     | 1        | 1        | 2                   | `1 1`  |
| 10        | 1 | 9 | 10    | 1        | 9        | 10                  | `1 9`  |
| 5         | 1 | 4 | 5     | 1        | 4        | 5                   | `1 4`  |

## Forma de resolverlo

### Enfoque Directo (Propiedad de GCD y LCM)
El problema pide encontrar dos enteros positivos `a` y `b` que cumplan dos condiciones:
1.  `a + b = x`
2.  `gcd(a, b) + lcm(a, b) = x`

Una propiedad fundamental del máximo común divisor (GCD) y el mínimo común múltiplo (LCM) de dos números `a` y `b` es que `gcd(a, b) * lcm(a, b) = a * b`.

Consideremos una elección simple para `a` y `b` que pueda satisfacer estas condiciones. Si elegimos `a = 1`, entonces la primera condición se convierte en `1 + b = x`, lo que implica `b = x - 1`.
Ahora, verifiquemos la segunda condición con `a = 1` y `b = x - 1`:
-   `gcd(1, k)` para cualquier entero positivo `k` es siempre `1`. Por lo tanto, `gcd(1, x - 1) = 1`.
-   `lcm(1, k)` para cualquier entero positivo `k` es siempre `k`. Por lo tanto, `lcm(1, x - 1) = x - 1`.

Sustituyendo estos valores en la segunda condición:
`gcd(a, b) + lcm(a, b) = gcd(1, x - 1) + lcm(1, x - 1) = 1 + (x - 1) = x`.

Ambas condiciones se satisfacen con la elección `a = 1` y `b = x - 1`. Dado que el problema garantiza que `x \ge 2`, `x - 1` siempre será un entero positivo (`x - 1 \ge 1`), cumpliendo la restricción de que `a` y `b` deben ser positivos.

Este enfoque es directo y siempre proporciona una solución válida.

## Análisis Matemático
Sea $x$ un entero positivo dado. Buscamos enteros positivos $a$ y $b$ tales que:
1. $a + b = x$
2. $\text{gcd}(a, b) + \text{lcm}(a, b) = x$

Consideremos la elección $a = 1$.
De la primera condición, $1 + b = x \implies b = x - 1$.
Dado que $x \ge 2$, $x - 1 \ge 1$, por lo que $b$ es un entero positivo.

Ahora, sustituimos $a=1$ y $b=x-1$ en la segunda condición:
$\text{gcd}(1, x - 1) + \text{lcm}(1, x - 1)$

Sabemos que para cualquier entero positivo $k$:
$\text{gcd}(1, k) = 1$
$\text{lcm}(1, k) = k$

Aplicando estas propiedades:
$\text{gcd}(1, x - 1) = 1$
$\text{lcm}(1, x - 1) = x - 1$

Entonces, la expresión se convierte en:
$1 + (x - 1) = x$

Esto demuestra que la elección $a=1$ y $b=x-1$ satisface ambas condiciones para cualquier $x \ge 2$.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer el entero `x`.
    b.  Imprimir `1` y `x - 1`, separados por un espacio.

## Notas Adicionales
*   La solución es trivial debido a la propiedad de GCD y LCM con el número 1.
*   El problema no requiere encontrar *todas* las parejas `(a, b)`, solo *una* que satisfaga las condiciones.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Operaciones constantes por caso de prueba. |
| Espacial | O(1)                   | Espacio constante para almacenar variables. |