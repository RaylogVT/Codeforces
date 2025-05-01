# 1915B - Not Quite Latin Square

**Enlace:** https://codeforces.com/problemset/problem/1915/B

## Resumen del problema
Se te da una cuadrícula de 3x3 que contiene las letras 'A', 'B', 'C', y un único signo de interrogación '?'. Se garantiza que la cuadrícula original (antes de reemplazar una letra por '?') era un Cuadrado Latino, lo que significa que cada letra ('A', 'B', 'C') aparecía exactamente una vez en cada fila y en cada columna. Tu tarea es determinar qué letra ('A', 'B', o 'C') fue reemplazada por el signo de interrogación.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 108$), el número de casos de prueba.
-   Cada caso de prueba consiste en tres líneas, cada una con tres caracteres, representando la cuadrícula de 3x3.
-   Cada carácter es 'A', 'B', 'C', o '?'.
-   Se garantiza que en cada cuadrícula hay exactamente un carácter '?'.

## Output
Para cada caso de prueba, imprime la letra ('A', 'B', o 'C') que fue reemplazada por '?'.

## Restricciones

| Variable     | Rango      | Notas                                     |
| :----------- | :--------- | :---------------------------------------- |
| t (casos)    | [1, 108]   |                                           |
| Cuadrícula   | 3x3        | Contiene 'A', 'B', 'C', y un '?'          |
| Propiedad    |            | Originalmente un Cuadrado Latino. Exactamente un '?'. |

## Ejemplos

| Input (Cuadrícula 3x3) | Cuadrícula (Visualización) | Fila con '?' | Letras en esa fila (sin '?') | Letra Faltante | Output |
| :--------------------- | :------------------------- | :-----------: | :--------------------------- | :-------------: | :----- |
| ```
A B C
B ? A
C A B
```                   | ```
A B C
B ? A
C A B
```                       | Fila 1 (0-based) | {'B', 'A'}                   | C               | `C`    |
| ```
C ? B
B C A
A C B
```                   | ```
C ? B
B C A
A C B
```                       | Fila 0 (0-based) | {'C', 'B'}                   | A               | `A`    |
| ```
? C A
C A B
A B C
```                   | ```
? C A
C A B
A B C
```                       | Fila 0 (0-based) | {'C', 'A'}                   | B               | `B`    |

*(Nota: El primer ejemplo en la descripción anterior tenía un output incorrecto según la lógica derivada. Se ha corregido aquí.)*

## Forma de resolverlo

### Enfoque Algorítmico (Análisis de Fila con Interrogación)
La propiedad clave de un Cuadrado Latino es que cada letra ('A', 'B', 'C' en este caso) debe aparecer exactamente una vez en cada fila y en cada columna. Como sabemos que solo una letra fue reemplazada por '?', podemos usar esta propiedad para encontrar la letra faltante.

1.  **Identificar Fila Afectada:** Recorre las tres filas de la cuadrícula de entrada. Encuentra la fila que contiene el carácter '?'.
2.  **Determinar Letras Presentes:** En esa fila específica, identifica qué letras ('A', 'B' o 'C') están presentes (ignorando el '?'). Habrá exactamente dos letras distintas presentes.
3.  **Identificar Letra Faltante:** Compara las letras encontradas en esa fila con el conjunto completo {'A', 'B', 'C'}. La letra que está en el conjunto completo pero no en la fila (entre los caracteres que no son '?') es la letra que debe ir en la posición del '?'.
4.  **Imprimir Resultado:** Imprime la letra faltante identificada.

## Análisis Matemático: Propiedad de Fila de Cuadrados Latinos

**1. Definición de Cuadrado Latino (3x3):**
Un Cuadrado Latino de 3x3 sobre el conjunto de símbolos $S = \{'A', 'B', 'C'\}$ es una cuadrícula $L$ de $3 \times 3$ tal que cada símbolo en $S$ aparece exactamente una vez en cada fila y exactamente una vez en cada columna.

**2. Propiedad Clave:**
Consideremos una fila cualquiera $i$ (donde $i \in \{0, 1, 2\}$) de un Cuadrado Latino $L$. El conjunto de caracteres en esa fila, $\{L_{i,0}, L_{i,1}, L_{i,2}\}$, debe ser igual al conjunto $S = \{'A', 'B', 'C'\}$.

**3. Cuadrícula del Problema:**
Se nos da una cuadrícula $G$ que se obtiene de un Cuadrado Latino $L$ reemplazando una única celda $L_{r,c}$ por '?'. Es decir, $G_{r,c} = '?'$ para alguna fila $r$ y columna $c$, y $G_{i,j} = L_{i,j}$ para todo $(i, j) \neq (r, c)$.

**4. Encontrar la Letra Faltante:**
Consideremos la fila $r$ donde se encuentra el '?'. Los caracteres en esta fila de la cuadrícula $G$ son $G_{r,0}, G_{r,1}, G_{r,2}$. Uno de estos es '?'. Los otros dos son letras de $S$.
Sea $S_{fila\_r}$ el conjunto de letras *visibles* en la fila $r$ de $G$:
$$ S_{fila\_r} = \{ G_{r,j} \mid j \in \{0, 1, 2\} \text{ y } G_{r,j} \neq '?' \} $$
Como la fila $r$ del Cuadrado Latino original $L$ contenía exactamente {'A', 'B', 'C'}, y solo un carácter fue reemplazado por '?', el conjunto $S_{fila\_r}$ contendrá exactamente dos letras distintas. La letra que falta en $S_{fila\_r}$ en comparación con el conjunto completo $S = \{'A', 'B', 'C'\}$ es precisamente la letra $L_{r,c}$ que fue reemplazada por '?'.
Matemáticamente, la letra faltante es el único elemento en el conjunto diferencia:
$$ \{'A', 'B', 'C'\} \setminus S_{fila\_r} $$

**5. Ejemplo:**
Si la fila con '?' es `C ? B`, entonces $S_{fila\_r} = \{'C', 'B'\}$.
El conjunto completo es $S = \{'A', 'B', 'C'\}$.
La diferencia $S \setminus S_{fila\_r} = \{'A'\}$. Por lo tanto, la letra faltante (y la respuesta) es 'A'.

Este enfoque utiliza la propiedad de las filas. Podríamos usar igualmente la propiedad de las columnas: encontrar la columna con '?' y determinar qué letra falta en esa columna. El resultado será el mismo.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer las 3 líneas de la cuadrícula y almacenarlas (por ejemplo, en una lista de cadenas o una matriz 2D).
    b.  Iterar a través de las filas `i` de 0 a 2:
        i.  Verificar si la fila `i` contiene el carácter '?'.
        ii. Si contiene '?':
            1.  Inicializar indicadores booleanos o un conjunto para rastrear las letras presentes en esta fila: `tiene_A = false`, `tiene_B = false`, `tiene_C = false`.
            2.  Iterar a través de los caracteres `c` en la fila `i`:
                *   Si `c == 'A'`, establecer `tiene_A = true`.
                *   Si `c == 'B'`, establecer `tiene_B = true`.
                *   Si `c == 'C'`, establecer `tiene_C = true`.
            3.  Verificar qué letra falta:
                *   Si `tiene_A` es `false`, imprimir 'A'.
                *   Si `tiene_B` es `false`, imprimir 'B'.
                *   Si `tiene_C` es `false`, imprimir 'C'.
            4.  Salir del bucle de filas (break), ya que hemos encontrado la respuesta para este caso de prueba.

## Notas Adicionales
*   **Unicidad:** La garantía de que hay exactamente un '?' y que proviene de un Cuadrado Latino asegura que este método siempre encontrará una única letra faltante.
*   **Alternativa:** En lugar de booleanos, se puede sumar el valor ASCII/numérico de 'A', 'B', 'C' y restar los valores de los caracteres conocidos en la fila para encontrar el faltante, pero el enfoque con booleanos/conjuntos es conceptualmente más simple.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                                          |
| :------- | :--------------------- | :--------------------------------------------- |
| Temporal | O(1)                   | Se procesan 3x3 = 9 celdas (constante).        |
| Espacial | O(1)                   | Se almacena la cuadrícula (9 chars) y algunas variables booleanas/contadores. |