https://codeforces.com/problemset/problem/148/A

# 148A - Insomnia Cure

## Resumen del problema
Estás contando dragones para dormir, pero decides soñar que te estás enfrentando a ellos. Para ello, cada k-ésimo dragón es golpeado con una sartén, cada l-ésimo dragón tiene su cola aplastada por la puerta del balcón, cada m-ésimo dragón tiene sus patas pisoteadas con tacones y cada n-ésimo dragón huye desesperadamente. Después de soñar una cierta cantidad de dragones, ¿cuántos de estos fueron atacados de una u otra forma?

## Input
La 1° linea contiene un número entero K (1 <= K <= 10) - El índice el K-ésimo dragón golpeado con una sartén \
La 2° linea contiene un número entero L (1 <= L <= 10) - El índice el L-ésimo dragón aplastado por la puerta \
La 3° linea contiene un número entero M (1 <= M <= 10) - El índice el M-ésimo dragón pisoteado con tacones \
La 4° linea contiene un número entero N (1 <= N <= 10) - El índice el N-ésimo dragón que huyó \
La 5° linea contiene un número entero D (1 <= D <= 10000) - El número de dragones soñados 

## Output
Imprime un número entero - El número de dragones atacados

## Ejemplos
| Input                          | Razonamiento  | Output    |
| -----------------              | :------------ | --------- |
| 1 <br> 2 <br> 3 <br> 4 <br> 12 | K = X X X X X X X X X X  X  X <br> L = - X - X - X - X - X - X <br> M = - - X - - X - - X - - X <br> N = - - - X - - - X - - - X <br> D = 1 2 3 4 5 6 7 8 9 10 11 12 <br> T = X X X X X X X X X X  X  X   | **12** |
| 2 <br> 3 <br> 4 <br> 5 <br> 24 | K = - X - X - X - X - X - X - X - X - X - X - X - X <br> L = - - X - - X - - X - - X - - X - - X - - X - - X <br> M = - - - X - - - X - - - X - - - X - - - X - - - X <br> N = - - - - X - - - - X - - - - X - - - - X - - - - <br> D = 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 <br> T = - X X X X X - X X X - X - X X X - X - X X X - X | **17** |

## Forma de resolverlo
### a) Set de dragones atacados
Podemos añadir cada dragón atacado por cada método en un **set()** y simplemente sacar su tamaño para saber cuántos dragones fueron atacados. **Si un dragón fue atacado por más de un método, el set() contabilizará su índice sólo una vez.**

### b) OR de listas
Podemos sacar una **lista/arreglo** de dragones atacados por cada método y hacer una **unión de las 4 listas/arreglos** para saber cuántos dragones fueron atacados. En probabildad, una unión suma los elementos de los conjunto A y B y elimina duplicados de instancias que estén en las dos. **Ej. A = (1,2,3,4), B = (3,4,5,6), A U B = (1,2,3,4,5,6)**. Con la unión, eliminaremos duplicados de dragones que hayan sido atacados de más de una forma. Una vez hecho esto, simplemente sacamos el tamaño de la unión para saber cuántos dragones fueron atacados.

## Algoritmo
### a) Set de dragones atacados
1) Itera sobre los dragones atacados con cada método
2) Inserta el K/L/M/N-ésimo dragón atacado en un set
3) Saca el tamaño del set

### b) OR de listas
1) Itera sobre los dragones atacados con cada método
2) Inserta el K/L/M/N-ésimo dragón atacado en su respectiva lista/arreglo
3) Saca la unión de las 4 listas/arreglos de dragones atacados
4) Saca el tamaño de la unión
