https://codeforces.com/problemset/problem/268/A

# 268A - Games

## Resumen del problema
Manao ha notado que cuando dos equipos de fútbol juegan entre sí, un equipo se pone su uniforme de local y el otro de visitante. Sin embargo, cuando el color de los dos es el mismo, entonces el equipo local se pone su uniforme de visitante para diferenciarse. \
El campeonato consta de N(N-1) juegos, cada equipo invita a los demás a jugar a su estadio de visitante. Sabiendo los colores del uniforme local y visitante de cada equipo, ¿en cuántas juegos el equipo local tendrá que ponerse su uniforme de visitante?

## Input
La 1° línea contiene un número entero N (2 <= N <= 30) - El número de equipos \
Las siguientes N líneas contienen dos números enteros A y B (1 <= A,B <= 100) - El índice del color del uniforme de local (A) y visitante (B) de cada equipo, respectivamente. Está garantizado que A y B tienen valores distintos.

## Output
Imprime el número de juegos en los que el equipo local tendrá que ponerse su uniforme de visitante.

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 3 <br> 1 2 <br> 2 4 <br> 3 4 | (1,4), (1,4), **(2,2)**, (2,4), (3,2), (3,4) | **1**          |
| 4 <br> 100 42 <br> 42 100 <br> 5 42 <br> 100 5 | **(100,100)**, (100,42), (100,5), **(42,42)**, **(42,42)**, (42,5), (5,42), (5,100), **(5,5)**, (100,42), **(100,100)**, (100,42) | **5**          |

## Forma de resolverlo
Para resolver este problema, debemos **simular todos los partidos e identificar en cuáles los colores del uniforme de ambos equipos son iguales**. Para ello podemos agrupar los colores del uniforme local y visitante de los equipos en **dos listas/arreglos**, y compararlos entre sí para detectar las equivalencias. 

Usando el 1° ejemplo: (1,2), (2,4), (3,4), los arreglos quedarán tal que **(1,2,3)** y **(2,4,4)**. De aquí, probamos todas las combinaciones de pares: (1,2), (1,4), (1,4), **(2,2)**, (2,4), (2,4), (3,2), (3,4), (3,4). 

Esta aproximación asume que un equipo jugará contra sí mismo. Afortunadamente, como está garantizado que todos los equipos tienen uniformes con colores de local y visitante distintos, entonces estas permutaciones jamás formarán parte de nuestro resultado.

## Algoritmo
1) Agrupa los equipos de local y visitante en dos listas/arreglos
2) Compara todos los colores de local contra todos los colores de visitante
3) Si un color de local es igual a uno que de visitante, entonces suma +1 al número de partidos con colores iguales
4) Devuelve el número de partidos en los que dos equipos jugarían con uniformes de color iguales
