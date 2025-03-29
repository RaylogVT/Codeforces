# 1367B - Even Array

**Enlace:** https://codeforces.com/problemset/problem/1367/B

## Resumen del problema
Se te da un arreglo `a` de longitud `n` (con índices de 0 a n-1). Un arreglo se considera "bueno" si para cada índice `i`, la paridad del índice (`i % 2`) es igual a la paridad del elemento en ese índice (`a[i] % 2`). Es decir, elementos en índices pares deben ser pares, y elementos en índices impares deben ser impares.

Puedes realizar una operación de intercambio (swap) entre dos elementos cualesquiera del arreglo (`a[i]` y `a[j]`). Tu tarea es encontrar el número mínimo de intercambios necesarios para hacer que el arreglo sea "bueno". Si es imposible lograrlo, debes indicarlo. Este problema se enfoca en el análisis de paridad y la lógica de intercambios.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 1000), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un entero `n` (1 <= n <= 40), la longitud del arreglo.
    -   La segunda línea contiene `n` enteros `a_0, a_1, ..., a_{n-1}` (0 <= a_i <= 1000), los elementos del arreglo.

## Output
Para cada caso de prueba, imprime un solo entero: el mínimo número de intercambios requeridos para hacer el arreglo "bueno". Si es imposible, imprime -1.

## Restricciones

| Variable      | Rango        |
| :------------ | :----------- |
| t (casos)     | [1, 1000]    |
| n (longitud)  | [1, 40]      |
| a_i (elementos)| [0, 1000]    |

## Ejemplos

| Input           | n | a             | Mismatches (E@O, O@E) | Counts Equal? | Min Swaps | Output |
| :-------------- | :- | :------------ | :-------------------- | :------------ | :-------- | :----- |
| 4 <br> 4 <br> 3 2 7 6 | 4 | [3,2,7,6]     | E@O: 2(at 1), 6(at 3). O@E: 3(at 0), 7(at 2) | 2 vs 2 | Sí (Counts=2) | 2         | `2`    |
| 4 <br> 3 <br> 3 2 6   | 3 | [3,2,6]     | E@O: 2(at 1). O@E: 3(at 0)            | 1 vs 1 | Sí (Counts=1) | 1         | `1`    |
| 4 <br> 4 <br> 1 1 1 1 | 4 | [1,1,1,1]     | E@O: -. O@E: 1(at 0), 1(at 2)         | 0 vs 2 | No            | Imposible | `-1`   |
| 4 <br> 5 <br> 0 1 2 3 4 | 5 | [0,1,2,3,4]   | None                  | 0 vs 0 | Sí (Counts=0) | 0         | `0`    |

* Leyenda: E@O = Elemento Par en Índice Impar, O@E = Elemento Impar en Índice Par

## Forma de resolverlo

### a) Enfoque Algorítmico (Contando Disparidades)
La clave es identificar los elementos que están "fuera de lugar" en términos de paridad. Hay dos tipos de elementos mal colocados:
1.  Un número **par** en un índice **impar**.
2.  Un número **impar** en un índice **par**.

Un arreglo "bueno" no tiene elementos mal colocados. Para corregir el arreglo usando swaps, necesitamos intercambiar elementos mal colocados. El único intercambio útil es entre un elemento del Tipo 1 y un elemento del Tipo 2. Intercambiar dos elementos del mismo tipo de error no ayuda, e intercambiar un elemento mal colocado con uno bien colocado empeora la situación.

Por lo tanto, cada swap debe corregir exactamente un error de Tipo 1 y un error de Tipo 2 simultáneamente. Esto implica que, para que sea posible hacer el arreglo bueno, el número total de errores de Tipo 1 debe ser *exactamente igual* al número total de errores de Tipo 2.

1.  Recorre el arreglo.
2.  Mantén dos contadores: `count_par_en_impar` y `count_impar_en_par`.
3.  Si encuentras un número par `a[i]` en un índice impar `i`, incrementa `count_par_en_impar`.
4.  Si encuentras un número impar `a[i]` en un índice par `i`, incrementa `count_impar_en_par`.
5.  Después de recorrer todo el arreglo, compara los dos contadores.
6.  Si `count_par_en_impar == count_impar_en_par`, entonces es posible. El número mínimo de swaps necesarios es igual a este conteo (ya que cada swap corrige un par de errores).
7.  Si `count_par_en_impar != count_impar_en_par`, es imposible emparejar los errores para corregirlos con swaps. La respuesta es -1.

### b) Enfoque Matemático (Conservación de Cantidades)
1.  El número total de posiciones de índice par en un arreglo de longitud `n` es `ceil(n/2)`.
2.  El número total de posiciones de índice impar es `floor(n/2)`.
3.  Para que el arreglo pueda ser "bueno", el número total de elementos pares en el arreglo *original* debe ser igual al número de índices pares (`ceil(n/2)`), y el número total de elementos impares debe ser igual al número de índices impares (`floor(n/2)`).
4.  Los swaps no cambian las cantidades totales de números pares e impares en el arreglo.
5.  El algoritmo de contar disparidades verifica implícitamente esta condición de conservación. Si `count_par_en_impar = count_impar_en_par`, significa que el número de pares "fuera de lugar" es igual al número de impares "fuera de lugar". Esto, a su vez, implica que el número total de pares e impares coincide con el número de posiciones de índice par e impar respectivamente.
6.  El número de swaps necesarios es el número de pares (error tipo 1, error tipo 2) que necesitamos formar, que es precisamente el conteo de cada tipo de error.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer el arreglo `a`.
    c.  Inicializar `count_par_en_impar = 0`.
    d.  Inicializar `count_impar_en_par = 0`.
    e.  Iterar `i` desde 0 hasta `n-1`.
    f.  Obtener `a[i]`.
    g.  Si `i % 2 == 1` (índice impar) Y `a[i] % 2 == 0` (elemento par), incrementar `count_par_en_impar`.
    h.  Si `i % 2 == 0` (índice par) Y `a[i] % 2 == 1` (elemento impar), incrementar `count_impar_en_par`.
    i.  Después del bucle, verificar si `count_par_en_impar == count_impar_en_par`.
    j.  Si son iguales, imprimir `count_par_en_impar` (o `count_impar_en_par`).
    k.  Si son diferentes, imprimir `-1`.

## Notas Adicionales
*   **Condición Fundamental:** La posibilidad de hacer el arreglo bueno depende únicamente de si el número de elementos pares en índices impares es igual al número de elementos impares en índices pares.
*   **Número Mínimo de Swaps:** Si es posible, el número de swaps es exactamente igual al número de elementos mal colocados de un tipo (ya que cada swap corrige uno de cada tipo).

## Complejidad

| Tipo        | Complejidad (por caso) |
| :---------- | :--------------------- |
| Temporal    | O(N)                   |
| Espacial    | O(N) / O(1) (aux)      |

*La complejidad temporal es O(N) porque recorremos el arreglo una sola vez para contar las disparidades. La complejidad espacial es O(N) para almacenar el arreglo, pero O(1) en términos de espacio auxiliar adicional.*