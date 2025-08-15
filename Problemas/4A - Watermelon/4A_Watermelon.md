https://codeforces.com/problemset/problem/4/A

# 4A - Watermelon

## Resumen del problema
Dado el peso de una sandía (w), determina si la puedes partir en dos de tal manera que cada parte pese una cantidad par y positiva.

## Input
La única línea contiene un número entero W (1 <= W <= 100) -- El peso de la sandía

## Output
Imprime 'YES' si la sandía puede partirse en partes pares, de lo contrario imprime 'NO'

## Ejemplos
| Input | Razonamiento              | Output    |
| ----- | :-----------------------  | --------- |
| 8     | 8 = (2,6),(4,4)           | **YES**   |
| 7     | 7 = (1,6),(2,5),(3,4)     | **NO**    |

## Forma de resolverlo
### a) Dividir en pares
Si el peso de la sandía es **par**, entonces se puede partir en partes pares (como se ve en el ejemplo). \
Sin embargo, **esto no aplica** para una sandía de peso igual a **2**, puesto que la única forma de partirla es (1,1), lo cual hace que las partes sean impares. \

### b) Dividir una parte en 2
Puedes partir la sandía de tal manera que las partes pesen 2 y w-2. Si la parte w-2 es par y positiva, entonces se puede partir en partes pares. \
Ej. 2 ---> 2 - 2 = 0 ---> (2,0) = NO \
Ej. 6 ---> 6 - 2 = 4 ---> (2,4) = YES \
Ej. 9 ---> 9 - 2 = 7 ---> (2,7) = NO

## Algoritmo
a) Si el peso de la sandía es **par y mayor a 2**, entonces el output es **YES**, de lo contrario es **NO**. \
b) Si al restar -2 al peso de la sandía es **par y mayor a 0**, entonces el output es **YES**, de lo contrario es **NO**.
