https://codeforces.com/problemset/problem/80/A

# 80A - Panoramix Prediction 

## Resumen del problema
Dados dos números N y M, donde N es primo, determina si M es igual al próximo número primo después de N.

## Input
La única línea contiene dos números enteros N y M (2 <= N < M <= 50) -- Los números a analizar

## Output
Imprime 'YES' si M es el próximo número primo después de N, de lo contrario, imprime 'NO'.

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 3 5               | **3** 4 **5** --> 5 es el próximo número primo --> 5 == 5               | YES          |
| 7 9               | **7** 8 9 10 **11** --> 5 es el próximo número primo --> 9 != 11        | NO          |
| 7 11              | **7** 8 9 10 **11** --> 5 es el próximo número primo --> 11 != 11       | YES          |

## Forma de resolverlo
Para resolver este problema, primero debemos encontrar cuál es el **próximo número primo después de N.** 

### a) Lista de números primos 
Dado que N y M son menor o igual a 50, podemos **enlistar manualmente todos los números primos entre 2 y 50 en un arreglo** y encontrar el **valor adyacente derecho** a aquél número primo que sea igual a N. 

### b) Fuerza bruta
Podemos iterar sobre cada número desde N y usar una función para determinar si el número actual es primo. El **1° resultado positivo** será el próximo número primo después de N. \
La función para revisar si un número es primo se puede encontrar en línea: \
a) Python - <a>https://www.geeksforgeeks.org/python-program-to-check-whether-a-number-is-prime-or-not/</a>
b) C++ - <a>https://www.geeksforgeeks.org/c-program-to-check-prime-number/</a>

Una vez encontrado el próximo número primo después de N, simplemente debemos revisar si este es **igual a M**. De serlo, imprime 'YES', de lo contrario, imprime 'NO'.

## Algoritmo
1) Encuentra el próximo número primo después de N (PNP) \
2) Compara si PNP es igual a M \
a) Si PNP == M, entonces imprime 'YES' \
b) Si PNP != M, entonces imprime 'YES'