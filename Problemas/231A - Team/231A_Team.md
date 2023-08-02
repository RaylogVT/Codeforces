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
Imprime el número de problemas que los 3 amigos pueden implementar

## Ejemplos
3 \
1 1 0 = **Sí se implementa** (2 amigos saben la solución) \
1 1 1 = **Sí se implementa** (2 amigos saben la solución) \
1 0 0 = No se implementa (1 amigo sabe la solución)

Resultado = **2**

## Forma de resolverlo
Por cada problema, podemos sumar los 0s y 1s para saber cuántos amigos saben la solución de este. \
Si la suma es mayor o igual a 2, entonces suma 1 al número de problemas que pueden implementar. \
Si la suma es menor a 2, entonces el problema se omite.


