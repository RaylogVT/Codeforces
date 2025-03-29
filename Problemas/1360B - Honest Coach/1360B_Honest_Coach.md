# 1360B - Honest Coach

**Enlace:** https://codeforces.com/problemset/problem/1360/B

## Resumen del problema
Un entrenador tiene `n` atletas, cada uno con una fuerza `s_i`. Quiere dividir a todos los atletas en dos equipos, Team 1 y Team 2. Cada equipo debe tener al menos un atleta, y cada atleta debe pertenecer exactamente a un equipo. La fuerza de un equipo se define como la fuerza del atleta más fuerte de ese equipo. El entrenador quiere formar los equipos de manera que la diferencia absoluta entre la fuerza del Team 1 y la fuerza del Team 2 sea lo más pequeña posible. Debes encontrar este valor mínimo posible de la diferencia.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 1000), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un entero `n` (2 <= n <= 50), el número de atletas.
    -   La segunda línea contiene `n` enteros distintos `s_1, s_2, ..., s_n` (1 <= s_i <= 1000), las fuerzas de los atletas.

## Output
Para cada caso de prueba, imprime un solo entero: la mínima diferencia absoluta posible entre las fuerzas de los dos equipos.

## Restricciones

| Variable         | Rango         | Notas                           |
| :--------------- | :------------ | :------------------------------ |
| t (casos prueba) | [1, 1000]     |                                 |
| n (atletas)      | [2, 50]       |                                 |
| s_i (fuerzas)    | [1, 1000]     | Se garantiza que son distintos. |

## Ejemplos

| Input                | n | s             | Sorted s        | Adjacent Diffs | Min Diff | Output |
| :------------------- | :- | :------------ | :-------------- | :------------- | :------- | :----- |
| 5 <br> 5 <br> 3 1 5 9 2 | 5 | [3,1,5,9,2]   | [1, 2, 3, 5, 9] | 1, 1, 2, 4     | 1        | `1`    |
| 5 <br> 3 <br> 1 1000 500 | 3 | [1,1000,500] | [1, 500, 1000]  | 499, 500       | 499      | `499`  |
| 5 <br> 2 <br> 10 20     | 2 | [10, 20]      | [10, 20]        | 10             | 10       | `10`   |
| 5 <br> 4 <br> 1 3 9 100 | 4 | [1,3,9,100]  | [1, 3, 9, 100]  | 2, 6, 91       | 2        | `2`    |
| 5 <br> 6 <br> 2 3 8 4 6 10| 6 | [2..10]     | [2, 3, 4, 6, 8, 10] | 1, 1, 2, 2, 2  | 1        | `1`    |

## Forma de resolverlo

### a) Enfoque Algorítmico (Diferencia Mínima Adyacente)
La clave del problema está en cómo minimizar la diferencia `|max(Team1) - max(Team2)|`.
1.  **Ordenar:** Primero, ordena las fuerzas de los atletas en orden ascendente: `s_1 <= s_2 <= ... <= s_n`.
2.  **Considerar Diferencias:** Sea `d = |max(Team1) - max(Team2)|` la diferencia que queremos minimizar. Supongamos que `max(Team1) = s_i` y `max(Team2) = s_j`. Si `i < j`, la diferencia es `s_j - s_i`.
3.  **Límite Inferior:** La diferencia `s_j - s_i` siempre se puede expresar como una suma de diferencias entre elementos adyacentes: `s_j - s_i = (s_j - s_{j-1}) + ... + (s_{i+1} - s_i)`. Como todas las fuerzas son distintas, cada diferencia adyacente `s_{k+1} - s_k` es al menos 1. La diferencia `s_j - s_i` será mínima cuando los elementos `s_i` y `s_j` estén lo más "cerca" posible en valor. La menor diferencia posible entre *cualquier* par de fuerzas distintas `s_j - s_i` ocurrirá cuando `j = i+1` (es decir, entre elementos adyacentes en la lista ordenada).
4.  **Mínimo Adyacente:** Calcula la diferencia entre cada par de atletas adyacentes en la lista ordenada: `diff_k = s_{k+1} - s_k` para `k` desde 1 hasta `n-1`.
5.  **Resultado:** El valor mínimo encontrado entre estas diferencias adyacentes (`min(diff_k)`) es la respuesta. ¿Por qué? Porque hemos demostrado que cualquier diferencia `|max(Team1) - max(Team2)|` debe ser al menos tan grande como la mínima diferencia adyacente. No necesitamos construir explícitamente los equipos; el valor mínimo de la diferencia es suficiente.

### b) Enfoque Matemático (Minimizando la Brecha)
Buscamos minimizar `|m1 - m2|`, donde `m1` y `m2` son las fuerzas máximas de dos equipos que forman una partición de los atletas.
1.  Sean `s_1 < s_2 < ... < s_n` las fuerzas ordenadas.
2.  Cualquier diferencia `|m1 - m2|` será la diferencia entre dos de estas fuerzas, `|s_j - s_i|`.
3.  El problema equivale a encontrar el mínimo valor de `|s_j - s_i|` entre todos los pares `i != j`.
4.  Cuando las fuerzas están ordenadas, la diferencia mínima entre cualquier par `s_j, s_i` (con `j > i`) ocurre necesariamente cuando `j = i+1`. Si hubiera un par `s_j, s_i` con `j > i+1` cuya diferencia fuera menor que todas las diferencias `s_{k+1} - s_k`, tendríamos `s_j - s_i < s_{i+1} - s_i`, lo que implicaría `s_j < s_{i+1}`, contradiciendo el ordenamiento ya que `j >= i+2`.
5.  Por lo tanto, basta con calcular `min(s_{i+1} - s_i)` para `i` de 1 a `n-1`.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer el número de atletas `n`.
    b.  Leer las `n` fuerzas en un arreglo `s`.
    c.  Ordenar el arreglo `s` en orden ascendente.
    d.  Inicializar `min_diff` con un valor grande (o con `s[1] - s[0]`).
    e.  Iterar `i` desde 0 hasta `n-2`.
    f.  Calcular la diferencia adyacente: `diff = s[i+1] - s[i]`.
    g.  Actualizar `min_diff = min(min_diff, diff)`.
    h.  Después del bucle, imprimir `min_diff`.

## Notas Adicionales
*   **Clave:** El problema se reduce a encontrar la mínima diferencia entre elementos adyacentes después de ordenar las fuerzas. No es necesario simular la formación de equipos.
*   **Distintos:** El hecho de que las fuerzas sean distintas garantiza que la diferencia mínima siempre será >= 1.
*   **Código vs. Problema:** El código proporcionado calcula `min(fuerzas[j] - fuerzas[i])` sobre *todos* los pares `j > i`. Aunque esto es O(N^2) sin ordenar, después de ordenar (como hace el código), la lógica sigue siendo correcta porque el mínimo global se encontrará necesariamente entre pares adyacentes. Sin embargo, una implementación O(N log N + N) es suficiente (ordenar + un solo bucle sobre adyacentes).

## Complejidad

| Tipo        | Complejidad (por caso) |
| :---------- | :--------------------- |
| Temporal    | O(N log N)             |
| Espacial    | O(N) / O(1) (aux)      |

*La complejidad temporal está dominada por la ordenación de las fuerzas, O(N log N). El bucle para encontrar la diferencia mínima es O(N). La complejidad espacial es O(N) si se necesita un arreglo auxiliar para ordenar o O(1) auxiliar si se ordena in-place.*