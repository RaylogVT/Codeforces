https://codeforces.com/problemset/problem/977/A

# 977A - Wrong Substraction

## Resumen del problema
Tengo un número. Al revisar su último dígito, si este es distinto a 0, entonces le restamos 1. En cambio, si el último dígito es igual a 0, entonces lo dividimos entre 10. Después de K restas, ¿cuál es el número resultante?

## Input
Una línea con 2 números enteros N, K (2 <= N <= 1000000000, 1 <= K <= 50) - El número a restar, el número de restas a realizar

## Output
Imprime el número resultante tras realizar las restas

## Ejemplos
| Input   | Razonamiento                                   | Output |
| :----   | :--------------------------------------------  | -----  |
| 512 4  | 51**2** = -1 (1°) <br> 51**1** = -1 (2°) <br> 51**0** = /10 (3°) <br> 5**1** = -1 (4°) <br> 50 | **50**  |
| 1000 3  | 100**0** = /10 (1°) <br> 10**0** = /10 (2°) <br> 1**0** = /10 (3°) <br> 1 | **1**  |

## Forma de resolverlo
Para este problema simplemente checamos en cada resta el último dígito del número. Si este es distinto de 0, entonces restamos -1; si es igual a 0, entonces dividimos entre 10. Sin embargo, **¿cómo sacamos el último dígito de un número?** \
Una manera tradicional de sacar los dígitos de un número es con el uso de **módulos (%)**. **Cuando divides un número entre 10, el residuo es su último dígito** (Ej. 512 / 10 = 51 R 2), así que podemos hacer **módulo 10** para sacarlo.

## Algoritmo
1) Checa el último dígito (d) del número \
Si d != 0, entonces resta -1 \
Si d == 0, entonces divide entre 10
3) Repite el Paso #1 *K* veces (el número de restas a realizar)
4) Imprime el número resultante
