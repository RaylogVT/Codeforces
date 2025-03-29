# 702A - Maximum Increase

**Enlace:** https://codeforces.com/problemset/problem/702/A

## Resumen del problema
Dado un arreglo de números enteros, encontrar la longitud del subsegmento (subarreglo contiguo) más largo que sea estrictamente creciente.

## Input
-   La primera línea contiene un número entero `N`, la cantidad de números en el arreglo.
-   La segunda línea contiene `N` números enteros `a_1, a_2, ..., a_N`, los elementos del arreglo, separados por espacios.

## Output
Imprime un solo número entero: la longitud máxima de un subsegmento estrictamente creciente encontrado en el arreglo.

## Restricciones

| Variable    | Rango         |
| :---------- | :------------ |
| N           | [1, 10⁵]      |
| aᵢ (elementos del arreglo) | [1, 10⁹]      |

## Ejemplos

| Input             | Arreglo         | Razonamiento                                                                 | Output |
| :---------------- | :-------------- | :--------------------------------------------------------------------------- | :----- |
| 5 <br> 1 7 2 11 15 | `[1, 7, 2, 11, 15]` | Subsegmentos crecientes: `[1, 7]` (longitud 2), `[2, 11, 15]` (longitud 3). El más largo es 3. | `3`    |
| 6 <br> 1 2 3 1 2 3 | `[1, 2, 3, 1, 2, 3]` | Subsegmentos crecientes: `[1, 2, 3]` (longitud 3), `[1, 2, 3]` (longitud 3). El más largo es 3. | `3`    |
| 3 <br> 3 2 1       | `[3, 2, 1]`       | Subsegmentos crecientes: `[3]` (longitud 1), `[2]` (longitud 1), `[1]` (longitud 1). El más largo es 1. | `1`    |
| 1 <br> 100         | `[100]`         | El único subsegmento es `[100]` (longitud 1).                                  | `1`    |

## Forma de resolverlo

### a) Enfoque Algorítmico (Seguimiento de Longitud)
Este es el método directo y más común para implementar la solución. Se basa en recorrer el arreglo y mantener dos contadores:
1.  `longitud_actual`: Rastrea la longitud del subsegmento creciente que se está formando en el momento actual. Se incrementa si el elemento actual es mayor que el anterior, y se reinicia a 1 si no lo es.
2.  `longitud_maxima`: Almacena la mayor `longitud_actual` encontrada hasta ese punto del recorrido. Se actualiza cada vez que `longitud_actual` supera a `longitud_maxima`.
Se itera desde el segundo elemento, comparando con el anterior, y actualizando los contadores según corresponda. Al final, `longitud_maxima` contiene el resultado.

### b) Enfoque Matemático (Análisis de Diferencias Positivas)
Podemos ver el problema desde la perspectiva de las diferencias entre elementos consecutivos. Un subsegmento `a[i], a[i+1], ..., a[j]` es estrictamente creciente si y solo si la diferencia `a[k] - a[k-1]` es estrictamente positiva (`> 0`) para todo `k` desde `i+1` hasta `j`.

1.  El objetivo es encontrar la secuencia más larga de índices consecutivos `k` para los cuales `a[k] - a[k-1] > 0`.
2.  Aunque el algoritmo no calcula explícitamente estas diferencias, su lógica se basa en el *signo* de esta diferencia implícita.
3.  Si `a[i] - a[i-1] > 0` (diferencia positiva), la longitud de la secuencia actual de diferencias positivas aumenta en 1.
4.  Si `a[i] - a[i-1] <= 0` (diferencia no positiva), la secuencia actual de diferencias positivas se rompe. La longitud de la nueva secuencia empieza en 1 (correspondiente al elemento `a[i]` solo).
5.  Se busca la longitud máxima alcanzada por estas secuencias de diferencias positivas consecutivas. Este enfoque conceptualmente justifica por qué reiniciamos el contador (`longitud_actual`) a 1 cuando la condición `a[i] > a[i-1]` falla.

## Algoritmo
*(Refleja la implementación del código, que corresponde al método a) Enfoque Algorítmico)*
1.  Leer el valor de `N`.
2.  Leer los `N` elementos del arreglo.
3.  Si `N` es 0, el resultado es 0. Si `N` es 1, el resultado es 1. (El código asume N>=1).
4.  Inicializar `longitud_maxima = 1`.
5.  Inicializar `longitud_subarreglo_actual = 1`.
6.  Iterar por el arreglo desde el segundo elemento (índice 1) hasta el final (índice `N-1`).
7.  En cada iteración `i`:
    a.  Comparar `arreglo[i]` con `arreglo[i-1]`.
    b.  **Si `arreglo[i] > arreglo[i-1]`**:
        i.  Incrementar `longitud_subarreglo_actual` en 1.
        ii. Actualizar `longitud_maxima = max(longitud_maxima, longitud_subarreglo_actual)`.
    c.  **Si `arreglo[i] <= arreglo[i-1]`**:
        i.  Reiniciar `longitud_subarreglo_actual = 1`.
8.  Al finalizar el bucle, imprimir `longitud_maxima`.

## Complejidad

| Tipo        | Complejidad     |
| :---------- | :-------------- |
| Temporal    | O(N)            |
| Espacial    | O(1) (auxiliar) |

*La complejidad temporal es O(N) porque recorremos el arreglo una sola vez. La complejidad espacial auxiliar es O(1) porque solo usamos un número constante de variables adicionales (sin contar el espacio para almacenar el arreglo de entrada).*