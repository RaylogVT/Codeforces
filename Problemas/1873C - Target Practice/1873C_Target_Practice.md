# 1873C - Target Practice

**Enlace:** https://codeforces.com/problemset/problem/1873/C

## Resumen del problema
Se te da un tablero de 10x10 que representa un objetivo de tiro al blanco. El objetivo está compuesto por cinco "anillos" concéntricos. Las celdas en el anillo más externo (borde) valen 1 punto, las del siguiente anillo hacia adentro valen 2 puntos, y así sucesivamente, hasta las celdas del anillo central que valen 5 puntos. Recibes una cuadrícula de 10x10 que muestra dónde impactaron las flechas ('X') y dónde no ('.'). Debes calcular la puntuación total sumando los puntos correspondientes a cada celda que contiene una 'X'.

## Input
-   La primera línea contiene un entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Cada caso de prueba consiste en 10 líneas, cada una con 10 caracteres, representando la cuadrícula del objetivo.
-   Cada carácter es 'X' (una flecha) o '.' (vacío).

## Output
Para cada caso de prueba, imprime un solo entero: la puntuación total obtenida por las flechas.

## Restricciones

| Variable     | Rango      | Notas                                     |
| :----------- | :--------- | :---------------------------------------- |
| t (casos)    | [1, 1000]  |                                           |
| Cuadrícula   | 10x10      | Contiene 'X' y '.'                        |

## Ejemplos

*(Corresponden a los de la imagen del problema)*

| Input (Cuadrícula 10x10)                 | Output |
| :--------------------------------------- | :----- |
| ```
X.........
.X........
..X.......
...X......
....X.....
.....X....
......X...
.......X..
........X.
.........X
```                                          | `30`   |
| ```
..........
..........
..........
..........
....X.....
....X.....
..........
..........
..........
..........
```                                          | `10`   |
| ```
X.X.......
.X.X......
..X.X.....
...X.X....
....X.X...
.....X.X..
......X.X.
.......X.X
........X.
.........X
```                                          | `60`   |
| ```
XXXXXXXXXX
X........X
X.XXXXXX.X
X.X....X.X
X.X.XX.X.X
X.X.XX.X.X
X.X....X.X
X.XXXXXX.X
X........X
XXXXXXXXXX
```                                          | `138`  |
## Forma de resolverlo

### Enfoque Algorítmico (Mapeo de Puntos Precalculado y Suma)
La manera más sencilla es determinar de antemano cuántos puntos vale cada celda $(i, j)$ de la cuadrícula 10x10 y luego sumar los puntos de las celdas que contienen una 'X'.

**1. Mapeo de Puntos (Anillos):**
Los puntos dependen de qué tan "profunda" está la celda respecto al borde. La matriz de puntos $P$ donde $P_{i,j}$ es el valor de la celda en fila $i$, columna $j$ (usando índices 0 a 9) se visualiza así:

```text
      C O L U M N A S (j)
      0 1 2 3 4 5 6 7 8 9
    +---------------------
F 0 | 1 1 1 1 1 1 1 1 1 1
I 1 | 1 2 2 2 2 2 2 2 2 1
L 2 | 1 2 3 3 3 3 3 3 2 1
A 3 | 1 2 3 4 4 4 4 3 2 1
  4 | 1 2 3 4 5 5 4 3 2 1
(i) 5 | 1 2 3 4 5 5 4 3 2 1
  6 | 1 2 3 4 4 4 4 3 2 1
  7 | 1 2 3 3 3 3 3 3 2 1
  8 | 1 2 2 2 2 2 2 2 2 1
  9 | 1 1 1 1 1 1 1 1 1 1
```
Una celda $(i, j)$ pertenece al anillo $k$ (y vale $k$ puntos) si la distancia mínima desde $(i,j)$ a cualquiera de los 4 bordes es $k-1$.

**2. Algoritmo:**
    a.  Puedes precalcular o tener esta matriz de puntos almacenada.
    b.  Lee la cuadrícula de entrada 10x10 que contiene las 'X'.
    c.  Inicializa una variable `puntuacion_total = 0`.
    d.  Itera por cada celda $(i, j)$ de la cuadrícula de entrada (donde $i$ es la fila, $j$ la columna, de 0 a 9).
    e.  Si la celda $(i, j)$ de la entrada contiene una 'X':
        i.  Obtén el valor de puntos $P_{i,j}$ de la matriz de puntos precalculada (o calcúlalo sobre la marcha).
        ii. Añade $P_{i,j}$ a `puntuacion_total`.
    f.  Después de iterar por todas las celdas, imprime `puntuacion_total`.

## Análisis Matemático Detallado: Mapeo de Coordenadas a Puntos por Anillos

**1. Representación Formal:**
*   Sea $G$ una matriz de $10 \times 10$ que representa la cuadrícula de entrada, donde $G_{i,j}$ es el carácter en la fila $i$ y columna $j$ ($0 \le i, j \le 9$). $G_{i,j} \in \{'.', 'X'\}$.
*   Sea $P$ una matriz de $10 \times 10$ donde $P_{i,j}$ representa el valor de puntos asignado a la celda $(i, j)$.

**2. Definición Matemática de los Anillos:**
Los anillos se definen por la distancia de una celda al borde más cercano. Calculemos esta distancia para una celda $(i, j)$:
*   Distancia al borde superior: $i$
*   Distancia al borde inferior: $9-i$
*   Distancia al borde izquierdo: $j$
*   Distancia al borde derecho: $9-j$
La distancia mínima a cualquier borde, $d(i, j)$, es:
$$ d(i, j) = \min(i, 9-i, j, 9-j) $$
El valor de $d(i, j)$ varía entre 0 (para celdas en el borde mismo) y 4 (para las 4 celdas centrales: (4,4), (4,5), (5,4), (5,5)).

Podemos definir el conjunto de celdas $C_k$ que pertenecen al anillo $k$ (con $k$ de 1 a 5) como aquellas celdas cuya distancia mínima al borde es $k-1$:
*   Anillo 1 ($k=1$, 1 punto): $C_1 = \{ (i, j) \mid d(i, j) = 0 \}$. Estas son las celdas con $i=0$, $i=9$, $j=0$, o $j=9$.
*   Anillo 2 ($k=2$, 2 puntos): $C_2 = \{ (i, j) \mid d(i, j) = 1 \}$. Estas son las celdas con $i=1$, $i=8$, $j=1$, o $j=8$, *excluyendo* las que ya estaban en $C_1$.
*   Anillo 3 ($k=3$, 3 puntos): $C_3 = \{ (i, j) \mid d(i, j) = 2 \}$.
*   Anillo 4 ($k=4$, 4 puntos): $C_4 = \{ (i, j) \mid d(i, j) = 3 \}$.
*   Anillo 5 ($k=5$, 5 puntos): $C_5 = \{ (i, j) \mid d(i, j) = 4 \}$.

**3. Derivación de la Fórmula de Puntos ($P_{i,j}$):**
Observamos que el valor de puntos $k$ para un anillo corresponde a $1$ más la distancia mínima al borde $d(i,j) = k-1$. Por lo tanto, para cualquier celda $(i,j)$, su valor de puntos $P_{i,j}$ se puede calcular directamente a partir de su distancia mínima al borde $d(i,j)$:
$$ P_{i,j} = d(i, j) + 1 $$
Sustituyendo la fórmula para $d(i, j)$:
$$ P_{i,j} = 1 + \min(i, 9-i, j, 9-j) $$
Esta fórmula nos da el valor de puntos para cualquier celda $(i, j)$ sin necesidad de definir explícitamente los anillos.

**4. Cálculo de la Puntuación Total:**
La puntuación total es la suma de los valores de puntos $P_{i,j}$ de todas las celdas $(i, j)$ que contienen una flecha ('X'). Podemos expresar esto usando la función indicadora $\mathbb{I}(\cdot)$, que es 1 si su argumento (una condición) es verdadero, y 0 si es falso:
$$ \text{Puntuación Total} = \sum_{i=0}^9 \sum_{j=0}^9 P_{i,j} \cdot \mathbb{I}(G_{i,j} = 'X') $$
El término $\mathbb{I}(G_{i,j} = 'X')$ actúa como un filtro: si $G_{i,j}$ es 'X', el término es $P_{i,j} \cdot 1 = P_{i,j}$; si $G_{i,j}$ es '.', el término es $P_{i,j} \cdot 0 = 0$.
Sustituyendo la fórmula para $P_{i,j}$:
$$ \text{Puntuación Total} = \sum_{i=0}^9 \sum_{j=0}^9 (1 + \min(i, 9-i, j, 9-j)) \cdot \mathbb{I}(G_{i,j} = 'X') $$
El algoritmo implementa esta suma iterando sobre las 100 celdas, verificando si hay una 'X', calculando $P_{i,j}$ usando la fórmula del $\min$, y acumulando la puntuación.

## Algoritmo Detallado
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Inicializar `puntuacion_total = 0`.
    b.  Iterar `i` desde 0 hasta 9 (representando la fila):
        i.  Leer la $i$-ésima línea de la cuadrícula de entrada como una cadena `fila`.
        ii. Iterar `j` desde 0 hasta 9 (representando la columna):
            1.  Verificar si el carácter en `fila[j]` es 'X'.
            2.  Si es 'X':
                *   Calcular la distancia mínima a los bordes horizontales: `dist_h = min(i, 9-i)`.
                *   Calcular la distancia mínima a los bordes verticales: `dist_v = min(j, 9-j)`.
                *   Calcular la distancia mínima general: `dist_min = min(dist_h, dist_v)`.
                *   Calcular los puntos para esta celda: `puntos_celda = dist_min + 1`.
                *   Añadir estos puntos a la puntuación total: `puntuacion_total += puntos_celda`.
    c.  Imprimir `puntuacion_total`.

## Notas Adicionales
*   **Coordenadas:** El uso de índices 0 a 9 para filas y columnas es estándar en programación.
*   **Cálculo Eficiente:** Calcular $P_{i,j}$ sobre la marcha usando la fórmula $\min$ es computacionalmente barato y evita almacenar una matriz de puntos explícita.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                                          |
| :------- | :--------------------- | :--------------------------------------------- |
| Temporal | O(1)                   | Se procesan 10x10 = 100 celdas. Las operaciones dentro del bucle son constantes. |
| Espacial | O(1)                   | Se puede procesar fila por fila. El espacio requerido es mínimo (para la puntuación y variables temporales). |