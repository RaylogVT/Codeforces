https://codeforces.com/problemset/problem/1850/A

# 1850A - To My Critics

## Resumen del problema
Dados 3 números A,B,C, determina si la suma de dos de ellos es mayor o igual a 10.

## Input
La 1° línea contiene un número entero T (1 <= T <= 1000) -- El número de casos de prueba \
Las siguientes T líneas contienen 3 números enteros A,B,C (0 <= A,B,C <= 9) -- Los números a sumar

## Output
Imprime 'YES' si la suma de dos números es mayor o igual a 10, de lo contrario, imprime 'NO'

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 3 <br> 1 2 3 <br><br><br><br><br> 2 5 7 <br><br><br><br><br> 6 6 6 <br><br><br><br> | <br> 1 + 2 = 3 <br> 1 + 3 = 4  <br> 2 + 3 = 5 <br> 3,4,5 < 10 <br><br> 2 + 5 = 7 <br> 2 + 7 = 9 <br> 5 + 7 = 12 <br> 12 > 10 <br><br> 6 + 6 = 12 <br> 6 + 6 = 12 <br> 6 + 6 = 12 <br> 12 > 10  | <br> **NO** <br><br><br><br><br> **YES** <br><br><br><br><br> **YES** <br><br><br><br> |

## Forma de resolverlo
Para resolver este problema, simplemente debemos comparar las 3 posibles sumas entre los dígitos (**a+b**, **a+c**,  **b+c**) y revisar si alguna de ellas es **mayor o igual 10** para imprimir **YES** o **NO**.

## Algoritmo
1) Itera sobre los casos de prueba
2) Suma a+b, b+c, a+c 
- Si a+b >= 10 || a+c >= 10 || b+c >= 10, entonces imprime 'YES', de lo contrario, imprime 'NO' \