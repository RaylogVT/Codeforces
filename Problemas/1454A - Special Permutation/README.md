https://codeforces.com/problemset/problem/1454/A

# 1454A - Special Permutation

## Resumen del problema
Dado un entero `N`, se pide construir una permutación `p` de los enteros del 1 al `N` tal que `p_i \neq i` para todo `i` de 1 a `N`. Es decir, ningún elemento en la permutación puede estar en su posición original.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 100$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La única línea contiene un solo entero `n` ($2 \le n \le 100$), la longitud de la permutación.

## Output
Para cada caso de prueba, imprime `n` enteros distintos del 1 al `n` que formen una permutación `p` tal que `p_i \neq i` para todo `i`.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 100]   |                                     |
| n (longitud) | [2, 100]   |                                     |

## Ejemplos

| Input (n) | n | Output | Razonamiento                               |
| :-------- | :- | :----- | :----------------------------------------- |
| 2         | 2 | `2 1`  | p[1]=2 $\neq$ 1, p[2]=1 $\neq$ 2         |
| 3         | 3 | `2 3 1`| p[1]=2 $\neq$ 1, p[2]=3 $\neq$ 2, p[3]=1 $\neq$ 3 |
| 4         | 4 | `2 3 4 1`| p[1]=2 $\neq$ 1, p[2]=3 $\neq$ 2, p[3]=4 $\neq$ 3, p[4]=1 $\neq$ 4 |

## Forma de resolverlo

### Enfoque Algorítmico (Construcción Simple)
El problema pide encontrar *cualquier* permutación que cumpla la condición `p_i \neq i`. Esto significa que no necesitamos encontrar todas las permutaciones posibles ni la "mejor" en algún sentido, solo una que funcione.

Una forma sencilla de construir tal permutación es un "desplazamiento circular" de los elementos. Si tenemos los números del 1 al `N`, podemos construir la permutación `p` de la siguiente manera:
-   El número 1 se mueve a la posición `N`.
-   Cada número `i` (donde `i` está entre 2 y `N`) se mueve a la posición `i-1`.

Esto se puede expresar como:
-   `p_i = i+1` para `1 \le i < N`
-   `p_N = 1`

Por ejemplo, para `N=4`:
-   `p_1 = 1+1 = 2`
-   `p_2 = 2+1 = 3`
-   `p_3 = 3+1 = 4`
-   `p_4 = 1`
La permutación resultante es `2 3 4 1`.

Verifiquemos que esta construcción siempre cumple la condición `p_i \neq i`:
1.  Para `1 \le i < N`: `p_i = i+1`. Claramente, `i+1 \neq i`.
2.  Para `i = N`: `p_N = 1`. Dado que la restricción del problema establece `N \ge 2`, entonces `1 \neq N`.

Por lo tanto, esta construcción siempre produce una permutación válida.

## Análisis Matemático
Sea $S = \{1, 2, \dots, N\}$ el conjunto de enteros. Buscamos una permutación $p: S \to S$ tal que $p(i) \neq i$ para todo $i \in S$.

La construcción propuesta es:
$$ p(i) = \begin{cases} i+1 & \text{si } 1 \le i < N \\ 1 & \text{si } i = N \end{cases} $$

Demostración de que $p(i) \neq i$ para todo $i \in S$:
1.  **Caso $1 \le i < N$**:
    En este caso, $p(i) = i+1$. Dado que $i+1 > i$, es trivial que $p(i) \neq i$.

2.  **Caso $i = N$**:
    En este caso, $p(N) = 1$. Por las restricciones del problema, $N \ge 2$. Por lo tanto, $1 \neq N$, lo que implica $p(N) \neq N$.

Dado que la condición se cumple para todos los $i \in S$, la permutación construida es válida. Esta es una de las muchas posibles permutaciones que satisfacen la condición.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer el entero `N`.
    b.  Iterar desde `num = 2` hasta `N` (inclusive):
        i.  Imprimir `num` seguido de un espacio.
    c.  Imprimir `1` seguido de un salto de línea.

## Notas Adicionales
*   La simplicidad de la solución radica en que el problema solo pide *una* permutación válida, no la más compleja o una en particular.
*   La restricción `N \ge 2` es crucial para que la solución `2 3 ... N 1` funcione, ya que si `N=1`, la única permutación posible es `1`, donde `p_1 = 1`, violando la condición.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | Se itera `N-1` veces para imprimir los números. |
| Espacial | O(1)                   | Se utiliza una cantidad constante de memoria. |