# 1154B - Make Them Equal

**Enlace:** https://codeforces.com/problemset/problem/1154/B

## Resumen del problema
Se te da un arreglo de `n` números enteros. Tienes que elegir un número entero *no negativo* `D` y, para cada elemento `a_i` del arreglo, aplicar una de las siguientes tres operaciones exactamente una vez: sumar `D` (`a_i + D`), restar `D` (`a_i - D`), o dejarlo igual (`a_i`). El objetivo es determinar el valor *mínimo* de `D` tal que, después de aplicar las operaciones, todos los elementos del arreglo se vuelvan iguales a algún valor `T`. Si es imposible lograr esto con alguna `D`, debes indicarlo. El problema se centra en analizar los valores distintos presentes en el arreglo inicial.

## Input
-   La primera línea contiene un entero `n` (1 <= n <= 100), el número de elementos en el arreglo.
-   La segunda línea contiene `n` enteros `a_1, a_2, ..., a_n` (1 <= a_i <= 100), los elementos del arreglo.

## Output
Imprime el mínimo valor entero no negativo `D` que permite hacer todos los elementos iguales. Si no es posible encontrar tal `D`, imprime `-1`.

## Restricciones

| Variable      | Rango       |
| :------------ | :---------- |
| n             | [1, 100]    |
| a_i (elementos) | [1, 100]    |

## Ejemplos

| Input        | Arreglo     | # Únicos | Razonamiento                                                                                                 | Output |
| :----------- | :---------- | :------- | :----------------------------------------------------------------------------------------------------------- | :----- |
| 5 <br> 2 4 6  | `[2, 4, 6]` | 3        | Únicos: {2, 4, 6}. Equidistantes (dif=2). D=2 (2+2=4, 4=4, 6-2=4). Todos -> 4.                                | `2`    |
| 3 <br> 1 1 1  | `[1, 1, 1]` | 1        | Únicos: {1}. Ya son iguales. D=0.                                                                          | `0`    |
| 4 <br> 1 4 7 10 | `[1,4,7,10]`| 4        | Únicos: {1, 4, 7, 10}. Hay 4 distintos, imposible.                                                         | `-1`   |
| 3 <br> 1 2 4  | `[1, 2, 4]` | 3        | Únicos: {1, 2, 4}. No son equidistantes (2-1=1, 4-2=2). Imposible.                                            | `-1`   |
| 4 <br> 10 20  | `[10,20,10,20]`| 2        | Únicos: {10, 20}. Diferencia 10 (par). D = 10/2 = 5 (10+5=15, 20-5=15). Todos -> 15.                          | `5`    |
| 2 <br> 3 8    | `[3, 8]`    | 2        | Únicos: {3, 8}. Diferencia 5 (impar). D = 5 (3+5=8, 8=8). Todos -> 8.                                         | `5`    |

## Forma de resolverlo

### a) Enfoque Algorítmico (Análisis de Casos por # de Únicos)
La observación clave es que el valor final `T` y el valor `D` dependen únicamente del conjunto de *valores distintos* presentes en el arreglo inicial.
1.  **Extraer valores únicos:** Primero, obtenemos todos los valores distintos del arreglo de entrada y los ordenamos. Sea `k` el número de valores distintos.
2.  **Caso k = 1:** Todos los elementos ya son iguales. No se necesita ninguna operación. El `D` mínimo es 0.
3.  **Caso k = 2:** Sean los únicos valores `x` e `y` (con `x < y`).
    *   **Si la diferencia `y - x` es par:** Podemos hacer que todos los elementos sean iguales al punto medio `(x + y) / 2`. Para lograrlo, sumamos `D = (y - x) / 2` a los `x` y restamos `D` a los `y`. El `D` mínimo es `(y - x) / 2`.
    *   **Si la diferencia `y - x` es impar:** No podemos encontrar un punto medio entero. La única forma es hacer que todos sean `y` (sumando `D = y - x` a los `x` y dejando los `y` igual) o hacer que todos sean `x` (restando `D` a los `y`, pero `D` debe ser no negativo). La opción viable con `D` mínimo no negativo es `D = y - x`.
4.  **Caso k = 3:** Sean los únicos valores `x`, `y`, `z` (con `x < y < z`). Para que sea posible hacerlos todos iguales a `T` usando `D`, deben formar una progresión aritmética. Es decir, `y` debe ser exactamente el punto medio entre `x` y `z`.
    *   **Si `y - x == z - y`:** Los números son equidistantes. Podemos hacer que todos se vuelvan `y`. Sumamos `D = y - x` a los `x`, dejamos los `y` iguales, y restamos `D = z - y` (que es igual a `y - x`) a los `z`. El `D` mínimo es `y - x`.
    *   **Si `y - x != z - y`:** Es imposible encontrar una `D` y un `T` que funcionen para los tres valores. El resultado es -1.
5.  **Caso k >= 4:** Es imposible hacer que 4 o más números distintos converjan a un solo valor `T` usando las operaciones permitidas ({T-D, T, T+D} solo tiene 3 valores posibles). El resultado es -1.

### b) Enfoque Matemático (Propiedad del Conjunto Final)
Sea `T` el valor final al que todos los elementos convergen después de aplicar la operación con `D`. Cada elemento original `a_i` debe satisfacer una de estas condiciones:
`a_i + D = T` => `a_i = T - D`
`a_i - D = T` => `a_i = T + D`
`a_i = T`

Esto implica que el conjunto de *todos los valores distintos* presentes en el arreglo original debe estar contenido dentro del conjunto `{T - D, T, T + D}`.
1.  El conjunto `{T - D, T, T + D}` tiene como máximo 3 elementos distintos.
2.  Por lo tanto, si el arreglo original contiene 4 o más valores distintos, es imposible y la respuesta es -1.
3.  Si hay 1 valor distinto `x`, entonces `T=x` y `D=0`.
4.  Si hay 2 valores distintos `x, y`, deben ser un subconjunto de `{T-D, T, T+D}`. Las posibilidades son `{T-D, T}` (implica `D = T - (T-D) = y-x`, caso diferencia impar) o `{T, T+D}` (implica `D = (T+D) - T = y-x`, caso diferencia impar) o `{T-D, T+D}` (implica `2D = (T+D) - (T-D) = y-x`, caso diferencia par, `D=(y-x)/2`).
5.  Si hay 3 valores distintos `x, y, z`, deben ser *exactamente* el conjunto `{T-D, T, T+D}` en orden. Esto requiere que `y = T` y que `y-x = D` y `z-y = D`, es decir, `y-x = z-y`. Deben formar una progresión aritmética.

Este enfoque justifica el análisis basado en el número de elementos distintos.

## Algoritmo
1.  Leer `n`.
2.  Leer los `n` elementos del arreglo.
3.  Crear un conjunto (`set`) a partir del arreglo para obtener los elementos únicos.
4.  Convertir el conjunto a una lista o vector y ordenarlo. Sea `k` el número de elementos únicos.
5.  **Si `k >= 4`:** Imprimir -1.
6.  **Si `k == 3`:** Sean los elementos ordenados `u[0]`, `u[1]`, `u[2]`.
    *   Verificar si `u[2] - u[1] == u[1] - u[0]`.
    *   Si es verdadero, imprimir `u[1] - u[0]`.
    *   Si es falso, imprimir -1.
7.  **Si `k == 2`:** Sean los elementos ordenados `u[0]`, `u[1]`.
    *   Calcular la diferencia `diff = u[1] - u[0]`.
    *   Verificar si `diff` es par (`diff % 2 == 0`).
    *   Si es par, imprimir `diff / 2`.
    *   Si es impar, imprimir `diff`.
8.  **Si `k == 1`:** Imprimir 0.

## Notas Adicionales
*   **Conjunto de Valores Únicos:** La solución depende exclusivamente de los valores distintos presentes, no de sus frecuencias ni del orden original.
*   **Máximo 3 Valores:** La naturaleza de las operaciones (+D, -D, +0) restringe los posibles valores iniciales a como máximo 3 valores distintos si se quiere llegar a un único valor final T.
*   **Progresión Aritmética:** El caso de 3 valores únicos solo funciona si forman una progresión aritmética.

## Complejidad

| Tipo        | Complejidad       |
| :---------- | :---------------- |
| Temporal    | O(N log N)        |
| Espacial    | O(N)              |

*La complejidad temporal está dominada por la obtención y ordenación de los elementos únicos, lo que típicamente toma O(N log N) usando un set o O(N log N) si se ordena el arreglo completo y luego se extraen únicos. El análisis de casos posterior es O(1). La complejidad espacial es O(N) en el peor caso para almacenar los elementos o los únicos.*