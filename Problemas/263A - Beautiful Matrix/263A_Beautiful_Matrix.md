https://codeforces.com/problemset/problem/263/A

# 263A - Beautiful Matrix

## Resumen del problema
Tienes una matriz 5x5 con 24 ceros y 1 uno, donde las filas y columnas están enumeradas del 1-5 \
Puedes invertir dos filas o columnas adyacentes entre sí. \
Una matriz se considera **bonita** si tiene el 1 en su centro (fila #3, columna #3). ¿Cuántas inversiones necesitas para hacer una matriz bonita?

## Input
Recibe 5 líneas con 5 números, donde las líneas representan las filas y los números las columnas.  \
Está garantizado que vas a lee 24 ceros y 1 uno.

## Output
Imprime el número de inversiones necesarias para hacer la matriz bonita

## Ejemplos
1 | 0 0 0 0 0 \
2 | 0 0 0 0 **1** \
3 | 0 0 0 0 0      
4 | 0 0 0 0 0 \
5 | 0 0 0 0 0 \
**| 1 2 3 4 5 
              
1 | 0 0 0 0 0 \
2 | 0 0 0 **1** 0 \
3 | 0 0 0 0 0 = 1 \
4 | 0 0 0 0 0 \
5 | 0 0 0 0 0 \
**| 1 2 3 5 4 
              
1 | 0 0 0 0 0 \
2 | 0 0 **1** 0 0 \
3 | 0 0 0 0 0 = 2 \
4 | 0 0 0 0 0 \
5 | 0 0 0 0 0 \
**| 1 2 5 3 4 
              
1 | 0 0 0 0 0 \
3 | 0 0 0 0 0 \
2 | 0 0 **1** 0 0 = 3 \
4 | 0 0 0 0 0 \
5 | 0 0 0 0 0 \
**| 1 2 5 3 4 
              
Output = **3**

## Forma de resolverlo
En vez de llevar manualmente las inversiones para llegar a la posición adecuada, podemos contar por cuántas filas (x) y columnas (y) el 1 está desfasado de su posición objetivo. \
Si este se ubica en el índice **(x,y)** y debe estar en el índice **(2,2)** (si contamos desde el 0), entonces observamos que el número de inversiones a realizar para las filas es **x-2** y para las columnas **y-2**. \
Como no nos importa si el 1 está desfasado hacia la izquierda, derecha, arriba o abajo, entonces podemos usar el **valor absoluto** de las restas para contar simplemente el número de filas y columnas desfasadas. \
Una vez hecho esto, simplemente sumamos las restas para obtener el total. 

El número de inversiones a realizar es igual a **abs(x-2) + abs(y-2)**, donde (x,y) son los índices de fila y columna iniciales del 1

## Algoritmo
1) Extrae el número de fila y columna donde se ubica el 1 \
2) Calcula **abs(fila-2) + abs(columna-2)**