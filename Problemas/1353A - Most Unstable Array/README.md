https://codeforces.com/problemset/problem/1353/A

# 1353A - Most Unstable Array

## Resumen del problema
Dado dos enteros `N` y `M`, se pide construir un array de `N` enteros no negativos `a_1, a_2, \dots, a_N` tal que la suma de todos los elementos sea exactamente `M` (es decir, $\sum_{i=1}^N a_i = M$). El objetivo es maximizar la suma de las diferencias absolutas entre elementos adyacentes: $\sum_{i=1}^{N-1} |a_i - a_{i+1}|$.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La única línea contiene dos enteros `N` y `M` ($1 \le N \le 100$, $0 \le M \le 1000$).

## Output
Para cada caso de prueba, imprime un solo entero: la suma máxima posible de las diferencias absolutas entre elementos adyacentes.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| N (cantidad) | [1, 100]   | Longitud del array                  |
| M (suma)     | [0, 1000]  | Suma de los elementos del array     |

## Ejemplos

| Input (N, M) | N | M | Array de Ejemplo (Suma=M) | Suma de Diferencias Absolutas | Output |
| :----------- | :- | :- | :------------------------ | :---------------------------- | :----- |
| (1, 5)       | 1 | 5 | `[5]`                     | $0$                           | `0`    |
| (2, 5)       | 2 | 5 | `[0, 5]` o `[5, 0]`       | $|0-5| = 5$                   | `5`    |
| (3, 5)       | 3 | 5 | `[0, 5, 0]`               | $|0-5| + |5-0| = 5+5 = 10$    | `10`   |
| (4, 10)      | 4 | 10 | `[0, 10, 0, 0]`           | $|0-10| + |10-0| + |0-0| = 10+10+0 = 20$ | `20`   |

## Forma de resolverlo

El problema busca maximizar la "inestabilidad" de un array, definida como la suma de las diferencias absolutas entre elementos adyacentes. Para lograr esto, la estrategia óptima es concentrar el valor `M` de la suma en uno o dos puntos, haciendo que los demás elementos sean 0, para crear las mayores diferencias posibles.

Analicemos los casos posibles para `N`:

1.  **Si N = 1:**
    *   El array solo tiene un elemento: `[M]`.
    *   No hay pares de elementos adyacentes.
    *   Por lo tanto, la suma de las diferencias absolutas es `0`.

2.  **Si N = 2:**
    *   El array tiene dos elementos: `[a_1, a_2]`.
    *   La suma es `a_1 + a_2 = M`.
    *   Queremos maximizar `|a_1 - a_2|`.
    *   Para maximizar la diferencia entre dos números cuya suma es `M` (y son no negativos), uno debe ser `M` y el otro `0`. Por ejemplo, `[0, M]` o `[M, 0]`.
    *   En este caso, la diferencia es `|0 - M| = M`.

3.  **Si N > 2:**
    *   El array tiene tres o más elementos.
    *   Para maximizar la suma de diferencias, podemos colocar el valor `M` en una posición intermedia y el resto de los elementos en `0`.
    *   Por ejemplo, el array `[0, M, 0, \dots, 0]` (donde `M` está en la segunda posición y el resto son ceros).
    *   La suma de las diferencias absolutas sería:
        *   `|0 - M|` (entre el primer y segundo elemento)
        *   `+ |M - 0|` (entre el segundo y tercer elemento)
        *   `+ |0 - 0|` (para todas las demás parejas, que serán cero)
    *   Esto resulta en `M + M = 2M`.
    *   Esta configuración es óptima porque se generan dos diferencias máximas (`M`) a partir de un único valor `M` en el array. No es posible generar más de dos diferencias de `M` ya que `M` solo puede aparecer una vez (o distribuirse, lo que reduciría las diferencias individuales).

## Análisis Matemático
Sea $S = \sum_{i=1}^{N-1} |a_i - a_{i+1}|$ la suma a maximizar, sujeta a $\sum_{i=1}^N a_i = M$ y $a_i \ge 0$.

1.  **Caso $N=1$**:
    El array es $[a_1]$. Como $\sum a_i = M$, entonces $a_1 = M$. No hay pares adyacentes, por lo tanto, $S=0$.

2.  **Caso $N=2$**:
    El array es $[a_1, a_2]$. Tenemos $a_1 + a_2 = M$. Queremos maximizar $|a_1 - a_2|$.
    Dado que $a_1, a_2 \ge 0$, la diferencia máxima se logra cuando uno es $M$ y el otro es $0$.
    Por ejemplo, si $a_1=M, a_2=0$, entonces $|a_1 - a_2| = |M - 0| = M$.
    Si $a_1=0, a_2=M$, entonces $|a_1 - a_2| = |0 - M| = M$.
    Así, $S=M$.

3.  **Caso $N > 2$**:
    Consideremos la construcción del array $[0, M, 0, \dots, 0]$.
    La suma de los elementos es $0 + M + 0 + \dots + 0 = M$, lo cual satisface la condición.
    La suma de las diferencias absolutas es:
    $S = |0 - M| + |M - 0| + |0 - 0| + \dots + |0 - 0|$
    $S = M + M + 0 + \dots + 0$
    $S = 2M$
    Esta es la máxima suma posible. Cada término $|a_i - a_{i+1}|$ es a lo sumo $M$ (ya que $a_i, a_{i+1} \le M$). Para obtener $2M$, necesitamos al menos dos diferencias de $M$. Esto se logra al tener un elemento $M$ rodeado por ceros, como en $[0, M, 0]$. Para $N > 2$, siempre podemos construir tal array.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `N` y `M`.
    b.  Si `N` es igual a 1, imprimir `0`.
    c.  Si `N` es igual a 2, imprimir `M`.
    d.  Si `N` es mayor que 2, imprimir `2 * M`.

## Notas Adicionales
*   La solución es extremadamente eficiente, ya que solo requiere una serie de comparaciones y una multiplicación por caso de prueba.
*   El problema se reduce a un análisis de casos simples basados en la longitud del array `N`.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Operaciones constantes por caso.    |
| Espacial | O(1)                   | Espacio constante para almacenar variables. |