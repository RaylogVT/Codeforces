https://codeforces.com/problemset/problem/1512/A

# 1512A - Spy Detected!

## Resumen del problema
En un arreglo, todos los números excepto uno son iguales. Devuelve el índice del número distinto a los demás.

## Input
La 1° línea contiene un número entero T (1 <= T <= 100) -- El número de casos de prueba \
La 1° línea del caso de prueba contiene un número entero N (3 <= N <= 100) -- La cantidad de números en el arreglo \
La 2° línea del caso de prueba contiene N números enteros Ai (1 <= Ai < 100) -- Los números del arreglo 

## Output
Imprime un número entero -- El índice del número distinto en el arreglo

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 4 <br> 4 <br> 11 13 11 11 <br><br> 5 <br> 1 4 4 4 4 <br><br> 10 <br> 3 3 3 3 10 3 3 3 3 3 <br><br> 3 <br> 20 20 10 | <br><br><br> 11 13 11 11 <br> 1 **2** 3 4 <br><br> 1 4 4 4 4 <br> **1** 2 3 4 5 <br><br> 3 3 3 3 10 3 3 3 3 3 <br> 1 2 3 4 **5** 6 7 8 9 10 <br><br> 20 20 10 <br> 1 2 **3** | <br><br><br><br> **2** <br><br><br> **1** <br><br><br> **5** <br><br><br> **3** |

## Forma de resolverlo
Para resolver este problema, podemos iterar sobre los números del arreglo y ver si la cantidad de veces que aparece en el mismo es igual a **1** (puesto que el **número repetido aparece N-1 veces** y el **número distinto aparece sólo 1 vez**). Para ello podemos usar la función **count()**, la cual detecta el número de instancias de un valor en un arreglo. Una vez que encontramos el número distinto, simplemente devolvemos su **índice o localidad + 1** (porque los índices empiezan en 0).

## Algoritmo
1) Itera sobre los números del arreglo
2) Con la función count(), saca la cantidad de veces que aparece el número en el arreglo \
a) Si count() == 1, entonces es el número distinto, devuelve su índice/localidad + 1
