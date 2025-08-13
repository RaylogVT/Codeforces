https://codeforces.com/problemset/problem/1985/B

# 1985B - Maximum Multiple Sum

## Resumen del problema
Se nos da un entero `N`. Debemos encontrar un entero `x` tal que $2 \le x \le N$, y la suma de los múltiplos de `x` que no exceden `N` sea maximizada. Es decir, queremos encontrar `x` que maximice la suma $x + 2x + 3x + \dots + kx$, donde $kx \le N$.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La única línea contiene un solo entero `N` ($2 \le N \le 1000$).

## Output
Para cada caso de prueba, imprime un solo entero: el valor de `x` que maximiza la suma de sus múltiplos hasta `N`.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| N (límite)   | [2, 1000]  |                                     |

## Ejemplos

| Input (N) | N | Múltiplos de x=2 (suma) | Múltiplos de x=3 (suma) | Otros x (suma) | Output |
| :-------- | :- | :---------------------- | :---------------------- | :------------- | :----- |
| 2         | 2 | 2 (2)                   | N/A                     | N/A            | `2`    |
| 3         | 3 | 2 (2)                   | 3 (3)                   | N/A            | `3`    |
| 4         | 4 | 2, 4 (6)                | 3 (3)                   | 4 (4)          | `2`    |
| 5         | 5 | 2, 4 (6)                | 3 (3)                   | 4 (4), 5 (5)   | `2`    |
| 6         | 6 | 2, 4, 6 (12)            | 3, 6 (9)                | 4 (4), 5 (5), 6 (6) | `2` |

## Forma de resolverlo

### Observación Directa
El problema pide encontrar un entero `x` ($2 \le x \le N$) que maximice la suma de sus múltiplos hasta `N`. La suma de los múltiplos de `x` hasta `N` es $x + 2x + \dots + kx$, donde $k = \lfloor N/x \rfloor$. Esta suma se puede expresar como $x \cdot \frac{k(k+1)}{2}$.

Al analizar la función de suma para diferentes valores de `x` y `N`, se observa un patrón interesante:
*   Para `x=2`, la suma es $2 \cdot \frac{\lfloor N/2 \rfloor (\lfloor N/2 \rfloor + 1)}{2} = \lfloor N/2 \rfloor (\lfloor N/2 \rfloor + 1)$.
*   Para `x=3`, la suma es $3 \cdot \frac{\lfloor N/3 \rfloor (\lfloor N/3 \rfloor + 1)}{2}$.

Generalmente, `x=2` tiende a tener más múltiplos dentro del rango `[1, N]` que cualquier otro `x` mayor, lo que contribuye a una suma mayor.
Consideremos los casos:
*   **Si N = 2:** El único valor posible para `x` es 2. La suma de sus múltiplos es 2.
*   **Si N = 3:**
    *   Para `x=2`: Múltiplos: {2}. Suma = 2.
    *   Para `x=3`: Múltiplos: {3}. Suma = 3.
    En este caso, `x=3` produce una suma mayor (3 > 2).
*   **Si N > 3:**
    *   Para `x=2`: Siempre tendrá al menos dos múltiplos (2, 4) si N >= 4. La suma de sus múltiplos crece rápidamente.
    *   Para `x=3`: Tendrá menos múltiplos que `x=2`. Por ejemplo, para `N=4`, `x=2` da suma 6 (2+4), mientras `x=3` da suma 3 (3). Para `N=5`, `x=2` da suma 6 (2+4), mientras `x=3` da suma 3 (3). Para `N=6`, `x=2` da suma 12 (2+4+6), mientras `x=3` da suma 9 (3+6).
    *   Para cualquier `x > 3`, el número de múltiplos $k = \lfloor N/x \rfloor$ será aún menor, y la suma $x \cdot \frac{k(k+1)}{2}$ generalmente será inferior a la obtenida con `x=2`.

La observación clave es que `x=2` es casi siempre el óptimo, excepto cuando `N=3`, donde `x=3` es marginalmente mejor. Para todos los demás valores de `N` (incluyendo `N=2` y `N > 3`), `x=2` es la respuesta correcta.

## Análisis Matemático
Sea $S(x, N)$ la suma de los múltiplos de $x$ que no exceden $N$.
$$ S(x, N) = \sum_{i=1}^{\lfloor N/x \rfloor} (i \cdot x) = x \cdot \sum_{i=1}^{\lfloor N/x \rfloor} i = x \cdot \frac{\lfloor N/x \rfloor (\lfloor N/x \rfloor + 1)}{2} $$
Queremos encontrar $x \in [2, N]$ que maximice $S(x, N)$.

Consideremos los casos específicos:
1.  **Cuando $N=2$**: El único valor posible para $x$ es $2$.
    $S(2, 2) = 2 \cdot \frac{\lfloor 2/2 \rfloor (\lfloor 2/2 \rfloor + 1)}{2} = 2 \cdot \frac{1(1+1)}{2} = 2$.
    El máximo es $2$, logrado con $x=2$.

2.  **Cuando $N=3$**: Los valores posibles para $x$ son $2, 3$.
    $S(2, 3) = 2 \cdot \frac{\lfloor 3/2 \rfloor (\lfloor 3/2 \rfloor + 1)}{2} = 2 \cdot \frac{1(1+1)}{2} = 2$.
    $S(3, 3) = 3 \cdot \frac{\lfloor 3/3 \rfloor (\lfloor 3/3 \rfloor + 1)}{2} = 3 \cdot \frac{1(1+1)}{2} = 3$.
    El máximo es $3$, logrado con $x=3$.

3.  **Cuando $N > 3$**:
    Comparemos $S(2, N)$ y $S(3, N)$.
    $S(2, N) = \lfloor N/2 \rfloor (\lfloor N/2 \rfloor + 1)$.
    $S(3, N) = 3 \cdot \frac{\lfloor N/3 \rfloor (\lfloor N/3 \rfloor + 1)}{2}$.
    Para $N \ge 4$, $\lfloor N/2 \rfloor \ge 2$.
    Para $N \ge 4$, $\lfloor N/3 \rfloor \ge 1$.
    A medida que $N$ crece, $\lfloor N/2 \rfloor$ es significativamente mayor que $\lfloor N/3 \rfloor$. La función $k(k+1)$ crece cuadráticamente con $k$. Aunque $x=3$ tiene un factor multiplicativo de $3$ en lugar de $2$, el número de términos $k$ para $x=2$ es mucho mayor, lo que generalmente hace que $S(2, N)$ sea mayor que $S(3, N)$ para $N > 3$.
    Por ejemplo, para $N=4$: $S(2,4) = 2(3) = 6$. $S(3,4) = 3 \cdot \frac{1(2)}{2} = 3$.
    Para $N=5$: $S(2,5) = 2(3) = 6$. $S(3,5) = 3 \cdot \frac{1(2)}{2} = 3$.
    Para $N=6$: $S(2,6) = 3(4) = 12$. $S(3,6) = 3 \cdot \frac{2(3)}{2} = 9$.
    La tendencia es que $x=2$ es óptimo para $N > 3$.

Por lo tanto, la solución se reduce a una simple condicional: si `N` es 3, la respuesta es 3; de lo contrario, la respuesta es 2.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer el entero `N`.
    b.  Si `N` es igual a 3, imprimir 3.
    c.  De lo contrario (si `N` es 2 o `N > 3`), imprimir 2.

## Notas Adicionales
*   Este problema es un ejemplo de cómo una observación simple puede llevar a una solución de tiempo constante, incluso si el problema parece requerir una iteración o un análisis más complejo a primera vista.
*   La clave es que el valor de `x` que maximiza la suma es casi siempre el más pequeño posible (`x=2`), ya que permite la mayor cantidad de múltiplos dentro del límite `N`. `N=3` es el único caso especial donde un `x` ligeramente mayor (`x=3`) produce una suma mayor.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Operación de comparación y salida constante. |
| Espacial | O(1)                   | Espacio constante para almacenar `N`. |