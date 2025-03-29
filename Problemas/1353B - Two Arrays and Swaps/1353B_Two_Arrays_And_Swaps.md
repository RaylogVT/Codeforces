# 1353B - Two Arrays And Swaps

**Enlace:** https://codeforces.com/problemset/problem/1353/B

## Resumen del problema
Se te dan dos arreglos, `a` y `b`, ambos de longitud `n`. Puedes realizar la siguiente operación como máximo `k` veces: elegir dos índices `i` y `j` (1 <= i, j <= n) e intercambiar los elementos `a[i]` y `b[j]`. Tu objetivo es realizar estas operaciones de tal manera que la suma de los elementos en el arreglo `a` sea lo más grande posible al final. Debes calcular esta suma máxima posible. Este problema se resuelve típicamente con una estrategia voraz (greedy).

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 100), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene dos enteros `n` y `k` (1 <= n <= 30, 0 <= k <= n).
    -   La segunda línea contiene `n` enteros `a_1, a_2, ..., a_n` (1 <= a_i <= 30).
    -   La tercera línea contiene `n` enteros `b_1, b_2, ..., b_n` (1 <= b_i <= 30).

## Output
Para cada caso de prueba, imprime un solo entero: la máxima suma posible del arreglo `a` después de realizar como máximo `k` intercambios.

## Restricciones

| Variable            | Rango        |
| :------------------ | :----------- |
| t (casos prueba)    | [1, 100]     |
| n (tamaño arreglos) | [1, 30]      |
| k (máx. swaps)      | [0, n]       |
| a_i, b_i (elementos)| [1, 30]      |

## Ejemplos

| Input                      | n, k | a         | b         | Razonamiento                                                                                                | Output |
| :------------------------- | :--- | :-------- | :-------- | :---------------------------------------------------------------------------------------------------------- | :----- |
| 5 <br> 2 1 <br> 1 2 <br> 3 4  | 2, 1 | `[1, 2]`  | `[3, 4]`  | Ordenados: a=[1,2], b=[4,3]. Swap a[0](1) con b[0](4). Nuevo a=[4,2]. Suma=6.                               | `6`    |
| 5 <br> 5 5 <br> 5 5 5 5 5 <br> 1 1 1 1 1 | 5, 5 | `[5]*5`   | `[1]*5`   | Ordenados: a=[5,5,5,5,5], b=[1,1,1,1,1]. No hay swaps beneficiosos. Suma=25.                         | `25`   |
| 5 <br> 5 3 <br> 1 2 3 4 5 <br> 10 9 8 7 6 | 5, 3 | `[1..5]`  | `[10..6]` | Ordenados: a=[1,2,3,4,5], b=[10,9,8,7,6].<br>1. Swap a[0](1) y b[0](10) -> a=[10,2,3,4,5], k=2.<br>2. Swap a[1](2) y b[1](9) -> a=[10,9,3,4,5], k=1.<br>3. Swap a[2](3) y b[2](8) -> a=[10,9,8,4,5], k=0.<br> Suma=36. | `36`   |
| 5 <br> 3 0 <br> 10 20 30 <br> 1 1 1 | 3, 0 | `[10,20,30]` | `[1,1,1]` | k=0. No swaps. Suma=60.                                                                               | `60`   |
| 5 <br> 4 4 <br> 1 1 1 1 <br> 100 100 100 100 | 4, 4 | `[1]*4` | `[100]*4` | Ordenados: a=[1,1,1,1], b=[100,100,100,100].<br>Swap 4 veces. a=[100,100,100,100]. Suma=400.      | `400`  |

## Forma de resolverlo

### a) Enfoque Algorítmico (Greedy / Voraz)
La estrategia óptima para maximizar la suma de `a` es, en cada paso (hasta `k` veces), realizar el intercambio que proporcione el mayor aumento posible a la suma de `a`. Esto se logra intercambiando el elemento *más pequeño* de `a` con el elemento *más grande* de `b`, siempre y cuando este intercambio sea beneficioso (es decir, si el elemento de `b` es mayor que el elemento de `a`).
1.  **Ordenar:** Ordena el arreglo `a` de menor a mayor y el arreglo `b` de mayor a menor.
2.  **Iterar y Comparar:** Recorre los primeros `k` elementos (o hasta `n` si `k >= n`) de ambos arreglos ordenados simultáneamente. En cada paso `i` (desde 0 hasta `min(k, n) - 1`):
    *   Compara el `i`-ésimo elemento de `a` ordenado (`a[i]`, el más pequeño disponible) con el `i`-ésimo elemento de `b` ordenado (`b[i]`, el más grande disponible).
    *   **Si `a[i] < b[i]`:** Realizar el intercambio es beneficioso. Sustituye `a[i]` por `b[i]` en el arreglo `a` (o conceptualmente, realiza el swap). Decrementa `k` si estás contando los swaps.
    *   **Si `a[i] >= b[i]`:** Intercambiar `a[i]` con `b[i]` no aumentaría (o incluso disminuiría) la suma de `a`. Como `a` está ordenado ascendentemente y `b` descendentemente, ningún intercambio futuro con elementos posteriores será beneficioso tampoco. Puedes detener el proceso aquí.
3.  **Calcular Suma:** Después de realizar los intercambios beneficiosos (hasta `k` veces), calcula la suma final de los elementos del (modificado) arreglo `a`.

### b) Enfoque Matemático (Maximización por Reemplazo)
Queremos maximizar `Sum(a)`. Cada swap reemplaza un `a_i` por un `b_j`. Para obtener el máximo incremento, queremos reemplazar el `a_i` más pequeño posible por el `b_j` más grande posible.
1.  Identifica los `k` elementos más pequeños de `a`. Sean `a_{min_1}, ..., a_{min_k}`.
2.  Identifica los `k` elementos más grandes de `b`. Sean `b_{max_1}, ..., b_{max_k}`.
3.  La estrategia greedy sugiere considerar el reemplazo de `a_{min_i}` con `b_{max_i}` para `i` desde 1 hasta `k`.
4.  El reemplazo `i` es útil solo si `b_{max_i} > a_{min_i}`.
5.  Realiza los reemplazos útiles, iterando desde `i=1` hasta `k` (o hasta que el reemplazo deje de ser útil).
6.  La suma final se calcula sobre el arreglo `a` resultante. Ordenar los arreglos como en el método (a) es la forma práctica de implementar esta comparación iterativa entre los más pequeños de `a` y los más grandes de `b`.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n` y `k`.
    b.  Leer el arreglo `a`.
    c.  Leer el arreglo `b`.
    d.  Ordenar `a` en orden ascendente.
    e.  Ordenar `b` en orden descendente.
    f.  Iterar `i` desde 0 hasta `min(n, k) - 1`.
    g.  Dentro del bucle, verificar si `a[i] < b[i]`.
    h.  **Si `a[i] < b[i]`:** Reemplazar `a[i]` con `b[i]`. (Realizar el swap conceptual).
    i.  **Si `a[i] >= b[i]`:** Detener el bucle (break), ya que no habrá más swaps beneficiosos.
    j.  Después del bucle, calcular la suma de todos los elementos en el arreglo `a` modificado.
    k.  Imprimir la suma calculada.

## Notas Adicionales
*   **Greedy Funciona:** La estrategia greedy de siempre intercambiar el menor de `a` con el mayor de `b` (si es beneficioso) garantiza la máxima suma final. Esto se debe a que cada swap es independiente en términos de su contribución a la suma y queremos maximizar esa contribución en cada uno de los `k` pasos permitidos.
*   **Límites Pequeños:** Los límites de `n` y los valores de los elementos son pequeños (<=30), lo que hace que la ordenación O(N log N) sea muy rápida.

## Complejidad

| Tipo        | Complejidad (por caso) |
| :---------- | :--------------------- |
| Temporal    | O(N log N)             |
| Espacial    | O(N)                   |

*La complejidad temporal está dominada por la ordenación de los dos arreglos, que es O(N log N). El bucle para los swaps toma como máximo O(N) o O(k). Por lo tanto, la complejidad general es O(N log N). La complejidad espacial es O(N) para almacenar los arreglos.*