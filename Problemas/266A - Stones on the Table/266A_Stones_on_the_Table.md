https://codeforces.com/problemset/problem/266/A

# 266A - Stones on the Table

## Resumen del problema
Tienes una fila de piedras de color rojo (R), azul (B) o verde (G). Quieres añadir más piedras a la fila para que no haya dos piedras adyacentes entre que sean del mismo color. ¿Cuántas piedras debe añadir para cumplir dicha condición?

## Input
La 1° línea es un número N (1 <= N <= 100) -- El número de piedras en la pila \
La 2° línea es un string con las letras R, G, B -- La fila de piedras con el color respectivo de cada una

## Output
Imprime un número entero -- El número que nuevas piedras que necesitas para que dos piedras adyacentes no sean del mismo color

## Ejemplos
| Input     | Razonamiento                                                                              | Output    |
| :-------- | :---------------------------------------------------------------------------------------- | --------- |
| RRBBGRB   | RR = Sí = +1 <br> RB = No <br> BB = Sí = +1 <br> BG = No <br> GR = No <br> RB = No <br> 2 | **2**         |
| RRRRR     | RR = Sí = +1 <br> RR = Sí = +1 <br> RR = Sí = +1 <br> RR = Sí = +1 <br> 4                 | **4**         |
| GBBR      | GB = No <br> BB = Sí = +1 <br> BR = No <br> 1                                             | **1**         |

## Forma de resolverlo
Para este problema, necesitamos comparar **pares de piedras adyacentes y ver si son iguales**. Si ese es el caso, entonces debemos **agregar una piedra entre ellas** para que ahora las piedras adyacentes ya no sean del mismo color. Por ejemplo, si tienes dos piedras rojas (RR), entonces basta con meter una piedra azul o verde (el color es indistinto) para que ya no hay dos piedras del mismo color de manera consecutiva (RBR).

Como debemos revisar piedras adyacentes, entonces debemos evaluar cada par de piedras de la fila y checar si son iguales o no.\
Mediante las localidades del string que representa las piedras, podemos checar la piedra actual sobre la cual nuestro índice/buscador se encuentra actualmente y compararla contra su predecesora o antecesora. Básicamente, dada una piedra de la fila, vas a comparar si la piedra antes o después de esta es igual o no (dependiendo de cómo lo implementes).

## Algoritmo
1) Recorre la fila de piedras
2) Compara la piedra actual contra la anterior o posterior a ella (a elección) \
a) Si las piedras son del mismo color, entonces suma 1 a un contador de nuevas piedras a añadir
3) Imprime el número de nuevas piedras que debes añadir para cumplir con la condición
