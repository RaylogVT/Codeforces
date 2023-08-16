https://codeforces.com/problemset/problem/339/A

## Resumen del problema
Xenia tiene que resolver una suma, sin embargo, sólo lo puede hacer si los números a sumar están en orden ascendente (menor a mayor). \
Reordena los números de la suma para que Xenia pueda resolverla.

## Input
Un string de longitud N (1 <= N <= 1000) con los números 1,2,3 y símbolos de suma (+)

## Output
Imprime la suma ordenada

## Ejemplos
| Input     | Razonamiento                | Output          |
| :-------- | :-------------------------  | :-------------- |
| 3+2+1     | [3 2 1] --> [1 2 3]         | **1+2+3**       |
| 1+3+1+2+3 | [1 3 1 2 3] --> [1 1 2 3 3] | **1+1+2+3+3**   |

## Forma de resolverlo
Para este problema simplemente debemos extraer los números de la suma y ordenarlos de menor a mayor. Para ello podemos usar una lista o arreglo, y una vez ordenados, sacamos uno por uno para generar la suma.

## Algoritmo
1) Extrae los números de la suma y guárdalos en una lista/arreglo.
2) Ordena la lista/arreglo en orden ascendente.
3) Recorre la lista/arreglo ordenado, y por cada número recorrido imprime un '+'. 
4) Con el último número, no se imprime un '+'.