https://codeforces.com/problemset/problem/2009/B

# 2009B - OsuMania

## Resumen del problema
En el juego Osu!Mania, los jugadores interactúan con "beatmaps" que consisten en una serie de notas que caen. Cada fila del beatmap representa un momento en el tiempo, y una nota se indica con el carácter '#', mientras que los espacios vacíos son '.'. El objetivo es determinar la posición de la columna de cada nota, comenzando desde la última fila (la más baja) y avanzando hacia la primera fila (la más alta).

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 100$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un solo entero `n` ($1 \le n \le 100$), el número de filas en el beatmap.
    -   Las siguientes `n` líneas contienen una cadena de caracteres, representando una fila del beatmap. Cada cadena consiste en '.' y exactamente un '#'. La longitud de cada fila es constante (implícitamente, 3 en los ejemplos típicos de este tipo de problema).

## Output
Para cada caso de prueba, imprime una sola línea que contenga `n` números enteros separados por espacios. Estos números representan las posiciones de las columnas (1-basadas) de las notas ('#') en el beatmap, comenzando desde la última fila y yendo hacia la primera.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 100]   |                                     |
| n (filas)    | [1, 100]   |                                     |
| fila (cadena)| longitud 3 | Contiene '.' y exactamente un '#'   |

## Ejemplos

| Input (n, beatmap) | n | beatmap | Razonamiento