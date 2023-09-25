https://codeforces.com/problemset/problem/486/A

# 486A - Calculating Function

## Resumen del problema
La función F está definida como F(N) = -1+2-3+...+n(-1)^n \
Dado un número N, calcula F(N)

## Input
Un número entero N (1 <= N <= 10^15)

## Output
Imprime el resultado de F(N)

## Ejemplos
| Input   | Razonamiento                | Output  |
| ------- | :-----------------------    | ------- |
| 1       | -1 = -1                     | **-1**   |
| 2       | -1+2 = 1                    | **1**  |
| 3       | -1+2-3 = -2                 | **-2**   |
| 4       | -1+2-3+4 = 2                | **2**  |
| 5       | -1+2-3+4-5 = -3             | **-3**   |
| 6       | -1+2-3+4-5+6 = 3            | **3**  |
| 7       | -1+2-3+4-5+6-7 = -4         | **-4**   |
| 8       | -1+2-3+4-5+6-7+8 = 4        | **4**  |
| 9       | -1+2-3+4-5+6-7+8-9 = -5     | **-5**   |
| 10      | -1+2-3+4-5+6-7+8-9+10 = 5   | **5**  |

## Forma de resolverlo
Para resolver el problema, la forma ingenua sería implementar la función N(-1)^N. Sin embargo, como el problema debe resolverse en **1 segundo** y N puede ser igual a **10^15**, entonces nos excederemos de tiempo para resolverlo, así que debemos pensar en una manera más rápida y creativa para ello.

Si vemos la tabla de ejemplos, notamos un patrón entre N y F(N): 

|       |   |   |   |   |    |
| ----- | - | - | - | - | -- |
| N     | 2 | 4 | 6 | 8 | 10 |
| F(N)  | 1 | 2 | 3 | 4 | 5  |

Cuando N es par, F(N) es igual a **N/2** \
Esto se debe a que si sumas un número impar y su par próximo el resultado es igual a 1. \
Ej. -1+2 = 1, -3+4 = 1, -N+(N+1) = 1 \
Entonces basta con contar la **cantidad de números pares entre 1-N**, el cual es la mitad (N/2).

|       |    |    |    |    |    |
| ----- | -- | -- | -- | -- | -- |
| N     | 1  | 3  | 5  | 7  | 9  |
| F(N)  | -1 | -2 | -3 | -4 | -5 |

Cuando N es impar, F(N) es igual a **-((N+1)/2)** \
Esto se debe a que si restas un número par y su impar próximo el resultado es igual a -1. \
Ej. +2-3 = -1, +4-5 = -1, +N-(N+1) = -1 \
Entonces basta con contar la **cantidad de pares par-impar que dan -1 entre 2-N, y sumar 1 por el -1 del inicio**. Dicha cantidad de pares es la mitad (N/2), y como **los -1 son negativos**, entonces nuestro resultado debe ser **negativo**.

## Algoritmo
1) Recibe N
2) Si N es par, entonces F(N) = N/2
3) Si N es impar, entonces F(N) = -((N+1)/2)
