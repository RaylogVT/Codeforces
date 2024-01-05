https://codeforces.com/problemset/problem/1154/A

# 1154A - Restoring Three Numbers

## Resumen del problema
Tienes 3 números enteros a,b,c y 4 números que representan las sumas a+b, a+c, b+c, a+b+c.
Dadas las 4 sumas, encuentra los 3 números enteros que las generan.

## Input
Una sola línea que contiene 4 números enteros X1, X2, X3, X4 (2 <= X1,X2,X3,X4 <= 10^9) - Las sumas generadas

## Output
Imprime los 3 números enteros a,b,c (en cualquier orden) que generan las 4 sumas. Puede haber más de una respuesta.

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 3 6 5 4 | 1 + 2 = 3 <br> 1 + 3 = 4 <br> 2 + 3 = 5 <br> 1 + 2 + 3 = 6 | 1 2 3 |
| 201 101 101 200 | 1 + 100 = 101 <br> 1 + 100 = 101 <br> 100 + 100 = 200 <br> 1 + 100 + 100 = 201 | 1 100 100 |

## Forma de resolverlo
Para resolver este problema, podemos generar una serie de ecuaciones que permita calcular a,b,c a partir de x1,x2,x3,x4. Define lo siguiente: \
a + b = x1 \
a + c = x2 \
b + c = x3 \
a + b + c = x4 \

Si reempleazas x1,x2,x3 en x4 y despejas la variable restante, entonces obtenemos lo siguiente:
(a + b) + c = x4 \
x1 + c = x4 \
**c = x4 - x1**

b + (a + c) = x4 \
b + x2 = x4 \
**b = x4 - x2** 

a + (b + c) = x4 \
a + x3 = x4 \
**a = x4 - x3** 

Con estas 3 ecuaciones, puedes calcular a,b,c a partir de x1,x2,x3,x4. Sin embargo, **¿cómo asignamos los números?** \
Fácil, **x4** tiene que ser el **número más grande**, mientras que **x1,x2,x3** pueden ser los otros tres números de **manera indistinta.** Esto es porque **a + b + c > a + b, b + c, a + c (a,b,c > 0)**

Supón que a = b = c: \
a + b = x1 \
a + c = x2 \
b + c = x3 \
a + b + c = x4 \

a + a = x1 = 2a \
a + a = x2 = 2a \
a + a = x3 = 2a \
a + a + a = x4 = 3a \

**3a (x4) > 2a (x1,x2,x3)**
Por lo tanto, x4 tiene que ser el número más grande de nuestro cuarteto de números

## Algoritmo
1) Ordena los números de menor a mayor (x1, x2, x3, x4)
2) Calcula a = x4 - x1
3) Calcula b = x4 - x2
4) Calcula c = x4 - x3
5) Imprime a,b,c