https://codeforces.com/problemset/problem/431/A

# 431A - Black Square

## Resumen del problema
Jury decidió instalar un juego llamado 'Black Square', el cual consiste en presionar cuadrados negros sobre cuatro líneas. \
Jury necesita Ai calorías para presionar un cuadrado en la i-ésima línea. \
Conociendo el orden de las líneas en donde aparecieron cuadrados negros y las calorías necesarias para presionar cuadrados en cada línea, ¿cuántas calorías Jury gastó en total?

## Input
La 1° línea contiene 4 números enteros A1, A2, A3, A4 (0 <= A1,A2,A3,A4 <= 10000) -- La cantidad de calorías necesarias para presionar un cuadrado negro en la 1°, 2°, 3° y 4° línea, respectivamente.
La 2° línea contiene un string S (0 <= len(S) <= 100000), donde el i-esimo carácter representa la línea sobre la cual se presionó un cuadrado negro

## Output
Imprime un número entero -- El total de calorías que Jury utilizó para presionar los cuadrados

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 1 2 3 4 <br> 123214   | Líneas = 123214 <br> Calorías = 123214 <br> 1 + 2 + 3 + 2 + 1 + 4 = 13  | **13**  |
| 1 5 3 2 <br> 11221   | Líneas = 11221 <br> Calorías = 11551 <br> 1 + 1 + 5 + 5 + 1 = 13  | **13**  |

## Forma de resolverlo
Para resolver este problema, simplemente debemos iterar sobre los caracteres del string, mapear el valor de cada uno en calorías e irlas sumando de manera cumulativa. El mapeo entre líneas y calorías se puede hacer con **ifs** puesto que sólo son 4 líneas, pero si deseas hacerlo dinámico, puedes utilizar un **hash o diccionario** igualmente

## Algoritmo
1) Inicia un contador de calorías en 0
2) Itera sobre los caracteres del string 
3) Por cada caracter, suma su valor en calorías al contador
4) Imprime el resultado final del contador