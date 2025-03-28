https://codeforces.com/problemset/problem/703/A

# 703A - Mishka and Game

## Resumen del problema
Mishka y Chris están jugando para ganar chocolates. Deciden jugar varias rondas lanzando un dado, en el que aquél que tenga el valor más grande gana la ronda. En caso de que ambos tengan el mismo valor, entonces es la ronda es un empate. Gana quien haya ganado más rondas, y en caso de los dos hayan ganado la misma cantidad de rondas, entonces el juego es un empate. \
Sabiendo los resultados de cada ronda, ¿Cómo terminó el juego? ¿Quién ganó?

## Input
La 1° línea contiene un número entero N (1 <= N <= 100) -- El número de rondas jugadas. \
Las siguientes N líneas contienen dos números enteros M y C (1 <= M,C <= 6) -- El valor del dado de Mishka y Chris, respectivamente.

## Output
Imprime 'Mishka' si Mishka ganó el juego. \
Imprime 'Chris' si Chris ganó el juego. \
Imprime 'Friendship is magic!^^' si el juego terminó en empate. 

## Ejemplos
| Input                        | Razonamiento  | Output    |
| -----------------            | :------------ | --------- |
| 3 <br> 3 5 <br> 2 1 <br> 4 2 | <br> 3 5 = Chris (0-1) <br> 2 1 = Mishka (1-1) <br> 4 2 = Mishka (2-1)             | **Mishka**  |
| 2 <br> 6 1 <br> 1 6          | <br> 6 1 = Mishka (1-0) <br> 1-6 = Chris (1-1)              | **Friendship is magic!^^**         |
| 3 <br> 1 5 <br> 3 3 <br> 2 2 | <br> 1 5 = Chris (0-1) <br> 3 3 = Empate (0-1) <br> 2 2 = Empate (0-1)              | **Chris**  |

## Forma de resolverlo
Para resolver este problema, simplemente debemos iterar sobre cada ronda y ver quién la ganó. Mediante **dos contadores**, podemos registrar el número de rondas ganadas por Mishka y Chris. Al final comparamos los contadores y determinamos quién ganó el juego o si este fue un empate.

## Algoritmo
1) Itera sobre cada ronda
2) Compara M y C \
a) Si M > C, entonces suma +1 al contador de Mishka \
b) Si M < C, entonces suma +1 al contador de Chris \
c) Si M = C, entonces no se realiza ningún cambio
3) Compara los contadores de Mishka y Chris
a) Si Mishka > Chris, entonces imprime 'Mishka' \
b) Si Mishka < Chris, entonces imprime 'Chris' \
c) Si Mishka = Chris, entonces imrpimr 'Friendship is magic!^^'