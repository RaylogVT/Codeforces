https://codeforces.com/problemset/problem/1283/A

# 1283A - Minutes Before The New Year

## Resumen del problema
Dada la hora actual, ¿cuántos minutos faltan para que sea medianoche de Año Nuevo?

## Input
La 1° línea contiene un número entero T (1 <= T <= 1439) -- El número de casos de prueba \
Las siguientes N líneas contienen dos números enteros H y M (0 <= H < 24, 0 <= M < 60) -- La hora y minuto actual, respectivamente

## Output
Imprime un número entero M -- La cantidad de minutos restantes para que sea medianoche

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 3 <br> 23 55 <br> 23 0 <br> 4 20  | <br> 24:00 - 23:55 = 0:05 --> (0 x 60) + 5 = 5 minutos <br> 24:00 - 23:00 = 1:00 --> (1 x 60) + 0 = 60 minutos <br> 24:00 - 4:20 = 19:40 --> (19 x 60) + 40 = 1180 minutos             | <br> **5** <br> **60** <br> **1180**  |

## Forma de resolverlo
Para resolver este problema, simplemente debemos buscar una manera de restar **24:00 menos la hora actual** y convertir el resultado a minutos. \
Una forma sería pasar una hora al lado del minutero (es decir, convertir **24:00** en **23:60** de manera teórica) para facilitar la resta con la hora actual. \
Por lo tanto, la fórmula para calcular los minutos restantes para las 24:00 sería **(23 - Hora actual) x 60 + (60 - Minuto actual)**

## Algoritmo
1) Itera sobre cada caso de prueba
2) Calcula (23 - H) * 60 + (60 - M)