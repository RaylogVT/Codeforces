# 1829B - Blank Space

**Enlace:** https://codeforces.com/problemset/problem/1829/B

## Resumen del problema
Se te da un arreglo binario de `n` elementos, que consiste solo en 0s y 1s. Un "espacio en blanco" es un segmento de elementos consecutivos que consisten solo en 0s. Tu tarea es encontrar la longitud del espacio en blanco más largo.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un solo entero `n` ($1 \le n \le 100$), la longitud del arreglo.
    -   La segunda línea contiene `n` enteros separados por espacio $a_1, a_2, \dots, a_n$ ($0 \le a_i \le 1$), los elementos del arreglo.

## Output
Para cada caso de prueba, imprime un solo entero: la longitud del espacio en blanco más largo.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| n (longitud) | [1, 100]   |                                     |
| a_i (elementos)| [0, 1]   | Elementos del arreglo binario       |

## Ejemplos

| Input (n, a)                 | n | a                       | Espacios en Blanco | Longitud Máxima | Output |
| :--------------------------- | :-: | :---------------------- | :----------------- | :--------------: | :----- |
| (5, [1, 0, 0, 1, 0])         | 5 | [1, 0, 0, 1, 0]         | [0, 0], [0]        | 2               | `2`    |
| (4, [0, 1, 1, 1])            | 4 | [0, 1, 1, 1]            | [0]                | 1               | `1`    |
| (1, [0])                     | 1 | [0]                     | [0]                | 1               | `1`    |
| (3, [1, 1, 1])               | 3 | [1, 1, 1]               | []                 | 0               | `0`    |
| (9, [1, 0, 0, 0, 1, 0, 0, 0, 1]) | 9 | [1, 0, 0, 0, 1, 0, 0, 0, 1]| [0, 0, 0], [0, 0, 0]| 3               | `3`    |

## Forma de resolverlo

### Enfoque Algorítmico (Recorrido Lineal y Conteo)
Para encontrar la longitud del segmento contiguo más largo de ceros, podemos recorrer el arreglo una vez, manteniendo un contador para la longitud del segmento actual de ceros. Cuando encontramos un 1, el segmento actual de ceros termina, y comparamos su longitud con la longitud máxima encontrada hasta el momento, actualizando el máximo si es necesario. Luego, reiniciamos el contador del segmento actual a cero.

1.  **Inicializar Contadores:** Inicializa `longitud_maxima = 0` y `longitud_actual = 0`.
2.  **Recorrer Arreglo:** Itera a través de cada elemento del arreglo binario.
3.  **Actualizar Contadores:**
    *   Si el elemento actual es 0, incrementa `longitud_actual`.
    *   Si el elemento actual es 1, el segmento de ceros actual termina. Compara `longitud_actual` con `longitud_maxima` y actualiza `longitud_maxima = max(longitud_maxima, longitud_actual)`. Luego, reinicia `longitud_actual = 0`.
4.  **Considerar Último Segmento:** Después de terminar de recorrer el arreglo, es posible que el segmento de ceros más largo termine al final del arreglo. Por lo tanto, realiza una última comparación: `longitud_maxima = max(longitud_maxima, longitud_actual)`.
5.  **Resultado:** La `longitud_maxima` final es la respuesta.

## Análisis Matemático
El problema busca la longitud de la subsecuencia contigua más larga de ceros en una secuencia binaria finita. Sea el arreglo binario $A = [a_1, a_2, \dots, a_n]$, donde $a_i \in \{0, 1\}$. Un "espacio en blanco" corresponde a un segmento $A[i \dots j] = [a_i, a_{i+1}, \dots, a_j]$ tal que $a_k = 0$ para todo $k$ con $i \le k \le j$, y este segmento es maximal (no puede extenderse más). Buscamos el valor máximo de $j - i + 1$ sobre todos estos segmentos de ceros.

Este problema puede verse como encontrar la "racha" más larga de un valor específico (0) en una secuencia. El enfoque algorítmico de recorrido lineal es óptimo.

Formalmente, podemos definir una variable de estado $C_i$ como la longitud del segmento de ceros que termina *exactamente* en el índice $i$. Su cálculo depende del valor $a_i$ y del valor anterior $C_{i-1}$:
*   Si $a_i = 1$, entonces ningún segmento de ceros termina en $i$, por lo que $C_i = 0$.
*   Si $a_i = 0$:
    *   Si $i=1$ (el primer elemento es 0), entonces $C_1 = 1$.
    *   Si $i>1$, la longitud del segmento de ceros que termina en $i$ es uno más que la longitud del segmento que termina en $i-1$, es decir, $C_i = C_{i-1} + 1$.

La longitud del espacio en blanco más largo es el valor máximo alcanzado por $C_i$ para cualquier $i$ en el rango $1 \le i \le n$:
$$ \max_{1 \le i \le n} \{ C_i \} $$
El algoritmo de recorrido lineal calcula implícitamente estos valores de $C_i$ (en la variable `longitud_actual`) y mantiene el máximo encontrado hasta el momento (en la variable `longitud_maxima`).

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer los `n` enteros del arreglo binario (llamémoslo `a`).
    c.  Inicializar `max_len = 0` (longitud máxima encontrada).
    d.  Inicializar `current_len = 0` (longitud del segmento actual de ceros).
    e.  Iterar desde `i = 0` hasta `n-1`:
        i.  Si `a[i] == 0`:
            1.  Incrementar `current_len` en 1.
        ii. Si `a[i] == 1`:
            1.  Actualizar `max_len = max(max_len, current_len)`.
            2.  Reiniciar `current_len = 0`.
    f.  Después de que termine el bucle, es necesario verificar si el último segmento de ceros fue el más largo: `max_len = max(max_len, current_len)`.
    g.  Imprimir `max_len`.

## Notas Adicionales
*   **Casos Extremos:** El algoritmo maneja correctamente los casos donde el arreglo completo es de ceros (el `max_len` se actualiza correctamente al final) o no contiene ceros (`max_len` permanece en 0). También funciona si los segmentos de ceros están al principio o al final.
*   **Eficiencia:** El recorrido lineal es O(N), lo cual es óptimo.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | Recorrido lineal del arreglo.       |
| Espacial | O(1)                   | Espacio constante para contadores. |