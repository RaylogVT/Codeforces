https://codeforces.com/problemset/problem/1927/A

# 1927A - Make It White

## Resumen del problema
Se tiene una fila de `N` celdas, cada una de las cuales es blanca ('W') o negra ('B'). Se puede realizar una operación: elegir un segmento continuo de celdas y pintarlas todas de blanco. El objetivo es hacer que todas las celdas sean blancas. Se pide encontrar la longitud mínima del segmento que debe pintarse para lograr esto.

## Input
- La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
- Para cada caso de prueba:
    - La primera línea contiene un solo entero `n` ($1 \le n \le 100$), la longitud de la fila de celdas.
    - La segunda línea contiene una cadena `s` de longitud `n`, que consiste en caracteres 'W' y 'B'.

## Output
Para cada caso de prueba, imprime un solo entero: la longitud mínima del segmento a pintar.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| n (longitud) | [1, 100]   |                                     |
| s (cadena)   | longitud n | Caracteres 'W' o 'B'. Se garantiza que hay al menos una celda negra ('B'). |

## Ejemplos

| Input (n, s) | n | s       | Primera 'B' (índice) | Última 'B' (índice) | Longitud | Output |
| :----------- | :- | :------ | :------------------- | :------------------ | :------- | :----- |
| (5, "WBBBW") | 5 | "WBBBW" | 1                    | 3                   | 3 - 1 + 1 = 3 | `3`    |
| (3, "BBB")   | 3 | "BBB"   | 0                    | 2                   | 2 - 0 + 1 = 3 | `3`    |
| (4, "WBWB")   | 4 | "WBWB"  | 1                    | 3                   | 3 - 1 + 1 = 3 | `3`    |
| (1, "B")     | 1 | "B"     | 0                    | 0                   | 0 - 0 + 1 = 1 | `1`    |

## Forma de resolverlo

### Enfoque Algorítmico (Encontrar los Extremos Negros)
Para hacer que todas las celdas sean blancas con una sola operación de pintar un segmento, necesitamos asegurarnos de que todas las celdas negras existentes queden cubiertas por este segmento. Para minimizar la longitud del segmento, debemos elegir el segmento más corto posible que abarque todas las celdas negras. Esto se logra identificando la primera celda negra desde la izquierda y la última celda negra desde la derecha. El segmento mínimo a pintar será el que va desde la primera celda negra hasta la última celda negra, incluyendo ambas.

1.  **Encontrar la Primera Celda Negra:** Itera la cadena desde el principio (índice 0) hasta encontrar el primer carácter 'B'. Guarda su índice.
2.  **Encontrar la Última Celda Negra:** Itera la cadena desde el final (índice `N-1`) hacia el principio hasta encontrar el primer carácter 'B'. Guarda su índice.
3.  **Calcular la Longitud del Segmento:** La longitud del segmento necesario será la diferencia entre el índice de la última celda negra y el índice de la primera celda negra, más uno (para incluir ambos extremos).
    `longitud = ultima_celda_negra - primera_celda_negra + 1`.

## Análisis Matemático
Sea $S$ una cadena de longitud $N$ compuesta por caracteres 'W' y 'B'.
Sea $i_{first}$ el índice de la primera aparición de 'B' en $S$ (iterando de izquierda a derecha).
Sea $i_{last}$ el índice de la última aparición de 'B' en $S$ (iterando de derecha a izquierda).
El segmento mínimo que cubre todas las celdas negras es $[i_{first}, i_{last}]$.
La longitud de este segmento es $i_{last} - i_{first} + 1$.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `N`.
    b.  Leer la cadena `celdas`.
    c.  Inicializar `primera_celda_negra` a 0 y `ultima_celda_negra` a 0 (estos valores serán actualizados).
    d.  Iterar desde `indice_celda = 0` hasta `N-1`:
        i.  Si `celdas[indice_celda]` es 'B', asignar `primera_celda_negra = indice_celda` y salir del bucle (usando `break`).
    e.  Iterar desde `indice_celda = N-1` hacia abajo hasta `0`:
        i.  Si `celdas[indice_celda]` es 'B', asignar `ultima_celda_negra = indice_celda` y salir del bucle (usando `break`).
    f.  Calcular `longitud_segmento = ultima_celda_negra - primera_celda_negra + 1`.
    g.  Imprimir `longitud_segmento`.

## Notas Adicionales
*   El problema especifica que siempre habrá al menos una celda negra ('B') en la cadena. Esto simplifica la lógica, ya que no es necesario manejar el caso de una cadena completamente blanca, donde no habría celdas 'B' que encontrar.
*   El enfoque de buscar los extremos de las celdas negras es óptimo porque cualquier segmento más corto no cubriría todas las celdas negras, y cualquier segmento más largo sería innecesariamente grande.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | Se realizan dos iteraciones lineales sobre la cadena de longitud N en el peor de los casos. |
| Espacial | O(1)                   | Se utiliza un espacio constante para almacenar los índices y otras variables. |