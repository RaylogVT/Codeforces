https://codeforces.com/problemset/problem/749/A

# 749A - Bachgold Problem

## Resumen del problema
Dado un número N, represéntalo con el mayor número de números primos posibles.

## Input
La única línea contiene un número entero N (2 <= N <= 100000) -- El número a descomponer

## Output
En la 1° línea, imprime un número entero K -- La máxima cantidad de números primos que permiten representar N.
En la 2° línea, imprime K números enteros -- Los números primos que conforman N

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 5                 | 5 = 2 + 3 <br> 2 números primos              | **2** <br> **2 3**          |
| 6                 | 6 = 2 + 2 + 2 <br> 3 números primos              | **3** <br> **2 2 2**        |
| 9                 | 9 = 3 + 2 + 2 + 2 <br> 4 números primos              | **4** <br> **3 2 2 2**      |

## Forma de resolverlo
Para resolver este problema, primero debemos considerar qué números primos permiten satisfacer el problema. \
Puesto que queremos usar el mayor número de primos posibles, es natural pensar en usar el número primo más pequeño posible para que maximizar la descomposición. \
¿Cuál es el número primo más pequeño? ¡El **2**! Por lo tanto, el 2 será nuestra base para descomponer N. Ahora bien, sumar de 2 en 2 solo nos permite obtener números **pares**, ¿qué sucede con los números **impares**? 
Recordando que **Impar = Impar + Par**, simplemente podemos **cambiar un 2 por un número primo impar** para cubrir los números impares. ¿Cuál es el número primo impar más pequeño? ¡El **3**!
En conclusión, si **N es par**, entonces **N = 2 + 2 + ... + 2**; si **N es impar**, entonces **N = 3 + 2 + 2 + ... + 2**.
Sabiendo cómo descomponer N, ¿cuántos números primos estamos utilizando? Puesto que estamos utilizando el 2 como base, es fácil concluir que la cantidad de números primos a utilizar es igual a **N/2** (redondeando hacia abajo).

## Algoritmo
1) Calcula N/2
2) Revisa el valor de N \
a) Si N es par, entonces imprime 2 N/2 veces (2 2 2 ... 2) \
b) Si N es impar, entonces imprime 3 una vez y 2 (N/2 - 1) veces (3 2 2 ... 2 2)