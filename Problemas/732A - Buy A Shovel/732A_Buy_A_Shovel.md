https://codeforces.com/problemset/problem/732/A

# 732A - Buy A Shovel

## Resumen del problema
Policarpio necesita comprar una pala. \
Las palas cuestan K rublos. Policarpio tiene infinitas monedas de 10 rublos y una sola moneda de R (1 <= R <= 9) rublos. \
Él quiere comprar cuantas palas sean necesarias de tal forma que con el monto total no reciba cambio con las monedas que tiene. \
¿Cuál es el mínimo número de palas que necesita comprar para no recibir cambio? \
Nota: Es evidente que si Policarpio compra 10 palas (independientemente de su precio), entonces puede utilizar las monedas de 10 rublos para pagarlas sin cambio. En este problema, queremos buscar si es posible comprar un número de palas menor a 10 considerando también la moneda de R rublos.

## Input
La 1° línea contiene dos números enteros K y R (1 <= K <= 1000, 1 <= R <= 9) - El precio de una pala, El valor de la moneda de R rublos.

## Output
Imprime el mínimo número de palas que Policarpio necesita comprar para pagar sin recibir cambio.

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 117 3 | 117 x 1 = 117 --> (11 x 10) + 3 = 113 --> 117 != 113 (+1) <br> 117 x 2 = 234 --> (23 x 10) + 3 = 233 --> 234 != 233 (+1) <br> 117 x 3 = 351 --> (35 x 10) + 3 = 353 --> 351 != 353 (+1) <br> 117 x 4 = 468 --> (46 x 10) + 3 = 463 --> 468 != 463 (+1) <br> 117 x 5 = 585 --> (58 x 10) + 3 = 583 --> 585 != 583 (+1) <br> 117 x 6 = 702 --> (70 x 10) + 3 = 703 --> 702 != 703 (+1) <br> 117 x 8 = 936 --> (93 x 10) + 3 = 933 --> 936 != 933 (+1) <br> 117 x 9 = 1053 --> (105 x 10) + 3 = 1053 --> 1053 == 1053 (+1) | **9** |
| 237 7 | 237 x 1 = 237 --> (23 x 10) + 7 = 237 --> 237 = 237 (+1) | **1** |
| 15 2 | 15 x 1 = 15 --> (1 x 10) + 2 = 12 --> 15 != 12 (+1) <br> 15 x 2 = 30 --> (3 x 10) = 30 --> 30 = 30 (+1) | **2** |

## Forma de resolverlo
Para resolver este problema, tenemos la ventaja de que este nos dice directamente que Policarpio deberá comprar 10 palas para pagar sin cambio (en el peor de los casos), lo cual significa que nuestro resultado siempre será un valor entre **1 y 9**. Con esto definido, simplemente tenemos que saber cuál monto total de X palas se puede pagar con infinitas monedas de 10 rublos y 1 moneda de R rublos. 

En el 1° ejemplo, comprar 9 palas de 117 rublos nos da un monto total de 1053 rublos, el cual se puede pagar usando la moneda única de 3 rublos. \
En el 2° ejemplo, comprar 1 pala de 237 rublos nos da un monto total de 237 rublos, el cual se puede pagar usando la moneda única de 7 rublos. \
En el 3° ejemplo, comprar 2 palas de 15 rublos nos da un monto total de 30 rublos, el cual se puede pagar con las monedas de 10 rublos sin necesidad de usar la de R rublos. \
Si analizamos los ejemplos, podemos concluir que si el último digito del monto total de X palas es igual a 0 o el valor de la moneda de R rublos, entonces X será el mínimo número de palas a comprar sin cambio. Sabiendo esto, simplemente tenemos que iterar sobre el número de palas a comprar (1 a 9) y ver si el monto total módulo 10 es igual a 0 o R. De ser así, devuelve el número de palas actuales a comprar.

## Algoritmo
1) Itera sobre 1-9 palas (X)
2) Si X * K mod 10 = 0 o R, entonces imprime el número de palas actual (X)
