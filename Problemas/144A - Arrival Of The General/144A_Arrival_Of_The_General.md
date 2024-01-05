https://codeforces.com/problemset/problem/144/A

# 144A - Arrival Of The General

## Resumen del problema
Tienes una fila de soldados. Puedes intercambiar de lugar a dos soldados adyacentes en un segundo. Deseas ordenarlos de tal forma que el primero en la fila sea el más alto y el último el más bajo (no importa de qué manera están ordenados los de en medio).

¿Cuántos segundos necesitas para ello?

## Input
La 1° linea contiene un número N (2 <= N <= 100) -- El número de soldados en fila \
La 2° línea contiene N números enteros A1, ..., An (1 <= Ai <= 100) -- Las alturas de los soldados

## Output
Imprime un número entero -- El mínimo número de segundos necesario para ordenar a los soldados

## Ejemplos
| Input                       | Razonamiento  | Output    |
| -----------------           | :------------ | --------- |
| 4 <br> 33 44 11 22          | 33 44 11 22 <br> 44 33 11 22 = 1 <br> 44 33 22 11 = 2    | **2**          |
| 7 <br> 10 10 58 31 63 40 76 | 10 10 58 31 63 40 76 <br> 10 10 58 31 63 76 40 = 1 <br> 10 10 58 31 76 63 40 = 2 <br> 10 10 58 76 31 63 40 = 3 <br> 10 10 76 58 31 63 40 = 4 <br> 10 76 10 58 31 63 40 = 5 <br> 76 10 10 58 31 63 40 = 6 <br> 76 10 58 10 31 63 40 = 7 <br> 76 10 58 31 10 63 40 = 8 <br> 76 10 58 31 63 10 40 = 9 <br> 76 10 58 31 63 40 10 = 10 | **10**          |

## Forma de resolverlo
Para resolver este problema, primero debemos determinar **qué soldados** son los que vamos a mover a los extremos de la fila. Para ello, determinamos la **altura máxima y mínima** de los soldados. Luego, para determinar qué soldado con la **altura máxima** mover, revisamos la fila de **derecha a izquierda**, y vemos cuál soldado está **más a la izquierda**. Hacemos lo mismo con el soldado de **altura mínima**, revisamos la **fila de izquierda a derecha**, y vemos cuál soldado está **más a la derecha**. 

Para mover al soldado más alto al extremo izquierdo, necesitamos **A** movimientos, donde A representa la **posición del soldado más alto y a la izquierda de la fila**. Para mover al soldado más bajo al extremo derecho, necesitamos **B** movimientos, donde B representa la **posición del soldado más bajo y a la derecha de la fila**. Sumar A y B dará el total de segundos necesarios para mover a los soldados. 

Antes del cálculo final, debemos considerar una última situación: **¿Qué sucede cuándo el soldado más alto y bajo intercambian lugares entre sí durante sus movimientos?** Cuando esto pasa, **uno de los dos se está ahorrando un movimiento** para llegar a su posición. Sin embargo, ¿cuándo esto sucede? La respuesta está en si el soldado más alto y a la izquierda de la fila está **a la derecha** del soldado más bajo y a la derecha de la fila. En ese caso, debemos **restar -1** a nuestro total de segundos.

## Algoritmo
1) Saca la altura máxima y mínima de los soldados
2) Define la posición del soldado más alto a aquél en el extremo derecho
3) Define la posición del soldado más bajo a aquél en el extremo izquierdo
4) Itera la fila de soldados de derecha a izquierda
5) Si hay un soldado más alto a la izquierda, entonces actualiza la posición del soldado más alto (A)
6) Itera la fila de soldados de izquierda a derecha
7) Si hay un soldado más bajo a la derecha, entonces actualiza la posición del soldado más bajo (B)
8) Revisa si el soldado más alto y a la izquierda de la fila está a la derecha del soldado más bajo y a la derecha de la fila. \
a) Si lo está, entonces resta -1 al total de segundos \
b) Si no lo está, entonces no se resta -1 al total de segundos
9) Calcula A + ((N-1) - B) - (0/1) para determinar el número de segundos necesarios para mover a los soldados \
9.1) N-1 es el tamaño de la fila \
9.2) (0/1) es el valor a restar en función del Paso 8


