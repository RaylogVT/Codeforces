https://codeforces.com/problemset/problem/1926/A

# 1926A - Vlad and the Best of Fives

## Resumen del problema
Vlad está participando en un concurso de "mejor de cinco" (best of five) contra otro oponente. Cada ronda del concurso es ganada por 'A' o por 'B'. Se le da una cadena de longitud 5 que representa los resultados de las cinco rondas. Se debe determinar quién ganó el concurso, es decir, qué letra ('A' o 'B') ganó la mayoría de las rondas.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   Una sola línea que contiene una cadena `s` de longitud 5, compuesta únicamente por los caracteres 'A' y 'B'.

## Output
Para cada caso de prueba, imprime un solo carácter: 'A' si 'A' ganó la mayoría de las rondas, o 'B' si 'B' ganó la mayoría de las rondas.

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
| "BBAAA"   | "BBAAA" | 3          | 2          | `A`    |

## Forma de resolverlo

### Enfoque de Conteo Directo
El problema se puede resolver de manera directa contando las ocurrencias de cada carácter ('A' y 'B') en la cadena de entrada. Dado que la cadena siempre tiene una longitud de 5, y 5 es un número impar, siempre habrá un ganador claro (uno de los caracteres aparecerá más veces que el otro).

1.  **Contar ocurrencias:** Itera sobre la cadena de longitud 5 y mantén dos contadores, uno para 'A' y otro para 'B'.
2.  **Comparar y determinar ganador:** Una vez que hayas contado todas las ocurrencias, compara los dos contadores. El carácter con el contador más alto es el ganador del concurso.

## Análisis Matemático
Sea $N_A$ el número de veces que aparece el carácter 'A' en la cadena $s$, y $N_B$ el número de veces que aparece el carácter 'B'.
La longitud total de la cadena es 5, lo que implica que $N_A + N_B = 5$.
Para determinar el ganador, comparamos $N_A$ y $N_B$:
- Si $N_A > N_B$, entonces 'A' es el ganador.
- Si $N_B > N_A$, entonces 'B' es el ganador.

Dado que la suma $N_A + N_B = 5$ (un número impar), es imposible que $N_A = N_B$. Por lo tanto, siempre se cumplirá una de las dos condiciones ($N_A > N_B$ o $N_B > N_A$), garantizando un ganador único.

Los posibles pares $(N_A, N_B)$ son:
- (5, 0) -> 'A' gana
- (4, 1) -> 'A' gana
- (3, 2) -> 'A' gana
- (2, 3) -> 'B' gana
- (1, 4) -> 'B' gana
- (0, 5) -> 'B' gana

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer la cadena `s` de longitud 5.
    b.  Inicializar dos variables enteras: `countA = 0` y `countB = 0`.
    c.  Iterar sobre cada carácter en la cadena `s` (desde el índice 0 hasta 4):
        i.  Si el carácter actual es 'A', incrementar `countA`.
        ii. Si el carácter actual es 'B', incrementar `countB`.
    d.  Después de la iteración, comparar `countA` y `countB`:
        i.  Si `countA > countB`, imprimir 'A'.
        ii. De lo contrario (si `countB > countA`), imprimir 'B'.

## Notas Adicionales
*   La longitud fija de la cadena (5 caracteres) hace que el problema sea muy sencillo, ya que no se necesita lógica para manejar cadenas de diferentes tamaños.
*   La naturaleza "mejor de cinco" y el hecho de que 5 es impar aseguran que siempre habrá un ganador y nunca un empate.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Se itera sobre una cadena de longitud fija 5. |
| Espacial | O(1)                   | Se utilizan variables constantes para los contadores. |