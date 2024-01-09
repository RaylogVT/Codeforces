https://codeforces.com/problemset/problem/467/A

# 467A - George And Accommodation

## Resumen del problema
George y Alex están buscando residencia para la universidad. Encuentran varios dormitorios con distinta capaidad y cantidad de personas actualmente viviendo en ellos. ¿En cuántos dormitorios pueden los dos mudarse?

## Input
La 1° línea contiene un número entero N (1 <= N <= 100) -- El número de dormitorios a revisar \
Las siguientes N líneas contienen 2 números enteros P y Q (1 <= P <= Q <= 100) -- El número de personas que viven en el n-ésimo dormitorio, la capacidad del dormitorio

## Output
Imprime un número entero -- El número de dormitorios en los que George y Alex pueden mudarse

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 3 <br> 1 1 <br> 2 2 <br> 3 3 | 3 > 1 = No caben <br> 4 2 = No caben <br> 5 > 3 = No caben <br> **0** dormitorios disponibles | **0** |
| 3 <br> 1 3 <br> 2 2 <br> 3 9 | 3 <= 3 = Sí caben **(+1)** <br> 4 2 = No caben <br> 5 < 9 = Sí caben **(+1)** <br> **2** dormitorios disponibles | **2** |

## Forma de resolverlo
Para resolver este problema, debemos modelar cuántas personas vivirán en el dormitorio si incluyéramos a George y Alex. \
Como ellos son dos, entonces tenemos que sumar **+2** al número de personas que actualmente viven en él. \
Si al hacerlo nos excedemos de la capacidad del dormitorio, entonces George y Alex **no se pueden mudar a este.** \
Por otro lado, si no nos excedemos o alcanzamos la capacidad del dormitorio, entonces **sí se pueden mudar a este.** \
Guarda en un contador el número de dormitorios en los cuales la anterior condición se cumple y al final devuelve valor resultante.

## Algoritmo
1) Inicia un contador de dormitorios disponibles en 0
2) Itera sobre cada dormitorio \
a) Si el número de personas que viven el dormitorio (P) + 2 es menor o igual a la capacidad del dormitorio (Q), entonces suma +1 al contador de dormitorios disponibles
4) Devuelve el número de dormitorios disponibles
