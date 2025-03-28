https://codeforces.com/problemset/problem/1807/A

# 1807A - Plus or Minus

## Resumen del problema
Dados 3 números (a, b, c) determina si estos cumplen con la ecuación a + b = c o a - b = c.

## Input
La 1° línea contiene un número enteno T (1 <= T <= 162) -- El número de casos de prueba
Las siguientes T líneas contienen 3 números enteros a,b,c (1 <= a,b <= 9, -8 <= c <= 18) -- Los números a utilizar

## Output
Imprime "+" si los 3 números forman la ecuación a + b = c
Imprime "-" si los 3 números forman la ecuación a - b = c

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 4 <br> 1 2 3 <br> 3 2 1 <br> 2 9 -7 <br> 3 4 7 | <br> 1 + 2 = 3 <br> 3 - 2 = 1 <br> 2 - 9 = -7 <br> 3 + 4 = 7 | <br> **+** <br> **-** <br> **-** <br> **+** |

## Forma de resolverlo
Para resolver este problema, simplemente debemos revisar las dos ecuaciones y ver cuál de ellas es verdadera para imprimir el signo correspondiente. Esto lo podemos hacer mediante dos condicionales **if()**.

## Algoritmo
1) Revisa las ecuaciones \
a) Si a + b = c, entonces imprime "+" \
b) Si a - b = c, entonces imprime "-"
