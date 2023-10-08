https://codeforces.com/problemset/problem/228/A

# 228A - Is your horseshoe on the other hoof?

## Resumen del problema
Tienes 4 herraduras de un color determinado. El color está determinado por su número. \
¿Cuántas herraduras necesitas comprar para que tengas 4 de distinto color?

## Input
Una sola línea contiene 4 números enteros N1, N2, N3, N4 (1 <= N1, N2, N3, N4 <= 1000) -- El índice del color de cada herradura

## Output
Imprime un número entero -- El número de herraduras que necesitas comprar

## Ejemplos
| Input   | Razonamiento                                   | Output |
| :----   | :--------------------------------------------  | -----  |
| 1 7 3 3 | 1 herradura de mismo color <br> Cambia la 4° herradura para que no tenga el mismo color que la 3° | **1** |
| 7 7 7 7 | 4 herraduras del mismo color <br> Cambia la 2°, 3°, 4° herradura para que no tengan el mismo color que la 1° | **3** |

## Forma de resolverlo
Para resolver este problema, simplemente debemos contar de **cuántos colores son nuestras herraduras.** Para ello podemos llevar un registro de los colores de las herraduras y descartar aquellas cuyo color se repita. Si bien podemos hacer dicha labor manualmente con una lista/arreglo, existe una estructura de datos que puede hacer el trabajo por nosotros.

La estructura **set()** es un arreglo que guarda valores únicos de un input, así que es perfecta para registrar el color de las herraduras. \
Para más información sobre los sets, consulta las siguientes páginas: \
Python - https://www.w3schools.com/python/python_sets.asp \
C++ - https://www.geeksforgeeks.org/set-in-cpp-stl/

El set() guardará la cantidad de colores distintos que tenemos en nuestras herraduras. Como queremos saber cuántas necesitamos comprar para tener 4 de distinto color, simplemente debemos restar **4 - (Número de colores únicos que inicialmente tenemos)** para saber la cantidad.

## Algoritmo
1) Mete las 4 herraduras en un set 
2) Calcula el tamaño del set 
3) Resta (4 - Tamaño del set) para calcular el número de herraduras de distinto color que debes comprar
