https://codeforces.com/problemset/problem/344/A

# 344A - Magnets

## Resumen del problema
Tienes unos imanes que deseas acomodar en una fila. Dependiendo de cómo los pongas, los polos se atraerán o repelerán. Cuando se repelen, forman un nuevo grupo de imanes. Dado el acomodo de los imanes en la fila, determina el número de grupos de imanes formados.

## Input
La 1° línea contiene un número entero N (1 <= N <= 100000) - El número de imanes
Las siguientes N líneas contienen el string '01' o '10', la forma en la que cada imán fue puesta en la fila, \
0 representa el polo positivo y 1 respresenta el número negativo

## Output
Imprime el número de grupos de imanes generados

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 6 <br> 10 <br> 10 <br> 10 <br> 01 <br> 10 <br> 10  | 101010 01 1010 = 3   | **3**          |
| 4 <br> 10 <br> 10 <br> 01 <br> 01                  | 1010 0101 = 2        | **2**          |

## Forma de resolverlo
Para resolver este problema, debemos buscar una forma de detectar cuando dos imanes se repelen, puesto que aquí es cuando se crean grupos de imanes nuevos. \
Si pones todos los imanes en la fila y lo representas con un string de 0s y 1s, verás que los grupos se forman cuando hay un par de **'00'** o **'11'** (polos del mismo tipo).  \
Suponiendo que empiezas con **1 grupo (el del 1° imán**, independientemente de su acomodo), por lo tanto deberás sumarle el **número de veces que hay '00's y '11's** en la fila para saber cuántos grupos de imanes habrá al final.

## Algoritmo
1) Construye el string de la fila de imanes
2) Recorre el string de imanes
3) Total de grupos = Número de instancias de '00' + Número de instancias de '11' + 1 (grupo del 1° imán)