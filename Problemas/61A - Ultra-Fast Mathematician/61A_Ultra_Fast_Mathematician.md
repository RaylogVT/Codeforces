https://codeforces.com/problemset/problem/61/A

# 61A - Ultra-Fast Mathematician

## Resumen del problema
Vas a realizar una operación sobre dos números que consta de lo siguiente: 
1) Si el i-ésimo dígito de los 2 números es igual, entonces la respuesta es 0
2) Si el i-ésimo dígito de los 2 números es distinto, entonces la respuesta es 1

Dados dos números, determina el resultado de la operación.

## Input
La 1° línea consta de un string de 0s y 1s de hasta 100 dígitos -- El 1° número \
La 2° línea consta de un string de 0s y 1s de hasta 100 dígitos -- El 2° número \
Está garantizado que los dos números son del mismo tamaño.

## Output
Imprime el resultado de la operación sobre los dos números.

## Ejemplos
| Input   | Razonamiento                                   | Output |
| :----   | :--------------------------------------------  | -----  |
| 1010100 <br> 0100101 | 1010100 <br> 0100101 <br> --------- <br> 1110001 | **1110001** |
| 1110 <br> 1010 | 1110 <br> 1010 <br> ------ <br> 0100 | **0100** |

## Forma de resolverlo
Si has visto el tema de operadores lógicos, notarás que este problema es muy similar a un **XOR**: \
0 XOR 0 = 0 \
1 XOR 0 = 1 \
0 XOR 1 = 1 \
1 XOR 1 = 0 \
Si bien los lenguajes de programación traen la función XOR integrada, aquí tendremos que implementarla manualmente, tal como se describió anteriormente. \
Para no hacer 4 operaciones, simplemente podemos programar la operación tal que: \
a) Si los dos dígitos son **iguales**, entonces la operación es igual a **0** \
b) Si los dos dígitos son **distintos**, entonces la operación es igual a **1**

## Algoritmo
1) Itera sobre los dígitos de los dos números
2) SI el i-ésimo dígito de los dos números es: \
a) Igual = Añade '0' al resultado \
b) Distinto = Añade '1' al resultado
