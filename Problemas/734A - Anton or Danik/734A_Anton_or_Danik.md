https://codeforces.com/problemset/problem/734/A

# 734A - Anton or Danik

## Resumen del problema
Anton y Danik juegan N partidas de ajedrez. Sabiendo quién ganó cada partida, ¿quién ganó más partidas?

## Input
La 1° línea contiene un número entero N (1 <= N <= 100000) - El número de partidas de ajedrez que Anton y Danik jugaron. \
La 2° línea contiene un string de tamaño N con letras 'A' y 'D' - Cada letra representa quién ganó cada partida: Anton (A) o Danik (D).

## Output
Imprime 'Anton' si Anton ganó más partidas. \
Imprime 'Danik' si Danik ganó más partidas. \
Imprime 'Frienship' si ambos ganaron el mismo número de partidas. 

## Ejemplos
| Input         | Razonamiento        | Output         |
| :----         | :------------------ | -------------- |
| 6 <br> ADAAAA | **5** Anton vs. 1 Danik | **Anton**      |
| 6 <br> ADDDDA | 2 Anton vs. **4** Danik | **Danik**      |
| 6 <br> DADADA | 3 Anton vs. 3 Danik | **Friendship** |

## Forma de resolverlo
Para este problema simplemente debemos contar del string cuántas A's y D's tiene. \
Si hay más A's que D's, entonces ganó Anton. \
Si hay menos A's que D's, entonces ganó Danik. \
Si hay igual cantidad de A's y D's, entonces empataron.

## Algoritmo
1) Recorre cada letra del string
2) Suma 1 al contador de victorias de Anton y Danik dependiendo de la letra que vayas leyendo (A/D)
3) Compara los contadores de victorias: \
Si Anton > Danik, entonces imprime 'Anton' \
Si Anton < Danik, entonces imprime 'Danik' \
Si Anton = Danik, entonces imprime 'Friendship'
