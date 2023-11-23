https://codeforces.com/problemset/problem/1352/A

# 1352A - Sum of Round Numbers

## Resumen del problema
Un número es redondo si tiene la forma d00...00 (todos los dígitos excepto el primero son ceros), exceptuando los números de 1 al 9, que sí se consideran redondos. \
Ej. 400, 80, 9000, 5 son números redondos 

Dado un número N, represéntalo como la suma de varios números redondos (utilizando la menor cantidad posible). 

## Input
La 1° línea contiene un número enteno T (1 <= T <= 10000) - La cantidad de números a representar
Las siguientes T líneas contienen un número entero N (1 <= N <= 10000) - El número actual a representar con números redondos

## Output
Por cada número N: 
1) Imprime la cantidad de números redondos que necesitas para representar el número
2) Imprime los números redondos que suman N (con espacios entre sí, sin importar el orden)


## Ejemplos
| Input       | Razonamiento  | Output    |
| ----------- | :------------ | --------- |
| 4 <br> 5009 <br> 7 <br> 9876 <br> 10000  | <br> 5009 = 5000 + 9 --> 2 números <br> 7 = 7 --> 1 número <br> 9876 = 9000 + 800 + 70 + 6 --> 4 números <br> 10000 = 10000 --> 1 número | **2** <br> **5000 9** <br> **1** <br> **7** <br> **4** <br> **900 800 70 6** <br> **1** <br> **10000** |

## Forma de resolverlo
Para resolver este problema, primero determinemos cuántos números redondos tiene el número. Dado que los dígitos del 1-9 son redondos, y viendo los ejemplos, podemos notar que cualquier número se puede representar con la misma cantidad de números redondos que el **número de dígitos que sean distinto de 0**. A nivel programación, esto se puede encontrar sacando **módulo (%) 10** al número y **sumando +1 por cada resultado que sea distinto de 0**. Luego **dividimos entre 10** para pasar al siguiente dígito al evaluar. Repetimos estos pasos hasta iterar sobre todos los dígitos.

Con la cantidad de números redondos encontrada, ahora toca saber cuál es cada uno. Para ello podemos usar una aproximación similar a lo anterior. Primero definimos una **posición decimal igual a 1**, esto con el fin de representar que estamos en el dígito de las **unidades**. Esta posición se actualizará multiplicando x 10 en cada dígito para representar decenas, centenas, miles, etc... Volvemos a realizar **módulo (%) 10** y detectar si es distinto de 0. Si lo es, entonces realizamos **(Número % 10) * Posición Decimal** para extraer el número redondo que está en la posición decimal actual. Luego **dividimos entre 10** y **multiplicamos por 10** la posición decimal para pasar al siguiente dígito y número redondo a buscar.

Ambas tareas están garantizadas que terminen siempre y cuando al **dividir el número entre 10 de 0**. Cuando se divida el último dígito (Ej. 9876 --> 9) entre 10, entonces el lenguaje de programación lo tomará como número entero y devolverá 0, dando nuestra condición para detener el ciclo de dividir, modular y multiplicar.

## Algoritmo
1) Define elun contador de números redondos (CNR) en 0 y la Posición Decimal (PD) en 1
2) Calcula número (N) % 10 \
a) Si N % 10 != 0, entonces suma +1 al CNR \
b) Si N % 10 == 0, entonces no se realiza alguna acción 
3) Divide el número entre 10
4) Repite los Pasos 2-3 hasta que N / 10 = 0
5) Calcula número (N) % 10 \
a) Si N % 10 != 0, entonces calcula (N % 10) * PD e imprime el número redondo resultante \
b) Si N % 10 == 0, entonces no se realiza alguna acción 
6) Divide el número entre 10
7) Multiplica la PD por 10
8) Repite los Pasos 5-7 hasta que N / 10 = 0
