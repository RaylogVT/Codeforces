https://codeforces.com/problemset/problem/231/A

# 231A - Team

## Resumen del problema
Petya, Vasya y Tonya van a participar en un concurso de programación. \
Deciden que si 2 de ellos saben la solución de un problema, entonces lo pueden implementar. \
El concurso tiene N problemas, y sabemos quién de los 3 amigos sabe la solución para cada uno de ellos. \
Determina el número de problemas que los amigos podrán implementar.

## Input
La primera línea tiene un número entero N (1 <= N <= 1000) -- El número de problemas del concurso \
Las siguientes N líneas tienen 3 números enteros -- Petya, Vasya, Tonya, respectivamente. (0 = No sabe la solución, 1 = Sí sabe la solución)

## Output
Imprime un número entero -- El número de problemas que los 3 amigos pueden implementar

## Ejemplos
| Input   | Razonamiento                                   | Output |
| :----   | :--------------------------------------------  | -----  |
| 3 <br> 1 1 0 <br> 1 1 1 <br> 1 0 0 | 3 <br> 1 1 0 = **Sí se implementa** <br> 1 1 1 = **Sí se implementa** <br> 1 0 0 = **No se implementa** | **2** |
| 3 <br> 1 0 0 <br> 0 1 1 <br> 0 1 0 | 3 <br> 1 0 0 = **No se implementa** <br> 0 1 1 = **Sí se implementa** <br> 0 1 0 = **No se implementa** | **1** |

## Forma de resolverlo
Si nuestro input consta de 0s y 1s para representar qué amigos saben o no resolver el problema, entonces basta con sumar los números para saber cuántos saben. \
Si la suma da **2 o 3**, entonces **sí** pueden resolver el problema. \
Si la suma da **0 o 1**, entonces **no** pueden resolver el problema.

## Algoritmo
1) Por cada problema, suma los 0s y 1s para saber cuántos amigos saben la solución de este. 
2) Si la suma es mayor o igual a 2, entonces suma 1 al número de problemas que pueden implementar. 
3) Si la suma es menor a 2, entonces el problema se omite.
