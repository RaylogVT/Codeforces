https://codeforces.com/problemset/problem/1915/C

# 1915C - Can I Square

## Resumen del problema
Se te dan `n` cubetas, y cada cubeta contiene una cierta cantidad de tablones. Tu objetivo es determinar si es posible juntar todos los tablones de todas las cubetas para formar un cuadrado perfecto.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 10^4) -- El número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un entero `n` (1 <= n <= 2 * 10^5) -- El número de cubetas.
    -   La segunda línea contiene `n` enteros `a_1, a_2, ..., a_n` (1 <= a_i <= 10^9) -- La cantidad de tablones en cada cubeta.
    -   Se garantiza que la suma de `n` sobre todos los casos de prueba no excede 2 * 10^5.

## Output
Para cada caso de prueba, imprime "YES" si la suma total de tablones puede formar un cuadrado perfecto, de lo contrario, imprime "NO".

## Restricciones

| Variable      | Rango       |
| :------------ | :---------- |
| t             | [1, 10^4]   |
| n             | [1, 2 * 10^5] |
| a_i (tablones) | [1, 10^9]   |
| Suma de n sobre todos los casos de prueba | <= 2 * 10^5 |

## Ejemplos

| Input         | Razonamiento                                                                                             | Output |
| :------------ | :------------------------------------------------------------------------------------------------------- | :----- |
| 1 <br> 2 <br> 1 3 | Suma total de tablones = 1 + 3 = 4. La raíz cuadrada de 4 es 2, y 2*2 = 4. Es un cuadrado perfecto. | `YES`  |
| 1 <br> 3 <br> 1 2 4 | Suma total de tablones = 1 + 2 + 4 = 7. La raíz cuadrada de 7 no es un entero. No es un cuadrado perfecto. | `NO`   |
| 1 <br> 4 <br> 2 2 2 1 | Suma total de tablones = 2 + 2 + 2 + 1 = 7. La raíz cuadrada de 7 no es un entero. No es un cuadrado perfecto. | `NO`   |
| 1 <br> 3 <br> 2 2 5 | Suma total de tablones = 2 + 2 + 5 = 9. La raíz cuadrada de 9 es 3, y 3*3 = 9. Es un cuadrado perfecto. | `YES`  |

## Forma de resolverlo
El problema es bastante directo: necesitamos sumar todos los tablones de todas las cubetas y luego verificar si esa suma total es un cuadrado perfecto.

Dado que la cantidad de tablones en cada cubeta (`a_i`) puede ser hasta `10^9` y el número de cubetas (`n`) puede ser hasta `2 * 10^5`, la suma total de tablones puede ser muy grande (`2 * 10^5 * 10^9 = 2 * 10^{14}`). Un tipo de dato `int` estándar no sería suficiente para almacenar esta suma, por lo que es crucial usar un tipo de dato que soporte números grandes, como `long long` en C++ o el tipo `int` de Python que maneja números arbitrariamente grandes.

Para verificar si un número `X` es un cuadrado perfecto:
1.  Calcula la raíz cuadrada de `X`.
2.  Convierte el resultado a un entero (truncando los decimales si los hay).
3.  Eleva al cuadrado este entero.
4.  Si el resultado de la elevación al cuadrado es igual al número original `X`, entonces `X` es un cuadrado perfecto. De lo contrario, no lo es.

Por ejemplo, si `X = 9`:
1.  `sqrt(9) = 3.0`
2.  `int(3.0) = 3`
3.  `3 * 3 = 9`
4.  `9 == 9`, por lo tanto, 9 es un cuadrado perfecto.

Si `X = 7`:
1.  `sqrt(7) = 2.645...`
2.  `int(2.645...) = 2`
3.  `2 * 2 = 4`
4.  `4 != 7`, por lo tanto, 7 no es un cuadrado perfecto.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer el número de cubetas `n`.
    b.  Inicializar una variable `total_tablones` (de tipo `long long` o equivalente) a 0.
    c.  Iterar `n` veces:
        i.  Leer la cantidad de tablones `a_i` para la cubeta actual.
        ii. Sumar `a_i` a `total_tablones`.
    d.  Calcular la raíz cuadrada de `total_tablones` y almacenar el resultado como un entero (ej. `cuadrado = (long long)sqrt(total_tablones)`).
    e.  Verificar si `cuadrado * cuadrado` es igual a `total_tablones`.
    f.  Si son iguales, imprimir "YES".
    g.  De lo contrario, imprimir "NO".

## Complejidad

| Tipo        | Complejidad       |
| :---------- | :---------------- |
| Temporal    | O(sumatoria de N sobre todos los casos de prueba) |
| Espacial    | O(máximo N)       |

*La complejidad temporal está dominada por la lectura y suma de los tablones en cada caso de prueba. Dado que la suma de `n` sobre todos los casos de prueba está limitada a `2 * 10^5`, el número total de operaciones de suma es lineal con respecto a esta suma, lo que lo hace eficiente. La operación de raíz cuadrada es O(1). La complejidad espacial es O(N) para almacenar los tablones de un solo caso de prueba en el peor escenario.*