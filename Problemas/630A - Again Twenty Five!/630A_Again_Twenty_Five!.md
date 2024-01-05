https://codeforces.com/problemset/problem/630/A

# 630A - Again Twenty Five!

## Resumen del problema
Obtén los últimos 2 dígitos del resultado de elevar 5^N.

## Input
Una sola línea que contiene un número entero N (2 <= N <= 2*10^18) - El exponente de 5

## Output
Imprime "YES" si algún número es la suma de los otros dos, de lo contrario, imprime "NO"

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 2 | 5^2 = **25** | 25 |
| 3 | 5^3 = 1**25** | 25 |
| 4 | 5^4 = 6**25** | 25 |
| 5 | 5^5 = 31**25** | 25 |
| 6 | 5^6 = 156**25** | 25 |
| 7 | 5^7 = 781**25** | 25 |
| 8 | 5^8 = 3906**25** | 25 |
| 9 | 5^9 = 19531**25** | 25 |

## Forma de resolverlo
Para resolver este problema, simplemente podemos ver en los ejemplos que elevar 5 a cualquier potencia mayor o igual a 2 da un resultado cuyo 2 últimos dígitos siempre son **25**, así que podemos imprimirlo directamente sabiendo que funciona con número N aún más grandes.

## Algoritmo
1) Imprime '25'