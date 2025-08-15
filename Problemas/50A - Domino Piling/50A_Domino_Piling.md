https://codeforces.com/problemset/problem/50/A

# 50A - Domino Piling

## Resumen del problema
Tienes un tablero de tamaño M x N que quieres llenar con fichas de dominó de tamaño 2 x 1. \
Las fichas no se pueden solapar ni salir del tablero. \
Encuenta el máximo número de fichas con las que puedes rellenar el tablero.

## Input
La única línea contiene dos números enteros `M` y `N` (`1 <= M <= N <= 15`) -- El ancho y alto del tablero.

## Output
Imprime un número entero -- El número de fichas de dominó necesarias para llenar el tablero.

## Ejemplos
| Input | Razonamiento          | Output    |
| :---- | :-------------------  | --------- |
| 2 4   | (2 * 4) / (2 * 1) = 4 | **4**     |
| 3 3   | (3 * 3) / (2 * 1) = 4 | **4**     |

## Forma de resolverlo
El área del tablero es M x N cuadrados \
El área de una ficha de dominó es 2 cuadrados (2 x 1). \
Por lo tanto, el número de fichasa usar es **(M * N) / 2** \
Independientemente de cómo acomodes las fichas, el resultado es el mismo. \
En aquellos tableros cuya área es **impar**, siempre quedará **un cuadrado que las fichas no podrán cubrir**. \
Dependiendo el lenguaje, deberás asegurar que este siempre **redondee hacia abajo** el resultado de la división para que sea correcto.

## Algoritmo
1) Calcula (M * N) / 2
