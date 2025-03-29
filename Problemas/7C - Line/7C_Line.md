# 7C - Line

**Enlace:** https://codeforces.com/problemset/problem/7/C

## Resumen del problema
Dados tres números enteros A, B y C, que representan los coeficientes de la ecuación lineal `Ax + By + C = 0`, se debe encontrar *un* par de números enteros `(x, y)` que satisfaga dicha ecuación. Si no existe ninguna solución entera, se debe indicar.

## Input
La única línea de entrada contiene tres números enteros `A`, `B` y `C`, separados por espacios.

## Output
Imprime dos enteros `x` e `y` separados por un espacio, que sean una solución entera a la ecuación `Ax + By + C = 0`. Si no existe ninguna solución entera, imprime `-1`.

## Restricciones

| Variable | Rango         |
| :------- | :------------ |
| A        | [-10⁹, 10⁹]   |
| B        | [-10⁹, 10⁹]   |
| C        | [-10⁹, 10⁹]   |
*Se garantiza que A y B no son ambos cero al mismo tiempo.*

## Ejemplos

| Input   | Ecuación Objetivo | Razonamiento                                     | Output    |
| :------ | :---------------- | :----------------------------------------------- | :-------- |
| 2 3 -7  | 2x + 3y = 7       | `gcd(2, 3) = 1`. Como 7 es divisible por 1, hay solución. Una posible es x=-7, y=7. | `-7 7`    |
| 2 4 1   | 2x + 4y = -1      | `gcd(2, 4) = 2`. Como -1 no es divisible por 2, no hay solución entera. | `-1`      |
| 1 1 0   | x + y = 0         | `gcd(1, 1) = 1`. Como 0 es divisible por 1, hay solución. Una posible es x=0, y=0. | `0 0`     |

## Forma de resolverlo
Este problema es un caso clásico de **Ecuación Diofántica Lineal**. La ecuación original `Ax + By + C = 0` se puede reescribir como:
`Ax + By = -C`

Un teorema fundamental (Teorema de Bézout) establece que una ecuación de la forma `ax + by = d` tiene soluciones enteras para `x` e `y` si y solo si `d` es divisible por el máximo común divisor de `a` y `b` (denotado como `gcd(a, b)`).

Aplicado a nuestro problema, la ecuación `Ax + By = -C` tendrá soluciones enteras si y solo si `-C` es divisible por `g = gcd(A, B)`. Una forma sencilla de verificar esto es comprobar si `C % g == 0` (si `C` es divisible por `g`, entonces `-C` también lo es).

Si la condición de divisibilidad se cumple, podemos usar el **Algoritmo Extendido de Euclides (EEA)**. Este algoritmo no solo calcula `g = gcd(A, B)`, sino que también encuentra un par de enteros `(x', y')` tales que `Ax' + By' = g`.

Una vez que tenemos `g`, `x'`, e `y'`, y sabemos que `C` es divisible por `g`, podemos encontrar una solución `(x₀, y₀)` para nuestra ecuación original `Ax + By = -C`. Multiplicamos la ecuación `Ax' + By' = g` por el factor `k = -C / g`. Esto nos da:
`A(x' * k) + B(y' * k) = g * k`
`A(x' * (-C / g)) + B(y' * (-C / g)) = -C`

Por lo tanto, una solución particular `(x₀, y₀)` es:
`x₀ = x' * (-C / g)`
`y₀ = y' * (-C / g)`

Si la condición `C % g == 0` no se cumple, entonces no existe ninguna solución entera.

## Algoritmo
1.  Leer los valores de `A`, `B` y `C` de la entrada.
2.  Calcular `g = gcd(A, B)` utilizando el Algoritmo de Euclides.
3.  Simultáneamente (o en un paso separado usando el Algoritmo Extendido de Euclides), encontrar los coeficientes `x'` e `y'` tales que `Ax' + By' = g`.
4.  Verificar la condición de divisibilidad: ¿Es `C` divisible por `g`? ( `C % g == 0` ).
5.  **Si no es divisible** (`C % g != 0`): Imprimir `-1`.
6.  **Si es divisible** (`C % g == 0`):
    *   Calcular el factor `k = -C / g`. (Asegurarse de usar división entera).
    *   Calcular la solución `x₀ = x' * k`.
    *   Calcular la solución `y₀ = y' * k`.
    *   Imprimir `x₀` y `y₀` separados por un espacio.

*Consideración importante:* Los valores intermedios `x'`, `y'` y los resultados finales `x₀`, `y₀` pueden ser números muy grandes o muy pequeños, por lo que es crucial usar tipos de datos que puedan manejar rangos extensos (como `long long` en C++ o enteros de precisión arbitraria en Python).

## Complejidad

| Tipo        | Complejidad                                   |
| :---------- | :-------------------------------------------- |
| Temporal    | O(log(min(A, B))) donde A y B son absolutos   |
| Espacial    | O(log(min(A, B))) (Recursivo) / O(1) (Iterativo) |

*La complejidad está determinada principalmente por el Algoritmo Extendido de Euclides.*