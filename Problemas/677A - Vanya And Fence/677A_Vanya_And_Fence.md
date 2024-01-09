https://codeforces.com/problemset/problem/677/A

# 677A - Vanya And Fence

## Resumen del problema
Tienes N amigos que quieren atravesar una valla sin ser vistos. Para ello deciden hacer una fila, en la que cada uno ocupa un ancho de 1 unidad. Sin embargo, algunos de tus amigos son más altos que la valla, así que tienen que agacharse para no ser vistos, lo cual implica que ocuparán un ancho de 2 unidades. \
Dada la altura de la valla y de cada uno de tus amigos, determina el ancho de la fila.

## Input
La 1° línea contiene dos números enteros N y H (1 <= N <= 1000, 1 <= H <= 1000) -- La cantidad de amigos, la altura de la valla \
La 2° línea contiene N números enteros Ai (1 <= Ai <= 2H) -- La altura de cada uno de los amigos

## Output
Imprime un número entero - El ancho de la fila resultante

## Ejemplos
| Input                 | Razonamiento  | Output    |
| ------------------    | :------------ | --------- |
| 3 7 <br> 4 5 14       | 4 <= 7 = +1 <br> 5 <= 7 = +1 <br> 14 > 7 = +2 <br> Ancho = 4 | **4**   |
| 6 5 <br> 7 6 8 9 10 5 | 7 > 5 = +2 <br> 6 > 5 = +2 <br> 8 > 5 = +2 <br> 9 > 5 = +2 <br> 10 > 5 = +2 <br> 5 <= 5 = +1 <br> Ancho = 11  | **11**    |

## Forma de resolverlo
Para resolver este problema, simplemente debemos comparar la altura de cada amigo con el de valla para saber si sumar 1 o 2 al ancho de la fila y devolver el ancho final.

## Algoritmo
### a) Directo
1) Itera sobre la altura de cada amigo
2) Compara la altura de cada amigo con el de la valla \
a) Si el amigo mide más que la valla, entonces suma +2 \
b) Si el amigo mide más que la valla, entonces suma +1
4) Devuelve el ancho final de la fila

### b) Matemático
Con este método podemos visualizar mejor si el amigo tendrá que agacharse para atravesar la valla, puesto que el resultado describe el ancho que el amigo dará a la fila
1) Itera sobre la altura de cada amigo
2) Compara la altura de cada amigo con el de la valla
3) Divide (Altura del amigo / Altura de la valla) \
a) Si el resultado de la división es mayor a 1, entonces el amigo necesita agacharse, así que suma +2 \
b) Si el resultado de la división es menor o igual a 1, entonces el amigo no necesita agacharse, así que suma +1
4) Imprime el ancho final de la fila 
