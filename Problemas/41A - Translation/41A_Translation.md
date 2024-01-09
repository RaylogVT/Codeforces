https://codeforces.com/problemset/problem/41/A

# 41A - Translation

## Resumen del problema
Dadas 2 palabras, determina si la 2° es una inversión de la 1°

## Input
La 1° línea contiene un string de longitud N (1 <= N <= 100) -- La palabra escrita al derecho \
La 2° línea contiene un string de longitud N (1 <= N <= 100) -- La palabra escrita al revés

## Output
Imprime 'YES' si la 1° palabra es una inversión de la 2°, de lo contrario imprime 'NO'

## Ejemplos
| Input              | Razonamiento  | Output    |
| ------------------ | :------------ | --------- |
| code <br> edoc     | edoc == edoc  | **YES**   |
| code <br> deco     | edoc != deco  | **NO**    |

## Forma de resolverlo
Para este problema debemos leer cualquiera de las dos palabras de derecha a izquierda y compararlo contra la otra.
Para ello podemos utilizar un ciclo y recorrer letra por letra. Sin embargo, necesitamos que el ciclo decremente para ir de la localidad N-1 a 0, así que tendremos que ajustar los parámetros del mismo para hacerlo.

Revisa este ciclo: \
for(int i = 0; i < longitud_palabra; i++) { \
&nbsp;&nbsp;&nbsp;&nbsp; cout << palabra(i); \
}

Aquí estamos usando un índice (i) que empieza con un valor de 0 para recorrer las localidades de un string de 0 a N-1, y sumamos 1 al índice cada vez que los realizamos. De esta manera podemos leer la palabra de izquierda a derecha. 

Ahora revisa este ciclo: \
for(int i = longitud_palabra-1; i >= 0; i--) { \
&nbsp;&nbsp;&nbsp;&nbsp; cout << palabra(i); \
}

Aquí el índice (i) ahora empieza con un valor de (longitud de la palabra - 1) para recorrer las localidades de un string de N-1 a 0, y restamos 1 al índice cada vez que los realizamos. De esta manera podemos leer la palabra de derecha a izquierda.

Entonces, ajustando los parámetros de un ciclo, podemos buscar maneras más ingeniosas de realizar una acción repetidas veces.

## Algoritmo
1) Invierte la 1° palabra
2) Si la inversión es igual a la 2° palabra, imprime 'YES', de lo contrario imprime 'NO'
