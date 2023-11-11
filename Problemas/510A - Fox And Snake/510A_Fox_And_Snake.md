https://codeforces.com/problemset/problem/510/A

# 510A - Fox and Snake

## Resumen del problema
Deseas dibujar una serpiente con gatos (#) en un tablero (n,m). Leyendo el tablero hacia abajo, la serpiente empieza en (1,1) y avanza hacia (1,m), luego baja 2 filas  hacia (3,m), después se mueve a (3,1), baja otras dos filas y repite el proceso. Las celdas sobre la cual no pasa la serpiente se representan con puntos (.) \
Dadas las dimensiones del tablero, construye la serpiente

## Input
Una sola línea con 2 números enteros N y M (3 <= N,M <= 50) - El número de filas y columnas del tablero, respectivamente. \
Está garantizado que N es impar.

## Output
Imprime la serpiente, la cual consta de N líneas con M caracteres.

## Ejemplos
| Input  | Razonamiento                                                                 | Output    |
| ------ | :------------                                                                | --------- |
| 3 3    | (1,1) --> (1,3) --> (3,3) --> (3,1)                                          | ### <br> ..# <br> ###         |
| 5 4    | (1,1) --> (1,4) --> (3,4) --> (3,1) --> (5,1) --> (5,4)                      | #### <br> ...# <br> #### <br> #... <br> ####         |
| 9 7    | (1,1) --> (1,7) --> (3,7) --> (3,1) --> (5,1) --> (5,7) --> (7,7) --> (7,1) --> (9,1) --> (9,7) | ####### <br> ......# <br> ####### <br> #...... <br> ####### <br> ......# <br> ####### <br> #...... <br> #######                 |

## Forma de resolverlo
Para resolver este problema, debemos identificar las acciones que realiza la serpiente en cada fila del tablero. Del resumen y los ejemplos podemos ver que la serpiente recorre la fila completa en las filas que son **impares**, mientras que cambia de fila en las filas **pares**. Sin embargo, en dónde cambia de fila no es igual entre filas pares. Si expandes el tablero, notarás que la serpiente cambia de filas **al inicio** de esta en las filas **4,8,12,16,...**, mientras que lo hacer **al final** de esta en las filas **2,6,10,14,...** . Si generalizamos esta sucesión, podemos que el cambio de filas al inicio se realiza en filas que son **múltiplos de 4**, mientras que el cambio al final se realiza en filas que son **pares pero no múltiplos de 4**. 

Con estos patrones detectados, podemos diseñar un algoritmo que imprima la serpiente y espacios vacíos con base en el **número de fila**, detectando si es impar o par, y en el caso de los pares, si es o no múltiplo de 4.

## Algoritmo
1) Itera sobre el tablero
2) Si la fila es impar, entonces llena las columnas con gatos (#)
3) Si la fila es múltiplo de 4, entonces llena la 1° columna con un gato (#) y el resto con puntos (.)
4) Si la fila es paro pero no múltiplo de 4, entonces llena la última columna con un gato (#) y el resto con puntos (.)

