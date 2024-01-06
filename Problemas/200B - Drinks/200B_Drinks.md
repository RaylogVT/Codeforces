https://codeforces.com/problemset/problem/200/B

# 200B - Drinks

## Resumen del problema
Tienes varias bebidas con distintos porcentajes de jugo de naranja. \
Cuando las mezclas todas en un cóctel, ¿cuál es el porcentaje de jugo de naranja que tiene el cóctel?

## Input
La 1° línea contiene un número entero N (1 <= N <= 100) -- El número de bebidas \
La 2° línea contiene N números enteros A1, A2, ..., An (0 <= Ai <= 100) -- El porcentaje de jugo de naranja que tiene la i-ésima bebida.

## Output
Imprime un número flotante -- El porcentaje de jugo de naranja que tiene el cóctel

## Ejemplos
| Input   | Razonamiento                                   | Output |
| :----   | :--------------------------------------------  | -----  |
| 3 <br> 50 50 100 | (50 + 50 + 100) / 3 = 66.6667 | **66.6667** |
| 4 <br> 0 25 50 75 | (0 + 25 + 50 + 75) / 4 = 37.5000 | **37.5000** |

## Forma de resolverlo
Para resolver este problema, simplemente debes sacar el **promedio** del procentaje de jugo de naranja de las bebidas. Solo saca la suma de los porcentajes y divídela entre el número de bebidas.

## Algoritmo
1) Suma los porcentajes de las bebidas
2) Divide la suma entre el número de bebidas
