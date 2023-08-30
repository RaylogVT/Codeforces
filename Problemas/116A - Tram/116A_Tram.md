https://codeforces.com/problemset/problem/116/A

# 116A - Tram

## Resumen del problema
Un tren atraviesa N estaciones para mover pasajeros. En cada estación salen A pasajeros del tren y entran B al mismo. ¿Cuál es el número máximo de pasajeros que el tren tiene dentro durante su viaje?

## Input
La 1° línea contiene un número entero N (2 <= N <= 1000) - El número de estaciones que el tren cruza
Las siguientes N líneas contienen dos números enteros (0 <= A,B <= 1000) - El número de pasajeros que salen del tren en la n-ésima estación, el número de pasajeros que entran al tren en la n-ésima estación. \
Está garantizado que:
- 0 pasajeros salen del tren en la 1° estación
- 0 pasajeros entran al tren en la última estación
- El número de pasajeros que salen en las estaciones nunca excede la cantidad de pasajeros actual en el tren
- Todos los pasajeros restantes salen en la última estación

## Output
Imprime un número entero - El número máximo de pasajeros que el tren tuvo durante su viaje

## Ejemplos
| Input   | Razonamiento                                   | Output |
| :----   | :--------------------------------------------  | -----  |
| 4 <br> 0 3 <br> 2 5 <br> 4 2 <br> 4 0 | 0 pasajeros <br> 0-0+3 = 3 pasajeros <br> 3-2+5 = **6 pasajeros** <br> 6-4+2 = 4 pasajeros <br> 4-4+0 = 0 pasajeros | **6** |

## Forma de resolverlo
Para este problema, debemos idear una manera de registrar el número máximo de pasajeros que ha habido en el tren con cada estación que cruzamos. Para ello, podemos usar **programación dinámica**, un algoritmo que usa técnicas de memorización para realizar acciones con base en resultados actuales y previos. En este caso, usaremos una variable auxiliar para **memorizar el número máximo de pasajeros** que el tren ha tenido durante el viaje, y si al cruzar una estación, el número de pasajeros actual supera al máximo registrado hasta el momento, entonces actualizamos el valor máximo con dicho número para arrastrarlo en las comparaciones de las próximas estaciones.

Si vemos el ejemplo, tras la 2° estación, el tren lleva 6 pasajeros, y hasta ese momento se tenía registrado que podía llevar 3, por lo que actualizamos el máximo de pasajeros de 3 a 6. Sin embargo, en la 3° estación, el tren solo lleva 4 pasajeros, y como se tiene registrado que el tren puede llevar 6 pasajeros, entonces no actualizamos el valor máximo a 4, sino que lo conservamos a 6. Con esto nos aseguramos de no perderlo en cada próxima estación que cruzamos.

## Algoritmo
1) Inicia con 0 pasajeros en el tren, 0 como el máximo de pasajeros dentro del tren
2) En cada estación, Pasajeros Actuales = Pasajeros Anteriores - Pasajeros Salientes (A) + Pasajeros Entrantes (B)
3) Si el número de pasajeros actuales en el tren es mayor al máximo registrado hasta el momento, actualiza el valor máximo
4) Una vez recorridas todas las estaciones, imprime el valor máximo
