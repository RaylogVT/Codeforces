# 1742B - Increasing

**Enlace:** https://codeforces.com/problemset/problem/1742/B

## Resumen del problema
Dado un arreglo `a` de `n` enteros positivos, determina si, reordenando los elementos, puedes hacer que el arreglo sea estrictamente creciente. En otras palabras, determina si es posible reordenar los elementos de tal manera que `a_1 < a_2 < ... < a_n` se cumpla.

## Input
-   La primera línea contiene un solo entero `t` (1 <= t <= 100), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un solo entero `n` (1 <= n <= 100), la longitud del arreglo.
    -   La segunda línea contiene `n` enteros `a_1, a_2, ..., a_n` (1 <= a_i <= 10⁹), los elementos del arreglo.

## Output
Para cada caso de prueba, imprime "YES" (sin comillas) si el arreglo satisface la condición, y "NO" (sin comillas) en caso contrario.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 100]   |                                     |
| n (longitud) | [1, 100]   |                                     |
| a_i (elementos)| [1, 10⁹] | Enteros positivos                   |

## Ejemplos

| Input (n, a) | n | a         | ¿Estrictamente Creciente posible? | Output |
| :----------- | :- | :-------- | :-------------------------------- | :----- |
| (3, [1, 1, 2]) | 3 | [1, 1, 2] | No (duplicado)                    | `NO`   |
| (4, [1, 2, 4, 5]) | 4 | [1, 2, 4, 5]| Sí (todos únicos)                 | `YES`  |
| (3, [10, 20, 30]) | 3 | [10, 20, 30]| Sí (todos únicos)                 | `YES`  |
| (4, [1, 1, 1, 1]) | 4 | [1, 1, 1, 1]| No (duplicados)                   | `NO`   |

## Forma de resolverlo

### Enfoque Algorítmico (Verificación de Unicidad)
Un arreglo puede ser reordenado para ser estrictamente creciente si y solo si todos sus elementos son distintos (únicos). Si hay algún elemento duplicado, no será posible formar una secuencia donde cada elemento sea estrictamente mayor que el anterior.

1.  **Verificar Unicidad:** La tarea se reduce a comprobar si todos los elementos en el arreglo de entrada son únicos.
2.  **Usar un Set:** Una forma eficiente de verificar la unicidad es insertar todos los elementos del arreglo en una estructura de datos que solo almacene elementos únicos, como un `set`.
3.  **Comparar Tamaños:** Después de insertar todos los elementos en el `set`, compara el tamaño del `set` con la longitud original del arreglo. Si son iguales, significa que no se encontraron duplicados y todos los elementos son únicos. Si son diferentes, significa que había duplicados.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer los `n` elementos del arreglo `a`.
    c.  Crear un `set` vacío.
    d.  Iterar a través de cada `elemento` en el arreglo `a` e insertarlo en el `set`.
    e.  Si el tamaño del `set` es igual a `n`, imprimir "YES".
    f.  De lo contrario, imprimir "NO".

## Notas Adicionales
*   **Estrictamente Creciente:** La condición "estrictamente creciente" (`<`) es clave; si fuera "no decreciente" (`<=`), la presencia de duplicados estaría permitida.
*   **Eficiencia:** El uso de un `set` para verificar la unicidad es eficiente, con una complejidad temporal promedio de O(N) por caso de prueba.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | En promedio con el uso de un set.   |
| Espacial | O(N)                   | En el peor caso para el set (todos los elementos únicos). |
