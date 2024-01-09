https://codeforces.com/problemset/problem/750/A

# 750A - New Year and Hurry

## Resumen del problema
Limak va a participar en un concurso de programación a las 8:00pm del último día del 2016. Los problemas están numerados del 1 a N. Limak sabe que tarda 5(i) minutos para resolver el i-ésimo problema. 

Los amigos de Limak organizarán una fiesta de Año Nuevo y Limak quiere llegar a esta antes de medianoche. Necesita k minutos para llegar a ella desde su casa, donde particpará en el concurso. ¿Cuántos problemas puede resolver Limak para poder llegar a la fiesta a tiempo?

## Input
Una sola línea con 2 números enteros N y K (1 <= N <= 10, 1 <= K <= 240) -- El número de problemas en el concurso, el tiempo necesario para ir de la casa de Limak a la fiesta

## Output
Imprime un número entero -- El mínimo número de problemas que Limak puede resolver antes de irse a la fiesta para llegar a tiempo

## Ejemplos
| Input       | Razonamiento  | Output    |
| ----------- | :------------ | --------- |
| 3 222       | 240 - 222 = 18m para problemas <br> Problema #1 --> 18 - (5 x 1) = 13m restantes (+1) <br> Problema #2 --> 13 - (5 x 2) = 3m restantes (+1) <br> Problema #3 --> 3 - (5 x 3) = 0m restantes <br> 2 problemas resueltos              | **2**      |
| 4 190       | 240 - 190 = 50m para problemas <br> Problema #1 --> 50 - (5 x 1) = 45m restantes (+1) <br> Problema #2 --> 45 - (5 x 2) = 35m restantes (+1) <br> Problema #3 --> 35 - (5 x 3) = 20m restantes (+1) <br> Problema #4 --> 20 - (5 x 4) = 0m restantes (+1) <br> 4 problemas resueltos              | **4**          |

## Forma de resolverlo
Para resolver este problema, debemos primero calcular cuánto tiempo tiene Limak para resolver problemas en el concurso. Sabiendo que empieza a las 8:00pm y tiene hasta medianoche para llegar a la fiesta, es fácil observar que tiene **4 horas (240 minutos)**. Considerando los K minutos que Limak necesita para ir de su casa a la fiesta, podemos calcular que Limak tiene **(240 - K)** minutos para participar en el concurso.

Definamos el tiempo restante como **R** = 240 - K. ¿Cuántos problemas puede resolver Limak? Cada uno toma **5(i)** minutos, donde **i** es el número del problema. Es decir, cada problema va tomando 5, 10, 15, 20, ..., 50 minutos. Para saber si Limak tiene tiempo para resolver un problema, vemos si al **restar 5(i) a R** el resultado es **mayor a 0**. Si lo es, entonces significa que a Limak le queda tiempo para seguir resolviendo más problemas, por lo que sumamos +1 al número de problemas resueltos. Simplemente **repetimos estos pasos hasta que R - 5(i) sea menor a 0**, dando a entender de que Limak ya no tiene tiempo suficiente para más problemas y debe irse a la fiesta.

## Algoritmo
1) Calcula R = 240 - K (Tiempo restante para el concurso)
2) Itera sobre los problemas
3) Por cada problema, revisa el valor de R - 5i (i-ésimo problema) \
a) Si R - 5i > 0, entonces realiza la resta, suma +1 a los problemas resueltos \
b) Si R - 5i < 0, entonces devuelve el número de problemas resueltos
