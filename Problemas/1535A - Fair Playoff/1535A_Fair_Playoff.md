# 1535A - Fair Playoff

**Enlace:** https://codeforces.com/problemset/problem/1535/A

## Resumen del problema
Cuatro jugadores participan en un torneo de eliminación simple. Cada jugador tiene un nivel de habilidad `s_i`. En cualquier partido, el jugador con mayor nivel de habilidad siempre gana.
La estructura del torneo es fija:
-   Partido 1: Jugador 1 vs Jugador 2
-   Partido 2: Jugador 3 vs Jugador 4
-   Final: Ganador del Partido 1 vs Ganador del Partido 2

Un playoff se considera "justo" (fair) si los dos jugadores con los niveles de habilidad *más altos* entre los cuatro participantes son precisamente los dos jugadores que llegan a la final. Dados los niveles de habilidad `s_1, s_2, s_3, s_4`, debes determinar si el playoff es justo o no.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 1000), el número de casos de prueba.
-   Cada una de las siguientes `t` líneas describe un caso de prueba y contiene cuatro enteros `s_1, s_2, s_3, s_4` (1 <= s_i <= 100), los niveles de habilidad de los jugadores.

## Output
Para cada caso de prueba, imprime "YES" si el playoff es justo, o "NO" en caso contrario.

## Restricciones

| Variable        | Rango      |
| :-------------- | :--------- |
| t (casos)       | [1, 1000]  |
| s_i (habilidad) | [1, 100]   |

## Ejemplos

| Input       | s1,s2,s3,s4 | Top 2 Overall | Winner(1,2) | Winner(3,4) | Finalistas     | Finalistas == Top 2? | Output |
| :---------- | :---------- | :------------ | :---------- | :---------- | :------------- | :------------------- | :----- |
| 4 <br> 3 7 9 5 | 3, 7, 9, 5  | 9, 7          | 7           | 9           | {7, 9}         | Sí                   | `YES`  |
| 4 <br> 4 5 6 9 | 4, 5, 6, 9  | 9, 6          | 5           | 9           | {5, 9}         | No (5 != 6)          | `NO`   |
| 4 <br> 5 3 8 1 | 5, 3, 8, 1  | 8, 5          | 5           | 8           | {5, 8}         | Sí                   | `YES`  |
| 4 <br> 6 5 3 2 | 6, 5, 3, 2  | 6, 5          | 6           | 3           | {6, 3}         | No (3 != 5)          | `NO`   |

## Forma de resolverlo

### a) Enfoque Algorítmico (Simulación y Comparación)
La forma más directa es simular la primera ronda del torneo y luego comparar a los ganadores con los dos mejores jugadores generales.
1.  **Identificar Top 2:** Determina cuáles son los dos niveles de habilidad más altos entre `s1, s2, s3, s4`. Puedes hacer esto ordenando los cuatro valores y seleccionando los dos últimos. Sean estos `Top1` y `Top2`.
2.  **Simular Primera Ronda:** Encuentra los ganadores de los dos partidos iniciales:
    *   `Ganador12 = max(s1, s2)`
    *   `Ganador34 = max(s3, s4)`
3.  **Verificar Justicia:** El playoff es justo si y solo si el conjunto de los dos ganadores `{Ganador12, Ganador34}` es exactamente el mismo que el conjunto de los dos mejores jugadores generales `{Top1, Top2}`. Esto significa que ambos `Ganador12` y `Ganador34` deben estar en el conjunto `{Top1, Top2}`.

### b) Enfoque Lógico (Condición de Injusticia)
Un playoff es injusto *solo* si los dos mejores jugadores generales se enfrentan en la primera ronda, eliminando a uno de ellos prematuramente.
1.  **Identificar Top 2:** Encuentra los dos niveles de habilidad más altos, `Top1` y `Top2`.
2.  **Verificar Emparejamiento:** Comprueba si los jugadores con habilidades `Top1` y `Top2` están emparejados en el primer partido (es decir, si `{s1, s2} == {Top1, Top2}`) O si están emparejados en el segundo partido (es decir, si `{s3, s4} == {Top1, Top2}`).
3.  **Conclusión:** Si están emparejados en la primera ronda, el playoff es "NO" (injusto). Si no están emparejados en la primera ronda, ambos llegarán a la final (ya que vencerán a sus oponentes de menor habilidad), y el playoff es "YES" (justo).

## Algoritmo (Reflejando la lógica del código)
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer las habilidades `s1`, `s2`, `s3`, `s4`.
    b.  Crear una lista/vector con las cuatro habilidades.
    c.  Ordenar la lista/vector de habilidades en orden ascendente.
    d.  Identificar las dos habilidades más altas: `top1 = lista_ordenada[3]` y `top2 = lista_ordenada[2]`.
    e.  Simular los partidos de la primera ronda: `ganador12 = max(s1, s2)` y `ganador34 = max(s3, s4)`.
    f.  Verificar si el conjunto de ganadores es igual al conjunto de los dos mejores jugadores. Esto se puede hacer comprobando si `ganador12` es igual a `top1` o `top2`, Y si `ganador34` es igual a `top1` o `top2`.
        *   Una forma de verificar es: `( (ganador12 == top1 && ganador34 == top2) || (ganador12 == top2 && ganador34 == top1) )`.
        *   Otra forma (como en Python): `(ganador12 == top1 || ganador12 == top2) && (ganador34 == top1 || ganador34 == top2)`.
    g.  Si la condición en (f) es verdadera, imprimir "YES".
    h.  Si la condición en (f) es falsa, imprimir "NO".

## Notas Adicionales
*   **Condición Clave:** El playoff es justo si y solo si los dos jugadores con las habilidades más altas no juegan entre sí en la primera ronda.
*   **Implementación:** Ordenar las habilidades para encontrar el top 2 y luego usar `max` para simular los partidos es un enfoque claro.

## Complejidad

| Tipo        | Complejidad (por caso) |
| :---------- | :--------------------- |
| Temporal    | O(1)                   |
| Espacial    | O(1)                   |

*La complejidad por caso de prueba es constante O(1), ya que el número de jugadores es fijo (4). Ordenar 4 elementos toma tiempo constante, y las demás operaciones también son constantes.*