https://codeforces.com/problemset/problem/32/B

# 32B - Borze

## Resumen del problema
En Berland, la representación de números ternarios en alfabeto Borze se realiza de la siguiente forma:
1) . = 0
2) -. = 1
3) -- = 2

Dado un código Borze, descrifra el número ternario que representa

## Input
La única línea contiene un string de longitud N (1 <= N <= 200) -- El código Borze
Está garantizado que el código Borze es válido. También puede empezar con ceros.

## Output
Imprime el número ternario descifrado

## Ejemplos
| Input    | Razonamiento  | Output    |
| -------- | :------------ | --------- |
| -..-.--  | (-.)(.)(-.)(--) = 1 0 1 2  | **1012**  |
| --.      | (--)(.) = 2 0              | **20**    |

## Forma de resolverlo
Para resolver este problema, simplemente debemos buscar una manera de detectar la equivalencia de los números ternarios en Borze y realizar la conversión. Dependiendo del lenguaje de programación, existen dos aproximaciones para esta tarea.

### Python
En Python, podemos utilizar la función **replace()*** para realizar la conversión de Borze a ternario. Sin embargo, ¿Con qué número empezamos? \
a) Si empezamos por 0, tendríamos el problema de identificar si un punto es un 0 o parte de la representación de un 1. \
Ej. ---.. (¿El 1° punto es un 0 o es parte de un 1?) \
b) Si empezamos por 1, tendríamos el problema de identificar si un guión es parte de la representación del 1 o 2. \
Ej. ---.. (¿El 3° guión es parte de un 1 o 2?)
c) Si empezamos por 2, entonces podemos convertir cualquier instancia de dos guiones. En instancias donde haya guiones consecutivos, una cantidad par representaría siempre 2s, mientras que una cantidad impar tendría un 1 al final (puesto que después del último guión le seguiría un punto).
Ej. ---.. (Los primeros dos guiones son un 2, el 3° es parte de un 1)

Por lo tanto, el hecho de usar el mismo carácter dos veces hace al **2** el mejor candidato para convertir primero. \

¿Ahora cuál sigue, 0 o 1? Considerando que 1 usa dos caracteres **distintos** y todavía tenemos el problema de identificar puntos, el **1** es mejor para convertir segundo. Finalmente, con 1 y 2 ya convertidos, sólo nos quedarán puntos, los cuales podemos confiar que en realidad son 0s, así que **0** es el último número a convertir.

### Algoritmo
1) Convierte los '--' a 2
2) Convierte los '-.' a 1
3) Convierte los '.' a 0

### C++
En C++, no tenemos una función para reemplazar strings, así que debemos tomar otra aproximación al problema. Si iteramos de forma normal, entonces tendríamos que **detectar el valor del caracter actual**. Si el caracter es un **punto**, entonces podemos confiar en que es un **0**. Sin embargo, ¿qué pasa si es un guión? Puesto que **1 y 2 empiezan con un guión y ambos usan dos caracteres**, es imposible saber el valor del guión hasta revisar el caracter que le sigue. Lo que podemos hacer es **avanzar una localidad más en el string y detectar el valor del próximo carácter**. Si el caracter es un **punto**, entonces es un **1**, de lo contrario, es un **guión**, que es un **2**. \

### Algoritmo
1) Itera sobre los caracteres del código Borze
2) Detecta el valor del caracter actual \
a) Si el caracter es un punto, entonces es 0 \
b) Si el caracter es un guión, procede al paso 3
3) Suma +1 al índice del iterador para avanzar al siguiente caracter \
a) Si el caracter es un punto, entonces es 1 \
b) Si el caracter es un guión, entonces en 2