https://codeforces.com/problemset/problem/381/A

# 381A - Sereja And Dima

## Resumen del problema
Sereja y Dima juegan un juego: Hay N cartas en una fila, cada una con un número distinto. Sereja siempre empieza primero. En cada turno, cada jugadora puede agarrar una de las dos cartas que está en los extremos de la fila. El juego termina cuando no queden cartas en la mesa. Gana el jugador cuya suma de números en las cartas sea el mayor. 

Inna nota que Sereja y Dima siempre toman la carta más grande de las dos en los extremos en sus respectivos turnos. Concociendo esta estrategia, ¿Cuál será la puntuación de Sereja y Dima al final del juego?

## Input
La 1° línea contiene un número entero N (1 <= N <= 1000) -- El número de cartas en la fila \
La 2° línea contiene N números enteros K (1 <= K <= 1000) -- El número de cada carta

## Output
Imprime 2 números enteros -- La punutuación final de Sereja y Dima, respectivamente.

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 4 <br> 4 1 2 10 | T1 --> Sereja = 10 (4 1 2) <br> T2 --> Dima = 4 (1 2) <br> T3 --> Sereja = 10 + 2 = 12 (1) <br> T4 --> Dima = 4 + 1 = 5 () | **12 5** |
| 7 <br> 1 2 3 4 5 6 7 | T1 --> Sereja = 7 (1 2 3 4 5 6) <br> T2 --> Dima = 6 (1 2 3 4 5) <br> T3 --> Sereja = 7 + 5 = 12 (1 2 3 4) <br> T4 --> Dima = 6 + 4 = 10 (1 2 3) <br> T5 --> Sereja = 12 + 3 = 15 (1 2) <br> T6 --> Dima = 10 + 2 = 12 (1) <br> T7 --> Sereja = 15 + 1 = 16 () | **16 12** |

## Forma de resolverlo
Para resolver este problema, simplemente tenemos que modelar los turnos en los que Sereja y Dima toman cartas de fila hasta que se acaben. Primero sacamos cuál carta en los dos extremos es la que tiene el número más grande. Después, sumamos el número a la puntuación de Sereja o Dima y elimina la carta de la fila. El juego termina cuando hayas eliminado todas las cartas de la fila.

Ahora, ¿cómo sabemos cuándo es turno de quién? Bueno, considerando que Sereja siempre empieza primero, y asumiendo que los turnos van de 0 a N-1, podemos concluir que los turnos pares son de Sereja y los impares de Dima, así que basta con usar un módulo 2 para determinar los turnos pares e impares y hacer la suma de puntos a la jugadora respectiva.

## Algoritmo
1) Inicia los puntos de Sereja y Dima en 0
2) Simula los turnos del juego
3) En cada turno, saca el número mayor entre las dos cartas de los dos extremos
4) Suma el número a la puntuación del jugador cuyo turno es el actual \
a) Si el turno es par, entonces es turno de Sereja, suma el número a su puntuación \
b) Si el turno es impar, entonces es turno de Dima, suma el número a su puntuación
5) Elimina la carta de la fila
6) Repite los pasos 3-5 hasta eliminar todas las cartas de la fila
7) Imprime la puntuación final de Sereja y Dima
