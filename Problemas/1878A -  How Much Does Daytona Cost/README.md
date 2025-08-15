https://codeforces.com/problemset/problem/1878/A

# 1878A - How Much Does Daytona Cost?

## Resumen del problema
Se te da un arreglo de `N` números enteros y un número entero `K`. Tu tarea es determinar si el número `K` está presente en el arreglo.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 1000) -- El número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene dos enteros `N` (1 <= N <= 50) y `K` (1 <= K <= 1000) -- El número de elementos en el arreglo y el número a buscar, respectivamente.
    -   La segunda línea contiene `N` enteros `a_1, a_2, ..., a_N` (1 <= a_i <= 1000) -- Los elementos del arreglo.

## Output
Para cada caso de prueba, imprime "YES" si el número `K` está presente en el arreglo, de lo contrario, imprime "NO".

## Restricciones

| Variable      | Rango       |
| :------------ | :---------- |
| t             | [1, 1000]   |
| N             | [1, 50]     |
| K             | [1, 1000]   |
| a_i (elementos) | [1, 1000]   |

## Ejemplos

| Input         | Razonamiento                                                               | Output |
| :------------ | :------------------------------------------------------------------------- | :----- |
| 3 <br> 3 2 <br> 1 2 3 <br> 3 4 <br> 1 2 3 <br> 5 7 <br> 1 2 3 4 5 | Caso 1: `K=2` está en `[1, 2, 3]`. <br> Caso 2: `K=4` no está en `[1, 2, 3]`. <br> Caso 3: `K=7` no está en `[1, 2, 3, 4, 5]`. | `YES` <br> `NO` <br> `NO` |

## Forma de resolverlo
El problema es una tarea directa de búsqueda. Para cada caso de prueba, simplemente necesitamos recorrer el arreglo dado y verificar si alguno de sus elementos es igual a `K`.

Si encontramos `K` en cualquier posición del arreglo, sabemos que está presente, y podemos imprimir "YES" y pasar al siguiente caso de prueba. Si recorremos todo el arreglo y no encontramos `K`, entonces imprimimos "NO".

## Algoritmo
1.  Lee el número de casos de prueba, `t`.
2.  Para cada caso de prueba:
    a.  Lee los enteros `N` y `K`.
    b.  Lee los `N` elementos del arreglo.
    c.  Inicializa una variable booleana (o bandera entera) `encontrado_K` a `falso` (o 0).
    d.  Itera a través de cada elemento del arreglo:
        i.  Si el elemento actual es igual a `K`, establece `encontrado_K` a `verdadero` (o 1) y termina la iteración del arreglo (ya que hemos encontrado `K`).
    e.  Después de revisar todos los elementos (o detenerse al encontrar `K`):
        i.  Si `encontrado_K` es `verdadero`, imprime "YES".
        ii. De lo contrario, imprime "NO".

## Complejidad

| Tipo        | Complejidad       |
| :---------- | :---------------- |
| Temporal    | O(N) por caso de prueba, lo que resulta en O(T * N) total. |
| Espacial    | O(N) para almacenar el arreglo de entrada. |