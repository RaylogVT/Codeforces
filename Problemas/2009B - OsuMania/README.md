# 2009B - OsuMania

**Enlace:** https://codeforces.com/problemset/problem/2009/B

## Resumen del problema
En el juego Osu!mania, los jugadores interactúan con un "beatmap" que consiste en varias filas. Cada fila representa un momento en el tiempo y contiene exactamente una nota (representada por el carácter '#') en una de sus columnas, mientras que el resto de los caracteres son vacíos (representados por '.'). El objetivo es determinar la posición de la columna (1-indexada) de la nota en cada fila y luego imprimir estas posiciones en orden inverso, es decir, desde la última fila del beatmap hasta la primera.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 100$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un solo entero `n` ($1 \le n \le 100$), el número de filas en el beatmap.
    -   Las siguientes `n` líneas contienen una cadena `s` de longitud `m` ($1 \le m \le 100$), que representa una fila del beatmap. Cada cadena `s` consiste en caracteres '.' y exactamente un '#'.

## Output
Para cada caso de prueba, imprime una sola línea que contenga `n` enteros separados por espacios. Estos enteros son las posiciones de columna (1-indexadas) de las notas, impresas desde la última fila del beatmap hasta la primera.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 100]   |                                     |
| n (filas)    | [1, 100]   |                                     |
| m (longitud de fila) | [1, 100]   |                                     |
| s (fila)     | longitud m | Contiene '.' y exactamente un '#'   |

## Ejemplos

| Input (t, n, beatmap) | n | beatmap | Razonamiento | Output |
| :-------------------- | :- | :------ | :----------- | :----- |
| 1 <br> 3 <br> ..# <br> .#. <br> #.. | 3 | `["..#", ".#.", "#.."]` | Fila 3 (índice 2): `#` en columna 1 <br> Fila 2 (índice 1): `#` en columna 2 <br> Fila 1 (índice 0): `#` en columna 3 <br> Imprimir de abajo a arriba: 1 2 3 | `1 2 3` |
| 1 <br> 2 <br> #. <br> .# | 2 | `["#.", ".#"]` | Fila 2 (índice 1): `#` en columna 2 <br> Fila 1 (índice 0): `#` en columna 1 <br> Imprimir de abajo a arriba: 2 1 | `2 1` |

## Forma de resolverlo

### Enfoque de Procesamiento Inverso
El problema requiere que las posiciones de las notas se impriman en un orden específico: de la última fila a la primera. Esto implica que no podemos procesar y emitir la salida directamente a medida que leemos las filas, ya que la primera fila leída debe ser la última en imprimirse. Por lo tanto, el enfoque se divide en dos fases principales:

1.  **Almacenamiento del Beatmap:** Primero, se deben leer todas las filas del beatmap y almacenarlas en una estructura de datos que permita el acceso por índice, como un `vector<string>` en C++ o una `list` en Python. Esto asegura que todas las filas estén disponibles para ser procesadas en el orden deseado más tarde.

2.  **Extracción e Impresión Inversa:** Una vez que todo el beatmap ha sido leído y almacenado, se itera sobre las filas comenzando desde la última (índice `n-1`) y retrocediendo hasta la primera (índice `0`). Para cada fila:
    *   Se busca el carácter '#' para encontrar su índice de columna (0-indexado).
    *   Este índice se convierte a una posición 1-indexada sumándole 1.
    *   Esta posición de columna se imprime. Es crucial manejar los espacios correctamente: se imprime un espacio después de cada número, excepto después del último número de la secuencia para cada caso de prueba.

## Análisis Matemático
Sea $B$ un beatmap compuesto por $N$ filas, donde cada fila $B_i$ (para $0 \le i < N$) es una cadena de caracteres de longitud $M$. Se garantiza que cada $B_i$ contiene exactamente un carácter '#'.
El objetivo es determinar la posición de columna $C_i$ del carácter '#' en cada fila $B_i$. Si la función `find('#')` devuelve el índice $j$ (0-indexado) de la columna donde se encuentra '#', entonces la posición 1-indexada es $j+1$.
La salida requerida es la secuencia de estas posiciones de columna en orden inverso de filas: $C_{N-1}, C_{N-2}, \dots, C_1, C_0$.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`, el número de filas del beatmap.
    b.  Crear una estructura de datos (por ejemplo, `std::vector<std::string>` en C++ o una lista en Python) para almacenar las `n` filas del beatmap.
    c.  Para `i` desde `0` hasta `n-1`:
        i.  Leer la `fila_actual` como una cadena.
        ii. Añadir `fila_actual` a la estructura de datos del beatmap.
    d.  Para `i` desde `n-1` (la última fila) hasta `0` (la primera fila), en decremento:
        i.  Encontrar el índice `j` del carácter '#' en la cadena `beatmap[i]`.
        ii. Calcular la posición de columna 1-indexada: `columna = j + 1`.
        iii. Imprimir `columna`. Si `i` es mayor que `0` (es decir, no es el último número a imprimir en la línea), imprimir un espacio después del número.
    e.  Después de imprimir todas las columnas para el caso de prueba actual, imprimir un salto de línea.

## Notas Adicionales
*   La función `string::find` en C++ o `str.find` en Python es ideal para localizar el carácter '#' en cada cadena de fila.
*   El problema es relativamente sencillo y no requiere algoritmos complejos o estructuras de datos avanzadas, ya que las restricciones de tamaño (`N` y `M` hasta 100) permiten un procesamiento lineal.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N * M)               | `N` filas, cada una de longitud `M`. Se lee cada fila y se busca el carácter '#' en ella. |
| Espacial | O(N * M)               | Se almacena el beatmap completo en memoria. |