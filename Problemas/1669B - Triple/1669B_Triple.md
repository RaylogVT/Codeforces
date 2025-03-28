# 1669B - Triple

**Enlace:** https://codeforces.com/problemset/problem/1669/B

## Resumen del problema
Se te da un arreglo `a` de `n` enteros. Tu tarea es encontrar *cualquier* valor entero que aparezca en el arreglo al menos tres veces. Si existen múltiples valores que cumplen esta condición, puedes devolver cualquiera de ellos. Si ningún valor aparece al menos tres veces, debes devolver -1.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 10⁴), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un entero `n` (1 <= n <= 2 * 10⁵), el tamaño del arreglo.
    -   La segunda línea contiene `n` enteros `a_1, a_2, ..., a_n` (1 <= a_i <= n), los elementos del arreglo.
-   Se garantiza que la suma de `n` sobre todos los casos de prueba no excede 2 * 10⁵.

## Output
Para cada caso de prueba, imprime un solo entero: un valor que aparezca al menos tres veces en el arreglo, o -1 si no existe tal valor.

## Restricciones

| Variable         | Rango         | Notas                           |
| :--------------- | :------------ | :------------------------------ |
| t (casos)        | [1, 10⁴]      |                                 |
| n (tamaño)       | [1, 2 * 10⁵]  |                                 |
| a_i (elementos)  | [1, n]        | Valor máximo limitado por `n`   |
| Suma total de n | <= 2 * 10⁵    |                                 |

## Ejemplos

| Input         | n | a                   | Frecuencias      | Triple? | Output |
| :------------ | :- | :------------------ | :--------------- | :------ | :----- |
| 7 <br> 1 <br> 1 | 1 | [1]                 | {1: 1}           | No      | `-1`   |
| 7 <br> 3 <br> 2 2 2 | 3 | [2, 2, 2]           | {2: 3}           | Sí (2)  | `2`    |
| 7 <br> 7 <br> 4 3 4 4 3 5 4 | 7 | [4,3,4,4,3,5,4] | {4: 4, 3: 2, 5: 1} | Sí (4)  | `4`    |
| 7 <br> 3 <br> 1 2 3 | 3 | [1, 2, 3]           | {1:1, 2:1, 3:1}  | No      | `-1`   |
| 7 <br> 8 <br> 1 4 3 4 3 4 1 1 | 8 | [1..1]        | {1: 3, 4: 3, 3: 2} | Sí (1 o 4) | `1`    |
| (Extra) 5 <br> 1 2 1 2 1 | 5 | [1,2,1,2,1] | {1: 3, 2: 2} | Sí (1) | 1 |

## Forma de resolverlo

### a) Enfoque Algorítmico (Conteo de Frecuencias)
La forma más directa de encontrar un elemento que aparece un cierto número de veces es contar la frecuencia de cada elemento en el arreglo.
1.  **Usar un Mapa/Diccionario:** Utiliza una estructura de datos para almacenar las frecuencias, como un `map` en C++ o un `dict` (o `defaultdict` / `Counter`) en Python. La clave será el número del arreglo y el valor será su conteo.
2.  **Iterar y Contar:** Recorre el arreglo de entrada `a`. Para cada elemento `x`:
    *   Incrementa su contador en el mapa/diccionario.
    *   **Verificación Temprana:** Inmediatamente después de incrementar, verifica si el contador para `x` ha alcanzado o superado 3.
    *   Si el contador es >= 3, has encontrado un elemento que cumple la condición. Guarda este elemento `x` como la respuesta y puedes detener el proceso (romper el bucle), ya que solo necesitas encontrar *uno*.
3.  **Resultado:** Si terminas de recorrer todo el arreglo sin que ningún contador alcance 3, significa que no existe tal elemento. En este caso, la respuesta es -1. Si encontraste un elemento en el paso 2, esa es tu respuesta.

### b) Enfoque Alternativo (Ordenación)
Otra técnica común para problemas de frecuencia es ordenar el arreglo primero.
1.  **Ordenar:** Ordena el arreglo `a` en orden ascendente (o descendente).
2.  **Iterar y Contar Bloques:** Recorre el arreglo ordenado. Los elementos iguales estarán juntos en bloques contiguos. Puedes contar la longitud de cada bloque.
3.  Si encuentras un bloque de un elemento `x` cuya longitud sea 3 o más, entonces `x` es la respuesta. Puedes detenerte aquí.
4.  Si llegas al final del arreglo sin encontrar un bloque de longitud >= 3, la respuesta es -1.
*Nota:* La implementación C++ proporcionada usa una variante de este enfoque, aunque su lógica interna para contar y avanzar el índice es un poco más compleja que simplemente contar bloques adyacentes.

## Algoritmo (Basado en Conteo de Frecuencias - como Python)
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer los `n` elementos del arreglo `a`.
    c.  Inicializar una estructura de datos para almacenar frecuencias (ej. `map<int, int> freq` o `defaultdict(int)`).
    d.  Inicializar una variable `resultado = -1`.
    e.  Iterar a través de cada `elemento` en el arreglo `a`:
        i.   Incrementar la frecuencia de `elemento`: `freq[elemento]++`.
        ii.  Verificar si `freq[elemento] >= 3`.
        iii. Si la frecuencia es 3 o más, asignar `resultado = elemento` y romper el bucle (break).
    f.  Después del bucle, imprimir `resultado`.

## Notas Adicionales
*   **Eficiencia:** El enfoque de conteo de frecuencias con un mapa/diccionario suele ser eficiente, con una complejidad temporal promedio de O(N).
*   **Alternativa de Ordenación:** El enfoque de ordenar primero tiene una complejidad de O(N log N) debido a la ordenación, pero puede usar menos espacio auxiliar (O(1) si se ordena in-place).
*   **Restricción de Valores:** El hecho de que `a_i <= n` es útil porque limita el rango de claves posibles en el mapa/diccionario si se usara un arreglo de frecuencias en lugar de un mapa hash.

## Complejidad

| Tipo        | Complejidad (por caso) | Notas                                                               |
| :---------- | :--------------------- | :------------------------------------------------------------------ |
| Temporal    | O(N) o O(N log N)      | O(N) en promedio con hash map. O(N log N) con ordenación.          |
| Espacial    | O(N) o O(1) (aux)      | O(N) en peor caso para hash map. O(1) auxiliar con ordenación in-place. |

*Dado que la suma total de N está limitada, el O(N) amortizado del hash map es generalmente muy bueno.*