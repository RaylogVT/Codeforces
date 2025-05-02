# 1850C - Word On The Paper

**Enlace:** https://codeforces.com/problemset/problem/1850/C

## Resumen del problema
Se te da una cuadrícula de 8x8 compuesta por puntos ('.') y letras minúsculas ('a'-'z'). Se garantiza que una palabra, formada únicamente por letras, está escrita verticalmente en una sola columna, de arriba abajo y de forma continua (sin puntos intermedios entre las letras de la palabra). Tu tarea es encontrar y mostrar esta palabra.

## Input
-   La primera línea contiene un entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Cada caso de prueba consiste en 8 líneas, cada una con 8 caracteres, representando la cuadrícula.
-   Cada carácter es '.' o una letra minúscula ('a'-'z').
-   Se garantiza que la palabra está en una única columna y es continua.

## Output
Para cada caso de prueba, imprime una sola línea conteniendo la palabra vertical encontrada en la cuadrícula.

## Restricciones

| Variable        | Rango                | Notas                                     |
| :-------------- | :------------------- | :---------------------------------------- |
| t (casos)       | [1, 1000]            |                                           |
| Tamaño Cuadrícula | 8 filas x 8 columnas | Contiene '.' y letras minúsculas ('a'-'z') |
| Palabra         | Longitud [1, 8]      | Vertical, continua, en una sola columna.  |

## Ejemplos

*(Los ejemplos corresponden a los mostrados en la imagen del problema)*

| Input (Cuadrícula 8x8)                 | Columna Palabra | Output   |
| :------------------------------------- | :-------------: | :------- |
| ```
........
........
........
........
...i....
........
........
........
```                                      | 3 (0-based)     | `i`      |
| ```
........
.l......
.o......
.s......
.t......
........
........
........
```                                      | 1 (0-based)     | `lost`   |
| ```
........
........
........
........
......t.
......h.
......e.
........
```                                      | 6 (0-based)     | `the`    |
| ```
........
........
........
........
.......g
.......a
.......m
.......e
```                                      | 7 (0-based)     | `game`   |
| ```
a.......
a.......
a.......
a.......
a.......
a.......
a.......
a.......
```                                      | 0 (0-based)     | `aaaaaaaa` |

## Forma de resolverlo

### Enfoque Algorítmico (Recorrido de Cuadrícula y Concatenación)
La forma más directa es recorrer la cuadrícula y recolectar todas las letras encontradas. Dado que la palabra está garantizada de estar en una sola columna y ser continua, el orden en que se encuentren las letras al recorrer fila por fila será el orden correcto de la palabra.

1.  **Inicializar Resultado:** Crea una cadena vacía (por ejemplo, `palabra_resultado`) para almacenar las letras encontradas.
2.  **Leer y Procesar Cuadrícula:** Lee las 8 líneas de entrada del caso de prueba actual.
3.  **Iterar:** Recorre cada carácter de la cuadrícula (por ejemplo, usando bucles anidados para filas $i$ de 0 a 7 y columnas $j$ de 0 a 7).
4.  **Identificar Letras:** Si el carácter en la posición $(i, j)$ no es un punto ('.') entonces es una letra que pertenece a la palabra.
5.  **Concatenar:** Añade la letra encontrada al final de `palabra_resultado`.
6.  **Imprimir:** Después de procesar las 8x8 celdas, `palabra_resultado` contendrá la palabra completa. Imprímela.

Este método funciona porque todos los caracteres que no son '.' pertenecen a la palabra buscada, y el recorrido estándar (fila por fila) los encontrará en el orden vertical correcto (de arriba a abajo).

## Análisis Matemático
Representamos la cuadrícula como una matriz $G$ de $8 \times 8$, donde $G_{i,j}$ es el carácter en la fila $i$ y la columna $j$ ($0 \le i, j < 8$).
El problema establece que existe una única columna $c$ ($0 \le c < 8$) tal que:
1.  Si $j \neq c$, entonces $G_{i,j} = '.'$ para todo $i$ ($0 \le i < 8$).
2.  Los caracteres en la columna $c$, $G_{0,c}, G_{1,c}, \dots, G_{7,c}$, forman la secuencia que contiene la palabra. Específicamente, la palabra $W$ se obtiene concatenando los caracteres $G_{i,c}$ que son letras (es decir, $G_{i,c} \neq '.'$), manteniendo el orden de las filas (índice $i$ creciente).

$$ W = \text{Concatenar}( G_{i,c} \mid 0 \le i < 8 \text{ y } G_{i,c} \neq '.' ) $$

El algoritmo simple de recorrer toda la matriz $G$ y concatenar cualquier carácter $G_{i,j}$ que no sea '.' funciona debido a estas garantías. Los únicos caracteres no-punto estarán en la columna $c$, y el orden de concatenación al recorrer por filas asegura que se respeta el orden vertical de las letras en la palabra $W$.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba (repetir `t` veces):
    a.  Inicializar una cadena vacía: `palabra = ""`.
    b.  Iterar `i` desde 0 hasta 7 (para cada fila):
        i.  Leer la $i$-ésima línea de la cuadrícula (una cadena de 8 caracteres).
        ii. Iterar `j` desde 0 hasta 7 (para cada carácter en la fila):
            1.  Sea `char =` el carácter en la posición `j` de la fila leída.
            2.  Si `char != '.'`:
                *   Añadir `char` al final de `palabra`: `palabra = palabra + char`.
    c.  Imprimir la cadena `palabra`.

## Notas Adicionales
*   **Tamaño Fijo:** La cuadrícula siempre es de 8x8, lo que hace que la complejidad sea constante por caso de prueba.
*   **Garantías Clave:** Las condiciones de que la palabra es vertical, continua y en una sola columna son cruciales para que el simple algoritmo de concatenación funcione. No es necesario encontrar explícitamente la columna `c`.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                                          |
| :------- | :--------------------- | :--------------------------------------------- |
| Temporal | O(1)                   | Se procesan 8x8 = 64 celdas (constante).       |
| Espacial | O(1)                   | Se almacena la cuadrícula (64 chars) y la palabra resultante (máx 8 chars). |