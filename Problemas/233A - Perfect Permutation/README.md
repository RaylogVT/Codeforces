https://codeforces.com/problemset/problem/233/A

# 233A - Perfect Permutation

## Resumen del problema
Una permutación `p` de longitud `n` es un arreglo `p_1, p_2, ..., p_n` que contiene cada entero del 1 al `n` exactamente una vez. Una permutación `p` se considera "perfecta" si para cada `i` (donde $1 \le i \le n$), se cumplen dos condiciones:
1.  `p_i \neq i` (el elemento en la posición `i` no es `i` mismo)
2.  `p_{p_i} = i` (aplicar la permutación dos veces a `i` lo devuelve a `i`)

Dado un entero `n`, se pide encontrar una permutación perfecta de longitud `n`. Si no existe tal permutación, se debe imprimir -1.

## Input
La única línea de entrada contiene un solo entero `n` ($1 \le n \le 100$), la longitud deseada de la permutación.

## Output
Imprime una sola línea que contiene `n` enteros que representan una permutación perfecta. Si no existe tal permutación, imprime -1.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| n (longitud) | [1, 100]   |                                     |

## Ejemplos

| Input (n) | Permutación generada | Output |
| :-------- | :------------------- | :----- |
| 4         | `p = [2, 1, 4, 3]`   | `2 1 4 3` |
| 3         | No existe            | `-1`   |
| 2         | `p = [2, 1]`         | `2 1`  |

## Forma de resolverlo

### Propiedad de las Permutaciones Perfectas
Una permutación perfecta, tal como se define en el problema (`p_i \neq i` y `p_{p_i} = i`), implica que los elementos se agrupan en ciclos de longitud 2. Es decir, si `p_i = j`, entonces `p_j = i`. Esto significa que cada elemento `i` está emparejado con un único elemento `j` tal que se "intercambian" sus posiciones.

Para que todos los `n` elementos puedan agruparse en pares de esta manera, el número total de elementos `n` debe ser **par**. Si `n` es impar, al menos un elemento no podrá formar un par, lo que violaría la condición `p_{p_i} = i` o `p_i \neq i` para ese elemento. Por lo tanto, si `n` es impar, no es posible construir una permutación perfecta, y la respuesta debe ser -1.

### Construcción para N Par
Si `n` es par, podemos construir una permutación perfecta de manera sencilla. Podemos formar pares adyacentes y simplemente intercambiar sus valores. Es decir, para cada par `(i, i+1)` (usando 1-basado), asignamos `p_i = i+1` y `p_{i+1} = i`.

Por ejemplo, para `n=4`:
-   Para el par `(1, 2)`: `p_1 = 2`, `p_2 = 1`.
-   Para el par `(3, 4)`: `p_3 = 4`, `p_4 = 3`.
La permutación resultante es `[2, 1, 4, 3]`.

Verifiquemos las condiciones para esta construcción:
1.  `p_i \neq i`: Como `p_i` siempre es `i+1` o `i-1`, nunca es `i`. Esta condición se cumple.
2.  `p_{p_i} = i`:
    -   Si `i` es impar, `p_i = i+1`. Entonces `p_{p_i} = p_{i+1}`. Como `i+1` es par, `p_{i+1} = (i+1)-1 = i`. Se cumple.
    -   Si `i` es par, `p_i = i-1`. Entonces `p_{p_i} = p_{i-1}`. Como `i-1` es impar, `p_{i-1} = (i-1)+1 = i`. Se cumple.

Este enfoque garantiza una permutación perfecta cuando `n` es par.

## Algoritmo
1.  Leer el entero `n`.
2.  Verificar si `n` es impar:
    a.  Si `n % 2 != 0` (es impar), imprimir -1.
3.  Si `n` es par:
    a.  Iterar desde `i = 1` hasta `n` con un paso de 2 (es decir, `i = 1, 3, 5, ...`).
    b.  Para cada `i`, imprimir `i+1` seguido de `i`. Esto genera los pares `(2, 1), (4, 3), (6, 5), ...`.
    c.  Asegurarse de imprimir un espacio entre cada número.

## Complejidad

| Tipo     | Complejidad | Notas                               |
| :------- | :---------- | :---------------------------------- |
| Temporal | O(N)        | Se itera linealmente hasta `N` para imprimir la permutación. |
| Espacial | O(1)        | Se utiliza una cantidad constante de memoria, ya que la permutación se imprime directamente sin almacenarla completamente. |