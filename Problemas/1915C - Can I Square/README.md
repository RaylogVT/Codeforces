# 1915C - Can I Square?

**Enlace:** https://codeforces.com/problemset/problem/1915/C

## Resumen del problema
Se te dan `n` cubetas, y cada cubeta `i` contiene `a_i` tablones. Tu tarea es determinar si es posible tomar todos los tablones de todas las cubetas y formar un cuadrado perfecto con ellos. Es decir, si la suma total de todos los tablones es un número que es el cuadrado de algún entero.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un solo entero `n` ($1 \le n \le 2 \cdot 10^5$), el número de cubetas.
    -   La segunda línea contiene `n` enteros `a_1, a_2, \dots, a_n` ($1 \le a_i \le 10^9$), donde `a_i` es el número de tablones en la i-ésima cubeta.

## Output
Para cada caso de prueba, imprime "YES" si la suma total de tablones es un cuadrado perfecto, y "NO" en caso contrario.

## Restricciones

| Variable     | Rango              | Notas                               |
| :----------- | :----------------- | :---------------------------------- |
| t (casos)    | [1, 1000]          |                                     |
| n (cubetas)  | [1, $2 \cdot 10^5$] |                                     |
| $a_i$ (tablones) | [1, $10^9$]        | Suma total puede ser muy grande     |

## Ejemplos

| Input (n, a) | n | a          | Suma Total | Raíz Cuadrada | Output |
| :----------- | :- | :--------- | :--------- | :------------ | :----- |
| (2, [2, 2])  | 2 | [2, 2]     | 4          | 2             | `YES`  |
| (3, [1, 2, 3])| 3 | [1, 2, 3]  | 6          | No entera     | `NO`   |
| (1, [9])     | 1 | [9