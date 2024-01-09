https://codeforces.com/problemset/problem/996/A

# 443A - Anton and Letters

## Resumen del problema
Anton escribió un set de letras en una línea. ¿Cuántas letras distintas escribió?

## Input
Una sola línea con un string de longitud N (1 <= N <= 1000) -- Las letras escritas por Anton, \
Está asegurado que el string empieza y termina con llaves ({}) y las letras están separadas por una coma y un espacio.

## Output
Imprime el número de letras escritas por Anton

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| {a, b, c}         | a, b, c = 3 | **3**          |
| {b, a, b, a}      | a, b = 2 | **2**          |
| {a, b, c, d, e, e} | a, b, c, d, e = 5 | **5**          |

## Forma de resolverlo
Para resolver este problema, simplemente debes meter las letras en un set() y sacar su tamaño para saber cuántas letras escribió Anton.

Si usas C++, tendrás que utilizar la función **getline(cin, str, '\n');** para poder leer el string, puesto que el **cin** de C++ lee strings **sin espacios en blanco**. Una vez leído el string, puedes leer el string y detectar las letras mediante sus **ASCIIs**. Igualmente, puedes usar las funciones **erase()** y **remove()** para eliminar las llaves, comas y espacios en blanco para quedarte sólo con las letras, meterlas directamente en el set y sacar su tamaño.

Si usas Python, puedes usar la función **replace()** para eliminar las llaves y espacios en blanco y **split()** para separar las letras en una lista separada por comas. Con las letras separadas, puedes meterlas en un **set** o **diccionario** y sacar su tamaño para contar el número de letras distintas.

## Algoritmo
1) Elimina las llaves, espacios en blanco y comas del string
2) Utiliza un set o diccionario para registrar las letras
3) Saca el tamaño del set o diccionario para contar el número de letras distintas
