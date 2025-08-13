https://codeforces.com/problemset/problem/1926/A

# 1926A - Vlad and the Best of Fives

## Resumen del problema
Vlad está jugando un juego donde el resultado de cada ronda es una 'A' o una 'B'. El juego consiste en 5 rondas. Se le da una cadena de longitud 5 que representa los resultados de estas rondas. Debe determinar quién ganó el juego, es decir, qué letra ('A' o 'B') aparece más veces en la cadena.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   Una sola línea que contiene una cadena `s` de longitud 5, compuesta únicamente por los caracteres 'A' y 'B'.

## Output
Para cada caso de prueba, imprime un solo carácter: 'A' si 'A' aparece más veces que 'B', o 'B' si 'B' aparece más veces que 'A'.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| s (cadena)   | longitud 5 | Contiene solo 'A' o 'B'             |

## Ejemplos

| Input (s) | s       | Conteo 'A' | Conteo 'B' | Output |
| :-------- | :------ | :--------- | :--------- | :----- |
| "AAABA"   | "AAABA" | 4          | 1          | `A`    |
| "BBBAA"   | "BBBAA" | 2          | 3          | `B`    |
| "ABABA"   | "ABABA" | 3          | 2          | `A`    |
| "BABBB"   | "BABBB" | 1          | 4          | `B`    |

## Forma de resolverlo

### Enfoque Algorítmico (Conteo Directo)
El problema es directo y se puede resolver contando las ocurrencias de cada carácter ('A' y 'B') en la cadena de entrada. Dado que la cadena siempre tiene una longitud de 5, y solo contiene 'A's o 'B's, siempre habrá un ganador (uno de los caracteres