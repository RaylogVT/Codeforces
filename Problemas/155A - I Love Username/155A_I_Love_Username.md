https://codeforces.com/problemset/problem/155/A

# 155A - I Love Username

## Resumen del problema
Vasya está monitoreando las puntuaciones de su programador favorito en concursos de programación. Él considera que un concurso fue asombroso si la puntuación del programador fue mayor o menor con respecto a sus puntuaciones anteriores. Dada la lista de puntuaciones por concurso, ¿cuántos concursos fueron asombrosos? (Nota: El 1° concurso nunca es considerado asombroso)

## Input
La 1° línea contiene un número entero N (1 <= N <= 1000) - El número de concursos \
La 2° línea contiene N números enteros An (1 <= Ai <= 10000) - La puntuación del i-ésimo concurso 

## Output
Imprime el número de concursos asombrosos

## Ejemplos
| Input                                     | Razonamiento   | Output    |
| ------                                    | :------------  | --------- |
| 5 <br> 100 50 200 150 200                 | MAX = 100, MIN = 100 --> NO <br> 50 < (MIN = 100) --> YES <br> 200 > (MAX = 100) --> YES <br> 150 < (MAX = 200), 150 > (MIN = 50) --> NO <br> 200 <= (MAX = 200), 200 > (MIN = 50) --> NO               | **2**     |
| 10 <br> 4664 6496 5814 7010 5762 5736 6944 4850 3698 7242        | MAX = 4664, MIN = 4664 --> NO <br> 6496 > (MAX = 4664) --> YES <br> 5814 < (MAX = 6496), 5814 > (MIN = 4664) --> NO <br> 7010 > (MAX = 6496) --> YES <br> 5762 < (MAX = 7010), 5762 > (MIN = 4664) --> NO <br> 5736 < (MAX = 7010), 5736 > (MIN = 4664) --> NO <br> 6944 < (MAX = 7010), 6944 > (MIN = 4664) --> NO <br> 4850 < (MAX = 7010), 4850 > (MIN = 4664) --> NO <br> 3698 < (MIN = 4664) --> YES <br> 7242 > (MAX = 7010) --> YES | **4**     |

## Forma de resolverlo
Para resolver este problema, debemos llevar un registro de la puntuación máxima y mínima del programador con cada concurso en el que participa. Para ello, podemos utilizar **programación dinámica** para conservar dichas puntuaciones, y actualizarlas cada que encontremos una **punutación más grande o chica que la máxima o mínima, respectivamente**. Cada que esto suceda, **sumamos +1** a la cantidad de concursos asombrosos del programador. 

Dado que la **1° puntuación jamás dará un concurso asombroso, entonces podemos usarla como la puntuación máxima y mínima**, y de ahí seguir los pasos anteriores para hacer el monitoreo de los concursos asombrosos.

## Algoritmo
1) Inserta las puntuaciones en una lista
2) Define la puntuación máxima y mínima como la del 1° concurso
3) Itera sobre las puntuaciones \
a) Si la puntuación actual es mayor a la puntuación máxima, entonces acutaliza la puntuación máxima y suma +1 a los concursos asombrosos \
b) Si la puntuación actual es menor a la puntuación mínima, entonces acutaliza la puntuación mínima y suma +1 a los concursos asombrosos 
4) Devuelve la cantidad de concursos asombrosos
