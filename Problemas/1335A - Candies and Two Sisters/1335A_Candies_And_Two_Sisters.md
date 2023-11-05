https://codeforces.com/problemset/problem/1335/A

# 1335A - Candies and Two Sisters

## Resumen del problema
Alice y Betty tienen dulces. Quieren repartirlos de tal manera que:
1) Alice tenga mínimo 1 dulce
2) Betty tenga mínimo 1 dulce
3) Alice tenga más dulces que Betty
¿De cuántas maneras puedes repartir N dulces entre Alice y Betty de tal forma que se cumplas las condiciones anteriores? 

## Input
La 1° línea contiene un número entero T (1 <= T <= 10^4) - El número de casos a probar
Las siguientes N línea contienen un número entero N (1 <= N <= 2*10^9) - El número de dulces a repartir

## Output
Por cada caso, imprime el número de formas de repartir los dulces entre Alice y Betty

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 3 <br> 2 <br> 4 <br> 7 | <br> <br> Ninguna = 0 <br> (3,1) = 1 <br> (6,1), (5,2), (4,3) = 3 | <br> **0** <br> **1** <br> **3** |
| 3 <br> 3 <br> 6 <br> 8 | <br> <br> (2,1) = 1 <br> (5,1), (4,2) = 2 <br> (7,1), (6,2), (5,3) = 3 | <br> **1** <br> **2** <br> **3** |

## Forma de resolverlo
Para resolver este problema, debemos saber el **máximo de dulces que Betty recibirá**. Para ello, analicemos dos situaciones:
a) Si la cantidad de dulces es **impar**, entonces Alice recibirá (N+1)/2 dulces y Betty recibirá (N-1)/2, por lo que el número de formas de repartir los dulces es **(N-1)/2**
b) Si la cantidad de dulces es **par**, entonces Alice recibirá (N/2)+1 dulces y Betty recibirá (N/2)-1, por lo que el número de formas de repartir los dulces es **(N/2)-1**

## Algoritmo
1) Itera sobre cada caso
2) Revisa la cantidad de dulces \
a) Si la cantidad de dulces es impar, entonces calcula (N-1)/2 \
b) Si la cantidad de dulces es par, entonces calcula (N/2)-1 
