https://codeforces.com/problemset/problem/617/A

# 617A - Elephant

## Resumen del problema
Estás en la posición 0 de una línea-coordenada, y tu amigo está en la posición X. Puedes dar pasos de 1,2,3,4,5 posiciones para llegar a donde está tu amigo. ¿Cuál es el número mínimo de pasos que necesitas para hacer esto?

## Input
Un número entero N (! <= X <= 1000000) - La posición de tu amigo

## Output
Imprime la palabra normalizada

## Ejemplos
| Input | Razonamiento                                   | Output |
| :---- | :--------------------------------------------  | -----  |
| 5     | 0 -> 5 = 1 paso                                | **1**  |
| 12    | 0 -> 5 -> 10 -> 12 = 3 pasos                   | **3**  |
| 26    | 0 -> 5 -> 10 -> 15 -> 20 -> 25 -> 26 = 6 pasos | **6**  |

## Forma de resolverlo
Si bien podemos pensar en varias combinaciones de pasos que podemos dar para llegar a la posición indicada, pensemos lo siguiente: ¿Si queremos dar el menor número de pasos posibles, entonces por qué daríamos pasos que no sean de 5 posiciones? Literal, es la longitud más larga que podemos recorrer con un paso, por lo que podemos dar pasos de 5 en 5 hasta llegar a nuestro destino. \

A lo mejor te estás preguntando, si tomamos el ejemplo de 12 posiciones y vamos de 5 en 5, llegaremos al punto en el que estemos en la posición 10. Aquí nos faltarían solo 2 posiciones para llegar, por lo que dar otro paso de 5 sería incorrecto porque nos pasaríamos. Sin embargo, recordemos que podemos dar pasos entre 1-5 posiciones. Al ir de 5 en 5, está garantizado que el último paso a dar va a ser sobre 0-4 posiciones (propiedades de los módulos), así que a nuestro conteo de pasos sólo agregamos uno más para representarlo.

## Algoritmo
### a) Iterativa
Como viste en los ejemplos, una manera de representar los pasos es llevando el registro de la posicion que alcanzamos con cada paso, sumando uno con cada paso que damos, y una vez que lleguemos o nos pasemos de la posición indicada, entonces terminamos de contar.
1) Con un ciclo, suma 1 paso de 5 posiciones mientras estés en una posición menor a la indicada.
2) Cuando excedes la posición indicada, dejas de sumar pasos
3) Imprime el número de pasos contados

### b) Matemática
Si divides la posición entre 5, entonces te dará un número decimal. \
12 / 5 = 2.4 \
26 / 5 = 5.2 \
De esta división sabemos cuántos pasos de 5 posiciones estamos dando: La parte **entera** del resultado. La parte decimal representa ese último paso de entre 0-4 posiciones que comentamos anteriormente, así que lo que podemos hacer es redondear hacia arriba el resultado de la división y así nos ahorramos el rastreo de las posiciones. Afortunadamente, la mayoría de lenguajes de programación tienen una función para redondear hacia arriba llamada **ceil()**, así que podemos usarla para redondear la división.
1) Pasos = ceil(Posición / 5)