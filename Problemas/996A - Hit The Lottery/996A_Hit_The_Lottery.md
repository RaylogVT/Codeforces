https://codeforces.com/problemset/problem/996/A

# 996A - Hit The Lottery

## Resumen del problema
Tienes N cantidad de dinero en el banco. Puedes sacarlas en billetes de 1,5,10,20,100 dólares. ¿Cuál es el menor número de billetes que necesitas para sacar tu dinero?

## Input
Una sola línea con un número entero N (1 <= N <= 10^9) - La cantidad de dinero en el banco

## Output
Imprime el mínimo número de billetes que necesitas para sacar el dinero del banco

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 125               | 125 <br> **1** x $100 <br> **1** x $20 <br> **1** x $5 <br> R = 3 | **3**          |
| 43                | 43 <br> **2** x $20 <br> **3** x $1 <br> R = 5 | **5**          |
| 1728               | 1728 <br> **17** x $100 <br> **1** x $20 <br> **1** x $5 <br> **3** x $1 <br> R = 22 | **22**          |

## Forma de resolverlo
Para resolver este problema, debemos ir sacando el dinero poco a poco para contar los billetes que necesitamos de cada denominación. Puesto que queremos la menor cantidad de billetes, empezamos sacando con las denominaciones más grandes (es decir, $100, $20, $10, $5, $1, en ese orden). Calcula cuántos billetes de $100 puedes sacar, luego calcula cuánto dinero estás sacando con estos y réstalo a la cantidad de dinero del banco. Repite los mismos pasos con los billetes de $20, $10, $5 y $1 hasta que la cantidad de dinero en el banco se igual a 0.

## Algoritmo
1) Guarda las denominaciones en una lista/arreglo de mayor a menor
2) Itera sobre las denominaciones
3) Calcula el número de billetes que puedes tener con la denominación actual
4) Calcula la cantidad de dinero que puedes sacar con ese número de billetes
5) Calcula el dinero restante en el banco después de sacar los billetes con la denominación actual
6) Repite los pasos 2-5 hasta que el dinero en el banco sea igual a 0
