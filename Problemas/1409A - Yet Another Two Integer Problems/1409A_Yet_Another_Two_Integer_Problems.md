https://codeforces.com/problemset/problem/1409/A

# 1409A - Yet Another Two Integer Problems

## Resumen del problema
Tienes dos números A y B. En un movimiento, puedes elegir un valor K (1 <= K <= 10) y sumarlo o restarlo a A (es decir, A = A + K o A = A - K). 
¿Cuál es el mínimo número de movimientos de suma/resta necesario para transformar A en B (A = B)?

## Input
La 1° línea contiene un número entero T (1 <= T <= 20000) -- El número de casos de prueba \
Las siguientes T líneas contienen dos números A y B (1 <= A,B <= 10^9) -- Los números A y B

## Output
Por cada caso de prueba, imprime un número entero -- El número de movimientos necesarios para transformar A en B.

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 2 <br> 18 4 <br><br><br><br> 50 20 <br><br><br> | <br> 18 - 10 = 8 (+1) <br> 8 - 4 = 4 (+1) <br> 2 movimientos <br> 50 - 10 = 40 (+1) <br> 40 - 10 = 30 (+1) <br> 30 - 10 = 20 (+1) <br> 3 movimientos | <br><br><br> **2** <br><br><br><br> **3** |

## Forma de resolverlo
Para resolver este problema, primero debemos pensar cómo vamos a ir sumando y restando K en A. Puesto que queremos el menor número de movimientos posibles, es natural pensar que lo más rápido es ir sumando/restando de **10 en 10** en vez de con cualquier otro valor posible de K. Sabiendo esto, para calcular cuántas veces tenemos que sumar/restar 10 a A, simplemente podemos restar **A-B** y dividir la diferencia entre 10.

Ahora bien, hay un último aspecto a considerar. Como podemos ver en el 1° ejemplo, en el último movimiento tuvimos que restar 4 en vez de 10 para no pasarnos y llegar a B. Sin embargo, en el 2° ejemplo, no se restó un valor K distinto de 10 para alcanzar B. ¿Por qué sucede esto? Bueno, si revisamos A y B, vemos que nuestro último movimiento es para igualar el último dígito de A con B (si retomamos el 1° ejemplo, 18 termina en 8, mientras que 4 termina en 4, entonces necesitamos igualarlos con una resta -4). Sin embargo, esto no sucede cuando A y B ya terminan con el mismo dígito (si retomamos el 2° ejemplo, 50 y 20 terminan en 0, así que no hubo que restar un valor K adicional). Básicamente, si A y B terminan con un dígito distinto, entonces tenemos que sumar +1 movimiento (distinto de sumar/restar 10) a nuestra cantidad para poder igualarlos. Por el otro lado, si A y B terminan con el mismo dígito, entonces este movimiento adicional no es necesario. 

¿Cómo podemos saber si A y B terminan con el mismo dígito (aparte de notarlo a simple vista)? Podemos usar un módulo (%) para ello. Básicamente, si la resta A-B es divisible entre 10 ((A-B) % 10 = 0), entonces no se necesita sumar el movimiento adicional final. Por el otro lado, si la resta A-B no es divisible entre 10 ((A-B) % 10 != 0, hay un residuo), entonces sí se suma un movimiento adicional final a nuestra cantidad.

## Algoritmo
1) Calcula A-B
2) Define un booleano que represente el movimento adicional final
3) Calcula (A-B) % 10 \
a) Si (A-B) % 10 == 0, entonces no se suma +1 a la cantidad de movimientos \
b) Si (A-B) % 10 != 0, entonces suma +1 a la cantidad de movimientos
4) Calcula (A-B) / 10 para sacar el número de sumas/restas de 10 a realizar
