https://codeforces.com/problemset/problem/705/A

# 705A - Hulk

## Resumen del problema
Hulk necesita ayuda para expresarse. Teniendo N capas, las impares son de odio y las pares son de amor. \
Dado el número de capas, construye la frase que Hulk desea expresa.

## Input
La única línea contiene un número entero N (1 <= N <= 100) -- El número de capas 

## Output
Imprime la expresión de Hulk

## Ejemplos
| Input | Razonamiento  | Output    |
| ----- | :------------ | --------- |
| 1     | 1 = I hate it     | **I hate it** |
| 2     | 2 = I love it     | **I hate that I love it** |
| 3     | 3 = I hate it     | **I hate that I love that I hate it** |
| 4     | 4 = I love it     | **I hate that I love that I hate that I love it** |

## Forma de resolverlo
Para este problema simplemente debemos ir capa por capa e imprimir la frase (**'I hate'** o **'I love'**) correspondiente dependiendo de si la capa es par o impar. Las capas las conectamos con la palabra **'that'**, y al final escribimos **'it'**.

## Algoritmo
1) Itera sobre cada capa
2) Revisa la capa
a) Si la capa es impar, entonces imprime 'I hate'
b) Si la capa es par, entonces imprime 'I love'
3) Por cada capa revisada, imprime 'that'
4) Repite los pasos 2-3 hasta revisar todas las capas
5) En la última capa, imprime 'it'