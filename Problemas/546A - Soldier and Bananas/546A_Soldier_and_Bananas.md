https://codeforces.com/problemset/problem/546/A

# 546A - Soldier and Bananas

## Resumen del problema
Quieres comprar W bananas, cada una costando K dólares más que la anterior (i.e. La 1° banana cuesta K dólares, la 2° banana cuesta 2K dólares, y así sucesivamente). Si tengo N dólares, ¿entonces cuánto dinero tengo que pedirle prestado a mi amigo para comprar las bananas?

## Input
Una línea con 3 números enteros K, N, W (1 <= K, W <= 1000, 0 <= N <= 1000000000) - El número de bananas a comprar, los dólares que tengo actualmente y el precio de la 1° banana

## Output
Imprime un número entero - La cantidad de dólares que necesito prestarle a mi amigo. \
Si tengo suficiente dinero para comprar las bananas, y no necesito pedir prestado, entonces imprime 0.

## Ejemplos
| Input   | Razonamiento                                   | Output |
| :----   | :--------------------------------------------  | -----  |
| 3 17 4  | $3 - 1° banana <br> $6 - 2° banana <br> $9 - 3° banana <br> $12 - 1° banana <br> Total = 3+6+9+12 = 30 <br> 30 - 17 = 13 (Me faltan $13) | **13**  |
| 2 30 5  | $5 - 1° banana <br> $10 - 2° banana <br> Total = 5+10 = 15 <br> 15 - 30 = -15 (Me sobran $15) | **0**  |

## Forma de resolverlo
Para este problema simplemente debemos sacar el monto total de las bananas que queremos comprar. Para ello sacamos el precio individual de cada una de ellas y la sumamos al total. Una vez calculado, podemos compararlo contra el dinero que tengo actualmente. Esto lo podemos hacer ya sea con una comparación directa o una resta.
a) Si el monto total es mayor a mi dinero actual, entonces los restamos, de lo contrario el resultado es 0
b) Si al restar el monto total menos el dinero actual el resultado es positivo, entonces imprimimos la resta, de lo contrario el resultado es 0 (un valor negativo indica que nos sobra dinero).

## Algoritmo
1) Saca el monto total de las bananas a comprar
1.1) Saca el precio individual de cada banana y súmalo al monto total
2) Calcula el dinero a pedir prestado
2.1) Si Monto Total > Dinero actual, entonces la respuesta es Monto Total - Dinero Actual
2.2) Si Monto Total <= Dinero actual, entonces la respuesta es 0