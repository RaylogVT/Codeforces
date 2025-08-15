https://codeforces.com/problemset/problem/41/A

# 9A - Die Roll

## Resumen del problema
Yakko, Wakko y Dot están decidiendo a dónde viajar: Pennsylvania, Tasmania o Transylvania, respectivamente. \
Para elegir el destino, cada quién lanzará un dado, aquél con el número más grande gana. \
Después de que Yakko y Wakko lanzaran el dado, Dot se pregunta cuáles son sus probabilidades de ganar, y dado que Yakko y Wakko son caballeros, deciden que si su dado es igual al de alguno de ellos, entonces le darán la victoria a Dot. \
Sabiendo el valor del dado de Yakko y Wakko, ¿cuál es la probabilidad de que Dot gane?

## Input
La única línea contiene dos números enteros `Y` y `W` (`1 <= Y,W <= 6`) -- El valor del dado de Yakko y Wakko, respectivamente. \

## Output
Imprime la probabilidad de que Dot gane en formato de fracción simplificada (`A/B`). \
Si la probabilidad es 0, entonces imprime `0/1`. \
Si la probabilidad es 1, entonces imprime `1/1`. 

## Ejemplos
| Input              | Razonamiento  | Output    |
| ------------------ | :------------ | --------- |
| 4 2     | Valor a superar = 4 <br> Valores para ganar = 4,5,6 <br> P = 3/6 = 1/2  | **1/2**   |
| 3 5     | Valor a superar = 5 <br> Valores para ganar = 5,6 <br> P = 2/6 = 1/3  | **1/3**    |
| 1 2     | Valor a superar = 2 <br> Valores para ganar = 2,3,4,5,6 <br> P = 5/6  | **5/6**   |
| 1 1     | Valor a superar = 1 <br> Valores para ganar = 1,2,3,4,5,6 <br> P = 6/6 = 1/1  | **1/1**    |

## Forma de resolverlo
Para resolver este problema, primero debemos identificar cuál es el valor mínimo que Dot debe obtener para ganar. Esto lo podemos saber sacando el **valor máximo de los dados de Yakko y Wakko** mediante una función **max()**.

Después, debemos calcular cuántos números del dado permitirán que Dot gane. Puesto que un dado tiene **6 caras**, y el número tiene que ser **mayor o igual** al valor máximo de los dados de Yakko y Wakko, entonces el total de números posibles (**X**) es igual a **(6 - Valor máximo de los dados de Yakko y Wakko) + 1** (el +1 es para contemplar el caso en que el valor es igual).

Con las consideraciones anteriores, podemos concluir que la proabilidad de que Dot gane es igual a **X/6**. Sin embargo, el problema pide que la fracción resultante esté simplificada o formateada de una manera específica en determinadas situaciones: \
a) Si la probabilidad es igual a 0 (**0/6**), entonces debemos formatearla como **0/1** \
b) Si la probabilidad es igual a 1 (**6/6**), entonces debemos formatearla como **1/1** \
c) Probabilidades como **2/6, 3/6 y 4/6** se pueden simplificar en **1/3, 1/2 y 2/3**, respectivamente \
Puesto que este problema tiene un rango limitado de resultados posibles, podemos implementarlas cada uno de estos casos especiales por **fuerza bruta**, es decir, formatear de manera individual cada resultado posible según la probabilidad. Dependiendo del lenguaje, puedes utilizar un **if** o **switch** para formatear cada fracción posible.

## Algoritmo
1) Calcula X = (6 - max(Y,W)) + 1
2) Imprime X/6, formatea el resultado dependiendo de la fracción: \
a) 0/6 = 0/1 \
b) 2/6 = 1/3 \
c) 3/6 = 1/2 \
d) 4/6 = 2/3 \
e) 6/6 = 1/1 \
f) 1/6 y 5/6 quedan igual

