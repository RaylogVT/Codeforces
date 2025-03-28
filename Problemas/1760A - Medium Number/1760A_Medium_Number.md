https://codeforces.com/problemset/problem/1760/A

# 1760A - Medium Number

## Resumen del problema
Dados 3 números (a, b, c) determina la mediana de estos.

## Input
La 1° línea contiene un número enteno T (1 <= T <= 6840) -- El número de casos de prueba
Las siguientes T líneas contienen 3 números enteros a,b,c (1 <= a,b,c <= 20) -- Los números a utilizar

## Output
Imprime un número entero -- La mediana de los 3 números

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 4 <br> 5 2 6 <br> 14 3 4 <br> 20 3 2 <br> 1 2 3 | <br> 2 5 6 <br> 3 4 13 <br> 2 3 20 <br> 1 2 3 | <br> **5** <br> **4** <br> **3** <br> **2** |

## Forma de resolverlo
La mediana es el valor en la posición central de un conjunto de datos ordenados (es decir, es el número que está en medio de una lista de números). Considerando nuestro input, primero debemos **ordenar** los números de menor a mayor; después, puesto que sólo tenemos 3 números, podemos concluir que la mediana será aquél que sea el **2°** en la lista. A nivel programación, el 2° elemento de una lista se representa con la localidad 1.

Por lo tanto, para resolver este problema, simplemente debemos ordenar los 3 números de menor a mayor y extraer aquél que quede **en medio** mediante su localidad igual a **1**.

## Algoritmo
1) Ordena los números
2) Extrae el número de en medio (números[1])
