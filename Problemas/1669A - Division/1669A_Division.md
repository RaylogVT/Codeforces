https://codeforces.com/problemset/problem/1669/A

# 1669A - Division?

## Resumen del problema
Codeforces separa a sus usuarios en 4 divisiones basadas en su rating:
1) División 1 = 1900 <= Rating
2) División 2 = 1600 <= Rating <= 1899
3) División 3 = 1400 <= Rating <= 1599
4) División 4 = Rating <= 1399

## Input
La 1° línea contiene un número enteno T (1 <= T <= 10000) -- El número de casos de prueba
Las siguientes T líneas contienen un número entero N (-5000 <= N <= 5000) -- El rating del usuario

## Output
Imprime un string -- La división a la que corresponde el usuario

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 4 <br> 1399 <br> 1400 <br> 1670 <br> 2370 | <br> 1399 <= 1399 <br> 1400 <= 1400 <= 1599 <br> 1600 <= 1670 <= 1899 <br> 1900 <= 2370 | <br> **Division 4** <br> **-** <br> **-** <br> **+** |

## Forma de resolverlo
Para resolver este problema, simplemente debemos revisar las dos ecuaciones y ver cuál de ellas es verdadera para imprimir el signo correspondiente. Esto lo podemos hacer mediante dos condicionales **if()**.

## Algoritmo
1) Compara el valor contra los rangos de las divisiones \
a) Si Rating >= 1900, entonces imprime "Division 1" \
b) Si Rating >= 1600 y Rating <= 1899, entonces imprime "Division 2" \
c) Si Rating >= 1400 y Rating <= 1599, entonces imprime "Division 3" \
d) Si Rating <= 1399, entonces imprime "Division 4"
