https://codeforces.com/problemset/problem/492/A

# 492A - Vanya and Cubes

## Resumen del problema
Vanya decide construir una pirámide. Por cada nivel de la pirámide, se necesitan 1 + 2 + ... + (i-1) + i cubos. \
Para el Nivel 1, se necesitaría 1 cubo. \
Para el Nivel 2, se necesitaría 1 + 2 = 3 cubos. \
Para el Nivel 3, se necesitaría 1 + 2 + 3 = 6 cubos. \
Dados N cubos, ¿cuál es la altura máxima que puede tener la pirámide?

## Input
La única línea contiene un número entero N (1 <= N <= 10000) -- El número de cubos que tiene Vanya

## Output
Imprime un número entero -- La altura máxima de la pirámide

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 1                 | 1 = 1 nivel                     | **1** |
| 12                | 1 + 3 + 6 = 10 = 3 niveles      | **3** |
| 25                | 1 + 3 + 6 + 10 = 20 = 4 niveles | **4** |

## Forma de resolverlo
Para resolver este problema, primero necesitamos desarrollar una fórmula para saber cuántos cubos se necesitan por nivel. \
Si desarrollamos la sucesión de cubos **(1,3,6,10,15,21,28)**, podemos intuir que dicha fórmula es **N(N+1)/2**. \
Teniendo la fórmula, podemos ir construyendo la pirámide añadiendo **nivel por nivel y restando la cantidad de cubos** correspondientes. Una vez que nos acabemos los cubos (es decir, que la cantidad sea menor a 0), entonces devolvemos el **nivel anterior** para indicar que esa es la altura máxima que puede tener la pirámide

## Algoritmo
1) Inicia la pirámide con un Nivel = 0
3) Suma (Nivel + 1)
4) Resta la cantidad de cubos utilizada en el nivel actual
- Cubos = Cubos - ((Nivel * (Nive1 + 1)) / 2)
5) Repite los pasos 3-4 mientras Cubos >= 0
6) Devuelve (Nivel - 1)
