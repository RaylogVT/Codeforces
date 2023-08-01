https://codeforces.com/problemset/problem/263/A

## Resumen del problema
Tienes una matriz 5x5 con 24 ceros y 1 uno, donde las filas y columnas están enumeradas del 1-5 y puedes invertir dos filas o columnas adyacentes. \
Una matriz se considera **bonita** si tiene el 1 en su centro (fila #3, columna #3). ¿Cuántas inversiones necesitas para hacer una matriz bonita?

## Input
Recibe 5 líneas con 5 números, donde las líneas representan las filas y los números las columnas.  \
Está garantizado que el input consta de 24 ceros y 1 uno.

## Output
Imprime el número de inversiones necesarias para hacer la matriz bonita

## Ejemplos
1 | 0 0 0 0 0 \
2 | 0 0 0 0 1 \
3 | 0 0 0 0 0 \     
4 | 0 0 0 0 0 \
5 | 0 0 0 0 0 \
    1 2 3 4 5 \
              \
1 | 0 0 0 0 0 \
2 | 0 0 0 1 0 \
3 | 0 0 0 0 0 = 1 \
4 | 0 0 0 0 0 \
5 | 0 0 0 0 0 \
    1 2 3 5 4 \
              \
1 | 0 0 0 0 0 \
2 | 0 0 1 0 0 \
3 | 0 0 0 0 0 = 2 \
4 | 0 0 0 0 0 \
5 | 0 0 0 0 0 \
    1 2 5 3 4 \
              \
1 | 0 0 0 0 0 \ 
3 | 0 0 0 0 0 \
2 | 0 0 1 0 0 = 3 \
4 | 0 0 0 0 0 \
5 | 0 0 0 0 0 \
    1 2 5 3 4 \
              
Resultado = **3**

## Forma de resolverlo
En vez de llevar manualmente las inversiones para llegar a la posición adecuada, podemos contar por cuántas filas y columnas el 1 está desfasado de su posición objetivo. Si este se ubica en el índice (x,y) y debe estar en el índice (2,2) (si contamos las localidades del 0-4), entonces observamos que el número de inversiones a realizar para las filas es **x-2** y para las columnas **y-2**. Como no nos importa si el 1 está desfasado hacia la izquierda, derecha, arriba o abajo, entonces podemos usar el valor absoluto de las restas para contar simplemente el número de filas y columnas desfasadas. Una vez hecho esto, simplemente las sumamos para obtener el total. \

Conclusión: El número de inversiones a realizar es igual a **abs(x-2) + abs(y-2)**, donde (x,y) son los índices iniciales del 1