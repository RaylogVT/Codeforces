https://codeforces.com/problemset/problem/758/A

# 758A - Holiday Of Equality 

## Resumen del problema
En el Día de la Igualdad de Berland, el rey decide igualar el patrimonio de todos los ciudadanos. El reino tiene N ciudadanos, donde cada uno tiene A rublos. Dado que el rey no puede quitar rublos a los ciudadanos, ¿cuánto es el mínimo de rublos que debe entregar para que el patrimonio de todos los ciudadanos sea el mismo?

## Input
La 1° línea contiene un número entero N (1 <= N <= 100) -- El número de ciudadanos en Berland \
La 2° línea contiene N número enteros Ai (1 <= Ai <= 1000000) -- La cantidad de rublos que tiene cada ciudadano

## Output
Imprime un número entero S -- La cantidad de rublos total a entregar a los ciudadanos

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 5 <br> 0 1 2 3 4  | 0 1 2 3 4 <br> 4 3 2 1 0 <br> 4 4 4 4 4 <br> 4 + 3 + 2 + 1 + 0 = 10   | **10** |
| 5 <br> 1 1 0 1 1  | 1 1 0 1 1 <br> 0 0 1 0 0 <br> 1 1 1 1 1 <br> 0 + 0 + 1 + 0 + 0 = 1    | **1**  |
| 3 <br> 1 3 1      | 1 3 1 <br> 2 0 2 <br> 3 3 3 <br> 2 + 0 + 2 = 4                        | **4**  |

## Forma de resolverlo
Para resolver este problema, primero tenemos que saber la cantidad de dinero que cada ciudadano deberá tener al final de la entrega de rublos. El problema dice que **no podemos quitar dinero a un ciudadano**, eso significa que sólo podemos **darle o no darle dinero a un ciudadano** (es decir, un ciudadano puede no recibir nada de dinero y quedarse con su misma cantidad).

Puesto que queremos entregar la menor cantidad de rublos posibles dadas las restricciones, lo mejor será saber quién es **el ciudadano con la mayor cantidad de rublos**, puesto que este será el punto de referencia sobre **cuántos rublos deberá tener cada ciudadano al final**. Con este valor, simplemente calculamos cuántos rublos le faltan a cada ciudadano para alcanzar esa cantidad y lo vamos sumando a un contador.

## Algoritmo
1) Calcula el máximo de rublos que tiene un ciudadano
2) Establece un contador de rublos a entregar
3) Itera sobre cada ciudadano
4) Calcula la cantidad de rublos a entregar \
Rublos a entregar = Rublos a entregar + (Ciudadano más rico - Rublos del i-ésimo ciudadano)
5) Imprime la cantidad de rublos a entregar
