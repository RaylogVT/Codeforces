https://codeforces.com/problemset/problem/271/A

# 271A - Beautiful Year

## Resumen del problema
Un año es hermoso si tiene todos sus dígitos distintos. Determina el próximo año hermoso después de un año dado.

## Input
Un número entero N (1000 <= N <= 9000) -- El año de inicio para buscar un año hermoso

## Output
Imprime el próximo año hermoso después del año dado

## Ejemplos
| Input  | Razonamiento  | Output    |
| ------ | :------------ | --------- |
| 1987   | 1988 = 3 dígitos (1,9,8) <br> 1989 = 3 dígitos (1,9,8) <br> 2013 = **4 dígitos** (2,0,1,3) | **2013**  |
| 2013   | 2014 = **4 dígitos** (2,0,1,4)                                                             | **2014**  |
| 5668   | 5669 = 3 dígitos (5,6,9) <br> 5670 = **4 dígitos** (5,6,7,0)                               | **5670**  |

## Forma de resolverlo
Para este problema simplemente debemos checar si el año tiene **4 dígitos distintos.** \
Si no los tiene, entonces pasa al siguiente año hasta encontrar uno que tenga 4 dígitos distintos. \
Ojo: Tienes que empezar a partir del **año después del dado**, de lo contrario puedes detectar erróneamente el input como output.

Sabiendo esto, **¿cómo extraemos los dígitos del número?**
### a) Set
Podemos utilizar la función **set()** de Python y C++ para sacar los dígitos del año. Como el set() sólo registra instancias únicas de una variable, si el año tiene 4 dígitos distintos, entonces su **tamaño será igual a 4**. En cambio, si el año tiene algún dígito repetido (Ej. 1988), entonces su tamaño será menor a 4.

### b) Matemático
Podemos utilizar divisiones y módulos para extraer cada dígito dependiendo de su posición. \
La fórmula es **(Año // 10^P) % 10**, donde **P** es la localidad de dígito leyendo el número de derecha a izquierda. Esto lo hacemos para saber en qué **posición está con respecto al sistema decimal** (unidad, decena, centena, mil, millón, etc...)

1° dígito (miles) = (Año // 10^3) % 10 \
2° dígito (miles) = (Año // 10^2) % 10 \
3° dígito (miles) = (Año // 10^1) % 10 \
4° dígito (miles) = (Año // 10^0) % 10

Una vez que tienes los 4 dígitos, simplemente los comparas entre sí. Si detectas que dos de ellos son iguales, entonces el año tiene dígitos repetidos, de lo contrario tiene sus 4 dígitos distintos.

## Algoritmo
1) Empieza a iterar sobre el año posterior al del input
2) Convierte el año en un string
3) Inserta el año en un set()
4) Calcula el tamaño del set()
5) Si el tamaño del set() es menor que 4, entonces suma 1 al año y repite los pasos 2-4
6) Si el tamaño del set() es igual a 4, entonces devuelve el año
