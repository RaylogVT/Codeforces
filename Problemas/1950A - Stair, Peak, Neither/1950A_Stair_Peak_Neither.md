https://codeforces.com/problemset/problem/1950/A

# 1950A - Stair, Peak, Neither 

## Resumen del problema
Dados 3 números A,B,C, determina si forman una escalera, pico o nada.
- Una escalera se forma cuando A < B < C
- Un pico se forma cuando A < B > C

## Input
La 1° línea contiene un número entero T (1 <= T <= 1000) -- El número de casos de prueba \
Las siguientes T líneas contienen 3 números enteros A,B,C (0 <= A,B,C <= 9) -- Los números a analizar

## Output
Imprime 'STAIR' si los números forman una escalera \
Imprime 'PEAK' si los números forman un pico \
Imprime 'NONE' si los números no forman ni un pico ni una escalera

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 5 <br> 1 2 3 <br> 1 4 3 <br> 4 3 2 <br> 2 5 7 <br> 6 6 6 | <br> 1 < 2 < 3 = Escalera <br> 1 < 4 > 3 = Pico <br> 4 > 3 > 2 = Nada <br> 2 < 5 < 7 = Escalera <br> 6 = 6 = 6 = Nada  | <br> **STAIR** <br> **PEAK** <br> **NONE** <br> **STAIR** <br> **NONE**  |

## Forma de resolverlo
Para resolver este problema, simplemente debemos implementar las condiciones que pide el problema, e imprimir el string correspondiente dependiendo de la condición cumplida. \
Como tenemos que checar dos condiciones a la vez (comparar A vs B y B vs C), recuerda utilizar un **and** o **&&**, dependiendo del lenguaje que estés utilizando.

## Algoritmo
1) Itera sobre los casos de prueba
2) Compara A,B,C \
a) Si A < B y B < C, entonces imprime 'STAIR' \
b) Si A < B y B > C, entonces imprime 'PEAK' \
c) Si las condiciones anteriores no se cumplieron, entonces imprime 'NONE'