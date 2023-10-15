https://codeforces.com/problemset/problem/1328/A

# 1328A - Divisibility Problem

## Resumen del problema
Tienes dos números A y B. Puedes sumar +1 a A. ¿Cuántas veces sumar +1 a A para que sea divisible por B? 

## Input
La 1° línea contiene un número entero N (1 <= N <= 100) -- El número de casos \
Las siguientes N líneas contienen dos números enteros (1 <= N <= 10^9) -- A y B

## Output
Por cada caso imprime el número de veces que debes sumar +1 para que A sea divisible por B

## Ejemplos
| Input         | Razonamiento  | Output    |
| ------------- | :------------ | --------- |
| 4 <br> 10 4 <br> 13 9 <br> 100 13 <br> 12 6 | 10 + 2 = 12 % 4 = 0 --> +2 <br> 13 + 5 = 18 % 9 = 0 --> +5 <br> 100 + 4 = 104 % 13 = 0 --> +4 <br> 12 + 0 = 12 % 6 = 0 --> +0 | **2** <br> **5** <br> **4** <br> **0** |

## Forma de resolverlo
Para este problema podríamos iterar sobre cada caso sumando +1 a A, contando cuántas veces lo hemos hecho y sacando el módulo de A y B hasta que este sea 0. Sin embargo, realizar estas operaciones **excederá el tiempo permitido por Codeforces**, considerando que A y B pueden ser hasta 10^9 y con valores muy cercanos que puede llevar a B-1 operaciones por caso (suponiendo que A = B-1), así que necesitamos otra aproximación.

Veamos, la operación **Módulo** saca el residuo de una división (Ej. Si divides 13 / 9 = 1 R 4, por lo que 13 % 9 = 4). Cuando **un número es divisible por otro, entonces su módulo es igual a 0**. Volviendo al problema, queremos convertir A de tal forma que A % B = 0. En nuestro ejemplo (**A = 13, B = 9**), el próximo número después de A que es divisible por B es **18**, por lo que es fácil asumir que el resultado es 18 - 13 = **5**. Si volviemos al módulo (13 % 9 = 4), notaremos 4 + 5 = 9. Interpretando esto, si sumamos +5 a nuestro módulo 4, entonces tendremos como resultado 9, el cual es divisible entre 9. Es decir, 5 es lo que le falta a nuestro módulo 4 para que lo podamos dividir entre 9 y el módulo ahora sea 0. Si generalizamos esto en una fórmula, sería **B - (A % B)**. Así que, calculando esta operación, sabremos cuántas sumar +1 para que A sea divisible entre B.

## Algoritmo
1) Itera sobre cada caso
2) Calcula e imprime B - (A % B)
