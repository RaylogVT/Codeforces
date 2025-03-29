# 1624A - Plus One on the Subset

**Enlace:** https://codeforces.com/problemset/problem/1624/A

## Resumen del problema
Se te da un arreglo `a` de `n` enteros. La operación permitida es elegir cualquier subconjunto (puede ser vacío, puede ser todo el conjunto) de índices del arreglo e incrementar en 1 los elementos en esos índices elegidos. Debes encontrar el número mínimo de operaciones necesarias para hacer que todos los elementos del arreglo sean iguales. Este problema se centra en identificar el rango de valores en el arreglo.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 1000), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un entero `n` (1 <= n <= 50), el tamaño del arreglo.
    -   La segunda línea contiene `n` enteros `a_1, a_2, ..., a_n` (1 <= a_i <= 10⁹), los elementos del arreglo.

## Output
Para cada caso de prueba, imprime un solo entero: el mínimo número de operaciones requeridas.

## Restricciones

| Variable      | Rango      |
| :------------ | :--------- |
| t (casos)     | [1, 1000]  |
| n (tamaño)    | [1, 50]    |
| a_i (elementos)| [1, 10⁹]   |

## Ejemplos

| Input          | n | a            | Min | Max | Max - Min | Output |
| :------------- | :- | :----------- | :-- | :-- | :-------- | :----- |
| 5 <br> 3 <br> 1 2 3 | 3 | [1, 2, 3]    | 1   | 3   | 2         | `2`    |
| 5 <br> 4 <br> 4 4 4 4 | 4 | [4, 4, 4, 4] | 4   | 4   | 0         | `0`    |
| 5 <br> 5 <br> 4 2 1 3 5 | 5 | [4,2,1,3,5]  | 1   | 5   | 4         | `4`    |
| 5 <br> 1 <br> 100     | 1 | [100]        | 100 | 100 | 0         | `0`    |
| 5 <br> 2 <br> 10 1      | 2 | [10, 1]      | 1   | 10  | 9         | `9`    |

## Forma de resolverlo

### a) Enfoque Algorítmico (Objetivo y Elemento Mínimo)
1.  **Valor Final:** Dado que la única operación permitida es incrementar valores, para que todos los elementos se vuelvan iguales, el valor final `T` al que todos convergen debe ser al menos tan grande como el valor máximo original en el arreglo (`max_val = max(a)`).
2.  **Minimizar Operaciones:** Para usar el número mínimo de operaciones, debemos elegir el valor final `T` más pequeño posible, que es `T = max_val`.
3.  **Elemento Crítico:** El número de operaciones estará determinado por el elemento que necesita más incrementos para alcanzar `max_val`. Este es el elemento mínimo original (`min_val = min(a)`).
4.  **Número de Incrementos:** El elemento `min_val` necesita ser incrementado `max_val - min_val` veces en total.
5.  **Operaciones:** ¿Podemos lograr esto en exactamente `max_val - min_val` operaciones? Sí. En cada operación `k` (desde 1 hasta `max_val - min_val`), podemos elegir incrementar todos los elementos `a_i` que actualmente sean menores que `max_val`. Esto asegura que `min_val` (y todos los demás elementos menores que `max_val`) se incrementen en cada paso necesario, mientras que los elementos que ya alcanzaron `max_val` no se incrementan más.
6.  **Resultado:** Por lo tanto, el número mínimo de operaciones es exactamente la diferencia entre el valor máximo y el valor mínimo en el arreglo original.

### b) Enfoque Matemático (Reducción del Rango)
1.  El objetivo es hacer que todos los `a_i` sean iguales. Esto es equivalente a reducir el "rango" del arreglo (la diferencia entre el máximo y el mínimo) a cero.
2.  Consideremos la diferencia `d = max(a) - min(a)`.
3.  Cada operación consiste en incrementar un subconjunto de elementos. ¿Cómo afecta esto a la diferencia `d`?
    *   Si incrementamos tanto el elemento máximo actual como el mínimo actual (si son diferentes), la diferencia `d` no cambia.
    *   Si incrementamos el mínimo actual pero no el máximo actual, la diferencia `d` disminuye en 1.
    *   Si incrementamos el máximo actual pero no el mínimo actual, la diferencia `d` aumenta en 1 (esto no nos ayuda a reducir el rango).
    *   Si no incrementamos ni el máximo ni el mínimo actual, la diferencia `d` no cambia.
4.  Para reducir la diferencia `d` a cero en el mínimo número de pasos, debemos, en cada paso, asegurarnos de que incrementamos el mínimo actual (y potencialmente otros elementos < max actual) pero *no* incrementamos el máximo actual.
5.  Esto reduce la diferencia `d` en 1 en cada operación.
6.  El número de operaciones necesarias para reducir la diferencia de `max(a) - min(a)` a 0 es, por lo tanto, `max(a) - min(a)`.

## Algoritmo (Basado en la lógica del código)
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer los `n` elementos del arreglo `a`.
    c.  Encontrar el valor máximo en el arreglo (`max_val`).
    d.  Encontrar el valor mínimo en el arreglo (`min_val`).
    e.  Calcular la diferencia: `resultado = max_val - min_val`.
    f.  Imprimir `resultado`.

## Notas Adicionales
*   **Clave del Problema:** La operación de "incrementar un subconjunto" permite efectivamente que el número mínimo de operaciones esté determinado únicamente por la diferencia entre el máximo y el mínimo elemento inicial. Solo necesitas acercar el mínimo al máximo.
*   **Simplicidad:** La solución final es muy directa: encontrar el máximo, encontrar el mínimo y calcular su diferencia.

## Complejidad

| Tipo        | Complejidad (por caso) | Notas                                           |
| :---------- | :--------------------- | :---------------------------------------------- |
| Temporal    | O(N)                   | Dominado por encontrar el min y max del arreglo. |
| Espacial    | O(N) / O(1) (aux)      | O(N) si almacenas el arreglo. O(1) auxiliar.    |

*La complejidad para encontrar el mínimo y máximo en un arreglo de tamaño N es O(N).*