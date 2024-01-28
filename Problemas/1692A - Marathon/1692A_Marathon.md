https://codeforces.com/problemset/problem/1692/A

# 1692A - Marathon

## Resumen del problema
Tienes 4 números a, b, c, d, los cuales representan la distancia recorrida por Timur (a) y otras 3 personas. ¿Cuántas personas están enfrente de Timur (es decir, han recorrido más distancia que él)?

## Input
La 1° línea contiene un número entero N (1 <= N <= 10000) -- El número de casos de pruebas
Las siguientes N líneas contienen 4 números enteros a, b, c, d (1 <= a,b,c,d <= 10000) -- La distancia recorrida por Timur y las otras 3 personas

## Output
Imprime un número entero -- La cantidad de personas enfrente de Timur

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 4 <br> 2 3 4 1 <br> 10000 0 1 2 <br> 500 600 400 300 <br> 0 9999 10000 9998 | <br> 2 < 3 = +1 <br> 2 < 4 = +1 <br> 2 > 1 <br> Total = 2 <br> 10000 > 0 <br> 10000 > 1 <br> 10000 > 2 <br> Total = 0 <br> 500 < 600 = +1 <br> 500 > 400 <br> 500 > 300 <br> Total = 1 <br> 0 < 9999 = +1 <br> 0 > 10000 = +1 <br> 0 > 9998 = +1 <br> Total = 3             | <br> **2** <br><br><br><br> **0** <br><br><br><br> **1** <br><br><br><br> **3**          |

## Forma de resolverlo
Para resolver este problema, simplemente debemos revisar la distancia de las 3 personas (b, c, d) contra la de Timur (a) y contar **cuántas de ellas con mayores a la de él**. Basta con una comparación directa y un contador para sacar la cantidad.

## Algoritmo
1) Declara un contador de personas enfrente de Timur
2) Compara la distancia de Timur (a) y la persona 1 (b) \
a) Si b > a, entonces suma +1 al contador
3) Compara la distancia de Timur (a) y la persona 2 (c) \
a) Si c > a, entonces suma +1 al contador
4) Compara la distancia de Timur (a) y la persona 3 (d) \
a) Si d > a, entonces suma +1 al contador
5) Imprime el número de personas enfrente de Timur