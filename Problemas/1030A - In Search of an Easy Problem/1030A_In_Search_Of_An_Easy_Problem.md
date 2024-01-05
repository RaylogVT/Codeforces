https://codeforces.com/problemset/problem/1030/A

# 1030A - In Search of an Easy Problem

## Resumen del problema
Estás evaluando si un problema es fácil o difícil, y para ello le preguntas a un grupo de personas su opinión. \
Si al menos una de las personas considera que el problema es difícil, entonces el problema se descarta. \
Dada las opiniones de la gente, determina si el problema es fácil o difícil.

## Input
La 1° línea contiene un número entero N (1 <= N <= 100) -- El número de personas encuestadas \
La 2° línea contiene N números enteros - La respuesta de cada persona \
Si el número es igual a 0, entonces la persona considera que el problema es fácil \
Si el número es igual a 1, entonces la persona considera que el problema es difícil

## Output
Imprime "EASY" si todos consideran que el problema es fácil \
Imprime "HARD" si alguien considera que el problema es difícil

## Ejemplos
| Input         | Razonamiento  | Output    |
| ------------- | :------------ | --------- |
| 3 <br> 0 0 1  | 0 0 **1** = **1 persona** considera que el problema es difícil        | **HARD**          |
| 3 <br> 0 0 0  | 0 0 0 = Nadie considera que el problema es difícil                | **EASY**          |
| 3 <br> 1 0 1  | **1** 0 **1** = **2 personas** consideran que el problema es difícil  | **HARD**          |

## Forma de resolverlo
Para este problema, simplemente debemos revisar si en nuestra serie de respuestas hay un **1**. Si lo hay, entonces el problema es **difícil**. Si hay **puros 0s**, entonces el problema es **fácil**. \
Esto lo podemos hacer con una lista/arreglo o conforme leemos las respuestas. La manera dependerá del lenguaje de programación que utilices.

## Algoritmo
1) Itera sobre las respuestas de las personas
2) Revisa las respuestas \
a) Si hay algún 1, entonces imprime "HARD" \
b) Si no hay un 1, entonces imprime "EASY"
