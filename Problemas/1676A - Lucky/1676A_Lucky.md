https://codeforces.com/problemset/problem/1676/A

# 1676A - Lucky?

## Resumen del problema
Un ticket tiene 6 dígitos. Un ticket es considerado de la suerte si la suma de los primeros 3 dígitos es igual a la suma de los últimos 3 dígitos. Determina si un ticket es de la suerte o no.

## Input
La 1° línea contiene un número entero N (1 <= N <= 1000) -- El número de casos de prueba
La 2° línea contiene un string de 6 dígitos -- El número de ticket

## Output
Imprime 'YES' si el ticket es de la suerte, de lo contrario, imprime 'NO'

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 5 <br> 213132 <br> 973894 <br> 045207 <br> 000000 <br> 055776 | <br> 213 132 --> 6 == 6 <br> 973 894 --> 19 != 21 <br> 045 207 --> 9 == 9 <br> 000 000 --> 0 == 0 <br> 055 776 --> 10 != 20  | **YES** <br> **NO** <br> **YES** <br> **YES** <br> **NO** |

## Forma de resolverlo
Para resolver este problema, simplemente tenemos que realizar las sumas de los dígitos tal como explica el problema y checar si son iguales o no. 
A nivel implementación, tenemos que analizar la forma de extraer los dígitos. Una forma sería utilizando módulos de potencia de 10 para ir extrayendo cada dígito de su posición unitaria. Sin embargo, dado que todos los tickets son de 6 dígitos sin excepción, es más fácil acceder directamente a los dígitos mediante sus **localidades**. Los **primeros 3 dígitos** tendrían las localidades **0, 1, 2**, respectivamente, mientras que los **últimos 3 dígitos** tendrían las localidades **3, 4, 5**, respectivamente. Sabiendo esto, es más fácil **sumar los valores en las localidades** y hacer la comparación para saber si el ticket es de la suerte o no. Una última consideración: Dependiendo del lenguaje, primero tendrás que **castear los dígitos a número entero** para poder sumarlos, puesto que inicialmente se leen como un string.

## Algoritmo
1) Itera sobre cada caso de prueba
2) Recibe el string del ticket (s)
3) Compara si s(0) + s(1) + s(2) == s(3) + s(4) + s(5) \
a) Si las dos sumas son iguales, entonces imprime 'YES' \
b) Si las dos sumas son diferentes, entonces imprime 'NO'