https://codeforces.com/problemset/problem/266/B

# 266B - Queue At The School

## Resumen del problema
La fila de la cafetería está compuesta de alumnos. Con cada segundo que pasa, los chicos se incomodan de estar frente a las chicas, así que deciden invertir lugares. ¿Cómo se ve la fila después de X segundos?

## Input
La 1° línea contiene dos números enteros N y T (1 <= N,T <= 1000) -- La cantidad de alumnos en la fila, el número de segundos \
La 2° línea contiene un string de longitud N -- La alineación inicial de la fila \
Los chicos están representados como (B), las chicas están representados como (G)

## Output
Imprime la fila resultante después de T segundos

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 5 2 <br> BGGBG    | **BG**G**BG** = GBGGB <br> G**BG**GB = GGBGB <br> GGBGB | **GGBGB**   |
| 7 4 <br> BBGBBGG  | B**BG**B**BG**G = BGBBGBG <br> **BG**B**BGBG** = GBBGBGB <br> GB**BGBG**B = GBGBGBB <br> G**BGBG**BB = GGBGBBB | **GGBGBBB**    |

## Forma de resolverlo
Para resolver este problema debemos iterar sobre la fila cada segundo que pasa, y buscar todas las instancias en las que un chico está enfrente de la chica para hacer el cambio de lugares. ¿Cómo hacemos esto?

La representación de un chico enfrente de una chica se denota como **'BG'** en la fila, así que debemos convertirla en **'GB'** para realizar la inversión. 

Ahora bien, ¿cómo hacemos las inversiones cada segundo? La manera de realizarlo dependerá de si el lenguaje que quiere usar tiene una función para reemplazar substrings. \
**a) Python** tiene la función **replace()**, la cual permite reemplazar todas las instancias de un substring por otra. \
**b) C++** tiene la función **regex_replace()**, la cual permite rememplazar todas las instancias de un substring por otra.\
La diferencia con Python es que esta permite expresiones regulares como input. \
**c) C++** tiene la función **swap()**, la cual permite invertir dos caracteres de lugar. \
Aunque no sirve sobre todas las instancias de un string, puede usarse para realizar las inversiones una por una si así lo deseas.

## Algoritmo
### a) Reemplazo múltiple
1) Itera sobre cada segundo que transcurre
2) Reemplaza todas las instancias en las que un chico está enfrente de una chica ('BG')
3) Imprime la fila resultante

### b) Reemplazo individual
Si tu lenguaje no tiene una función para hacer múltiples reemplazos, entonces tendrás que hacer las inversiones una por una y **evitar que se realicen sobre un par de chico-chica que ya cambiaron de lugar**. Esto se puede realizar con un ciclo y manejo de localidades, pero necesitamos actualizar el índice en medio de ciclo para evitar la situación previamente descrita.

Observa este ejemplo: \
for(int i = 0; i < longitud-1; i++) {  \
&nbsp;&nbsp;&nbsp;&nbsp;    if(fila(i) == 'B' && fila(i+1) == 'G') { \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;        **swap(fila(i), fila(i+1));** \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;        **i++;** \
&nbsp;&nbsp;&nbsp;&nbsp;    } \
} 

Primero enfoquémonos en la función swap(). Podemos ver que estamos invirtiendo el valor que hay en el índice **i** e **i+1**. \
Después de realizar la acción, el for pasará al siguiente índice del actual, i+1. Sin embargo, el problema estipula que **no se realizan inversiones de lugar sobre una misma chica**, así que debemos saltar a la próxima del siguiente, **i+2**. Aquí es donde el **i++** abajo del swap permite realizar dicha acción, de esta manera saltando el índice i+1 durante la iteración.

1) Itera sobre cada segundo que transcurre
2) Recorre la fila
3) Si un chico está enfrente de una chica ('BG'), invierte los lugares
4) Mueve el índice para saltar al chico que acaba de cambiar lugar
