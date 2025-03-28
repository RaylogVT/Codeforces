# 1520A - Do Not Be Distracted!

**Enlace:** https://codeforces.com/problemset/problem/1520/A

## Resumen del problema
Un estudiante trabaja en `n` tareas durante `n` días, una tarea por día. El registro de las tareas realizadas se da como una cadena de caracteres, donde cada caracter representa una tarea. El estudiante sigue una regla: si decide cambiar de tarea (es decir, la tarea del día `i` es diferente a la del día `i-1`), *nunca* vuelve a trabajar en una tarea que ya había realizado *antes* de hacer ese cambio. Debes determinar si el estudiante podría haberse distraído, lo cual ocurre si la secuencia de tareas viola esta regla. Es decir, ¿aparece alguna tarea, luego otra(s) tarea(s), y luego la primera tarea de nuevo?

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 1000), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un entero `n` (1 <= n <= 50), el número de días (y longitud de la cadena).
    -   La segunda línea contiene una cadena `s` de longitud `n`, que consiste en letras mayúsculas del alfabeto inglés ('A'-'Z'), representando las tareas realizadas cada día.

## Output
Para cada caso de prueba, imprime "YES" si el estudiante no se distrajo (cumplió la regla) o "NO" si se distrajo (violó la regla).

## Restricciones

| Variable         | Rango         |
| :--------------- | :------------ |
| t (casos)        | [1, 1000]     |
| n (días/longitud)| [1, 50]       |
| s (caracteres)   | 'A' - 'Z'     |

## Ejemplos

| Input         | n | s           | Análisis                                     | Output |
| :------------ | :- | :---------- | :------------------------------------------- | :----- |
| 6 <br> 3 <br> ABA | 3 | ABA         | Día 1: A. Día 2: B (cambio). Día 3: A (volvió a A). Distraído. | `NO`   |
| 6 <br> 6 <br> ABBCDA | 6 | ABBCDA    | A->B (ok). B->B (ok). B->C (ok). C->D (ok). D->A (volvió a A). Distraído. | `NO`   |
| 6 <br> 4 <br> ABCA | 4 | ABCA        | A->B (ok). B->C (ok). C->A (volvió a A). Distraído. | `NO`   |
| 6 <br> 4 <br> ABCB | 4 | ABCB        | A->B (ok). B->C (ok). C->B (volvió a B). Distraído. | `NO`   |
| 6 <br> 2 <br> AA   | 2 | AA          | No hubo cambios. No distraído.               | `YES`  |
| 6 <br> 5 <br> ABCDE | 5 | ABCDE     | A->B->C->D->E. Nunca volvió a una tarea anterior. No distraído. | `YES`  |
| 6 <br> 7 <br> ABACABA | 7 | ABACABA     | A->B (ok). B->A (volvió a A). Distraído.    | `NO`   |

## Forma de resolverlo

### a) Enfoque Algorítmico (Seguimiento de Tareas Vistas)
La regla se viola si en algún día `i` (`i > 0`), la tarea `s[i]` es diferente a la tarea del día anterior `s[i-1]`, pero la tarea `s[i]` ya se había realizado en algún día `j` donde `j < i-1`.
1.  Se puede usar un conjunto (`set`) o un arreglo booleano para marcar las tareas que ya se han "completado" (es decir, ya se cambió de esa tarea a otra).
2.  Itera por la cadena `s` desde el principio. Mantén un registro de la tarea actual.
3.  Si la tarea cambia (`s[i] != s[i-1]`):
    *   Marca la tarea anterior (`s[i-1]`) como "vista" o "completada".
    *   Verifica si la nueva tarea (`s[i]`) ya está marcada como "vista".
    *   Si la nueva tarea ya estaba marcada, significa que se violó la regla (se volvió a una tarea anterior después de un cambio). La respuesta es "NO".
4.  Si se recorre toda la cadena sin encontrar una violación, la respuesta es "YES".

El código proporcionado implementa una variante: para cada día `i`, verifica si la tarea `s[i]` es diferente a `s[i-1]` y si `s[i]` aparece en *cualquier* posición `j < i`. Si ambas condiciones son verdaderas, se detecta la distracción.

### b) Enfoque Lógico (Bloques Contiguos)
La regla implica que todas las ocurrencias de una misma tarea deben formar un bloque *contiguo* en la cadena. Si una letra aparece en dos bloques separados por otras letras, entonces la regla se ha violado.
1.  Para verificar esto, podemos iterar a través de la cadena.
2.  Cuando encontramos un cambio de caracter (`s[i] != s[i-1]`), necesitamos asegurarnos de que el nuevo caracter `s[i]` no haya aparecido antes en la cadena.
3.  Podemos mantener un registro (ej. un set) de las letras que ya hemos visto en bloques anteriores.
4.  Itera `i` de 1 a `n-1`.
5.  Si `s[i] != s[i-1]`:
    *   Verifica si `s[i]` ya está en nuestro registro de letras vistas en bloques anteriores.
    *   Si sí está, la respuesta es "NO".
    *   Si no está, añade `s[i-1]` al registro (ya que acabamos de terminar el bloque de `s[i-1]`).
6.  Si terminamos el bucle sin retornar "NO", la respuesta es "YES". (Hay que tener cuidado con el manejo inicial y final).

Una forma más simple de pensar en esto (como en el código): Si `s[i]` es diferente de `s[i-1]`, ¿ha aparecido `s[i]` *antes* de la posición `i`? Si sí, es una violación.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer la cadena `s`.
    c.  Inicializar una bandera `distraido = false`.
    d.  Iterar `i` desde 1 hasta `n-1`.
    e.  **Si `s[i] != s[i-1]`:** (Hubo un cambio de tarea)
        i.   Verificar si el caracter `s[i]` existe en la subcadena `s[0...i-1]` (es decir, si `s[i]` apareció antes del día actual `i`).
        ii.  **Si `s[i]` apareció antes:** Establecer `distraido = true` y romper el bucle.
    f.  Después del bucle, si `distraido` es `true`, imprimir "NO".
    g.  Si `distraido` es `false`, imprimir "YES".

## Notas Adicionales
*   **Condición Clave:** La violación ocurre *solo* si se cambia a una tarea (`s[i] != s[i-1]`) que ya se había realizado *antes* (`s[i]` existe en `s[0...i-1]`).
*   **Implementación:** Usar `in` con slicing (`s[letra] in tareas[:letra]`) en Python o un `set` para verificar la existencia previa en C++ son formas eficientes para los límites dados.

## Complejidad

| Tipo        | Complejidad (por caso) | Notas                                    |
| :---------- | :--------------------- | :--------------------------------------- |
| Temporal    | O(N^2) o O(N)          | O(N^2) si la búsqueda previa es lineal (Python slicing/`in`). O(N) si se usa `set`. |
| Espacial    | O(N) o O(Sigma)        | O(N) si se crea substring/set completo cada vez. O(Sigma) si se mantiene un set/array de letras vistas (Sigma=26). |

*Para los límites dados (N<=50), ambas complejidades son aceptables. El enfoque con `set` es generalmente preferible para N más grandes.*