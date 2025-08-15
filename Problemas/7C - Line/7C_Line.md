https://codeforces.com/problemset/problem/7/C

# 7C - Line

## Resumen del problema
Dados tres números enteros A, B y C, que representan los coeficientes de la ecuación lineal `Ax + By + C = 0`, se debe encontrar *un* par de números enteros `(x, y)` que satisfaga dicha ecuación. Si no existe ninguna solución entera, se debe indicar.

## Input
La única línea de entrada contiene tres números enteros `A`, `B` y `C` (`-2x10⁹ < A,B,C < 2x10⁹`) -- Los coeficientes de la ecuación \
Está garantizado que `A² + B² > 0`.

## Output
Imprime dos números enteros `x` e `y` separados por un espacio, que sean una solución entera a la ecuación `Ax + By + C = 0`. \
Si no existe ninguna solución entera, imprime `-1`.

## Ejemplos
| Input   | Ecuación Objetivo | Razonamiento                                     | Output    |
| :------ | :---------------- | :----------------------------------------------- | :-------- |
| 2 3 -7  | 2x + 3y = 7       | gcd(2, 3) = 1. Como 7 es divisible por 1, hay solución. Una posible es x=-7, y=7. | -7 7    |
| 2 4 1   | 2x + 4y = -1      | gcd(2, 4) = 2. Como -1 no es divisible por 2, no hay solución entera. | -1      |
| 1 1 0   | x + y = 0         | gcd(1, 1) = 1. Como 0 es divisible por 1, hay solución. Una posible es x=0, y=0. | 0 0     |

## Forma de resolverlo
Este problema es un caso de **Ecuación Diofántina Lineal**. \
La ecuación original `Ax + By + C = 0` se puede reescribir como: `Ax + By = -C`

El **Teorema de Bezout** establece que una ecuación de la forma `ax + by = n` tiene soluciones enteras para `x` e `y` si y solo si `n` es divisible por el máximo común divisor de `a` y `b` (`GCD(a, b)`).

La ecuación `Ax + By = -C` tendrá soluciones enteras si y solo si `-C` es divisible por `G = GCD(A, B)`. \
Una forma de verificar esto es comprobar si `C % G == 0`.

Si la condición de divisibilidad se cumple, entonces podemos usar el **Algoritmo Extendido de Euclides (EEA)** para encontrar la tríada de valores `G`,`x`,`y` tal que `Ax + By = G`.

Una vez que tenemos `G`,`x`,`y`, y `C % G == 0`, podemos encontrar una solución `(x₀, y₀)` para la ecuación original `Ax + By = -C`. \
Multiplicando la ecuación `Ax + By = G` por el factor `K = -C / G` obtenemos: \
`A(x * K) + B(y * K) = G * K` \
`A(x * (-C / G)) + B(y * (-C / G)) = -C`

Por lo tanto, una solución particular `(x₀, y₀)` es: \
`x₀ = x * (-C / G)` \
`y₀ = y * (-C / G)`

Si la condición `C % G == 0` no se cumple, entonces no existe ninguna solución entera.

## Algoritmo
1. Calcula `G = GCD(A, B)` con el Algoritmo de Euclides.
2. Calcula `x` e `y` con el Algoritmo Extendido de Euclides.
3. Verifica si `C % g == 0` \
a) **Si no es divisible** (`C % G != 0`): Imprime `-1` \
b) **Si es divisible** (`C % G == 0`):
    * Calcula `K = -C // G`
    * Calcula `x₀ = x * K`
    * Calcula `y₀ = y * K`
    * Imprime `x₀`, `y₀` separados por un espacio.

*Nota:* Los valores intermedios `x`, `y` y resultados finales `x₀`, `y₀` pueden ser números muy grandes, así que utiliza tipos de datos con rangos extensos \
a) `long long` en C++ \
b) Enteros de precisión arbitraria en Python