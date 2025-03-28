https://codeforces.com/problemset/problem/1915/A

# 1915A - Odd One Out 

## Resumen del problema
Dados 3 números, devuelve aquél que es distinto de los otros dos

## Input
La 1° línea contiene un número enteno T (1 <= T <= 270) -- El número de casos de prueba
Las siguientes T líneas contienen 3 números enteros a,b,c (0 <= a,b,c <= 9) -- Los números a comparar

## Output
Imprime el número distinto de los otros dos.

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 3 <br> 4 5 5 <br> 2 3 2 <br> 8 8 7 | <br> **4** 5 5 <br> 2 **3** 2 <br> 8 8 **7** | <br> **4** <br> **3** <br> **7** |

## Forma de resolverlo
Para resolver este problema, simplemente debemos buscar una manera de identificar el número distinto de los tres. \
La manera rápida sería **comparando los 3 números entre sí** (a = b, b = c, a = c) y **devolver el número restante cuando el par comparado sea el mismo número**. Otra forma sería usar un **diccionario** para contar cuántas veces cada número aparece y devolver aquél que lo hizo sólo **una vez**

## Algoritmo
1) Compara los 3 números entre sí
a) Si a == b, entonces devuelve c
b) Si b == c, entonces devuelve a
c) Si a == c, entonces devuelve b