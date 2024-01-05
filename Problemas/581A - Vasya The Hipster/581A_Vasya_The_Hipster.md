https://codeforces.com/problemset/problem/581/A

# 581A - Vasya The Hipster

## Resumen del problema
Vasya tiene A calcetines rojos y B calcetines azules. Cada día decide usar 1 calcetín rojo y 1 calcetín azul (es decir, calcetines distintos), y los tira al final del mismo. Si se le acaban los calcetines de un color, entonces procede a usar 2 calcetines del otro color (es decir, calcetines iguales) de ahora en adelante. ¿Cuántos días Vasya puede durar usando 1 calcetín de cada color (distintos) y 2 calcetines del mismo color (iguales) hasta que se le acaben?

## Input
Una sola línea que contiene dos números enteros A y B (1 <= A,B <= 100) - El número de calcetines rojos y azules, respectivamente.

## Output
Imprime dos números enteros separados por un espacio, el número de días que Vasya usará calcetines distintos e iguales, respectivamente.

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 3 1 | Días disitntos: <br> 2 0 (+1) <br> Días iguales: <br> 0 0 (+1) | **1 1** |
| 2 3 | Días disitntos: <br> 1 2 (+1) <br> 0 1 <br> Días iguales: | **2 0** |
| 7 3 | Días disitntos: <br> 6 2 (+1) <br> 5 1 (+1) <br> 4 0 (+1) <br> Días iguales: <br> 2 0 (+1) <br> 0 0 (+1) | **3 2** |

## Forma de resolverlo
Para resolver este problema, tenemos que modelar cuántos calcetines de cada color le quedan a Vasya después de cada día. Como inicia usando 1 de cada uno, entonces podríamos restar -1 a A y B y contar los días transcurridos hasta que alguno de estos dos sea igual a 0. Sin embargo, una manera más óptima de calcular los días es sacando el valor mínimo entre A y B, puesto que el color del cual tenga menos cantidad será el cual se le acabarán primero. 

Después, Vasya procede a usar 2 calcetines del mismo color, así que a partir de ahora podríamos restar -2 a A o B (dependiendo del que haya quedado) y contar los días transcurridos hasta que sea igual a 0 o 1 (no puede usar un día un solo calcetín). Sin embargo, también podemos optimizar este cálculo restando el número de días de color distinto a las 2 cantidades de calcetines (de esta manera, una de las dos quedará en 0), dividiendo los resultados entre 2 (2 calcetines del mismo color por día) y sacando el valor máximo entre las 2 divisiones, puesto que este representará el color del cual no se le acabaron primero los calcetines.

## Algoritmo
1) Calcula los días de calcetines distintos 
dias_distintos = min(a,b)
2) Calcula los días de calcetines iguales 
dias_iguales = max((calcetines_rojos - dias_distintos) / 2, (calcetines_azules - dias_distintos) / 2)