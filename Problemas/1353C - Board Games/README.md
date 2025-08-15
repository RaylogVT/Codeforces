# 1353C - Board Games

**Enlace:** https://codeforces.com/problemset/problem/1353/A

## Resumen del problema
Se tiene un tablero de ajedrez cuadrado de tamaño $N \times N$, donde $N$ es un número impar. En cada celda del tablero hay una pieza. El objetivo es mover todas las piezas al centro del tablero. El costo de mover una pieza de una celda a una celda adyacente (horizontal o vertical) es 1. Se pide calcular el número total mínimo de movimientos necesarios para que todas las piezas lleguen al centro.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un solo entero `n` ($1 \le n \le 250000$), el tamaño del tablero. Se garantiza que `n` es impar.

## Output
Para cada caso de prueba, imprime un solo entero: el número total mínimo de movimientos.

## Restricciones

| Variable     | Rango        | Notas                               |
| :----------- | :----------- | :---------------------------------- |
| t (casos)    | [1, 1000]    |                                     |
| n (tamaño)   | [1, 250000]  | `n` es impar                        |

## Ejemplos

| Input (n) | n | D = (n-1)/2 | Suma de k^2 | Output (8 * Suma) |
| :-------- | :- | :---------- | :---------- | :---------------- |
| 1         | 1 | 0           | 0           | `0`               |
| 3         | 3 | 1           | $1^2 = 1$   | $8 \times 1 = 8$  |
| 5         | 5 | 2           | $1^2+2^2 = 1+4=5$ | $8 \times 5 = 40$ |
| 7         | 7 | 3           | $1^2+2^2+3^2 = 1+4+9=14$ | $8 \times 14 = 112$ |

## Forma de resolverlo

### Enfoque Algorítmico (Suma de Movimientos por Capas)
El problema puede ser resuelto observando la estructura del tablero y cómo las piezas se distribuyen en "capas" concéntricas alrededor del centro. Dado que $N$ es impar, el tablero siempre tendrá una celda central única.

1.  **Identificar Capas:** Podemos visualizar el tablero como una serie de cuadrados anidados.
    *   La capa más interna (distancia 0) es la celda central.
    *   La primera capa alrededor del centro (distancia 1) consiste en 8 celdas.
    *   La segunda capa alrededor del centro (distancia 2) consiste en 16 celdas.
    *   En general, la $k$-ésima capa (a una distancia Manhattan de $k$ del centro) contiene $8k$ celdas.

2.  **Movimientos por Capa:** Cada pieza en la $k$-ésima capa requiere $k$ movimientos para llegar al centro. Por lo tanto, el total de movimientos para todas las piezas en la $k$-ésima capa es $8k \times k = 8k^2$.

3.  **Suma Total:** El número total de movimientos es la suma de los movimientos de todas las capas, desde la primera capa ($k=1$) hasta la capa más externa. La capa más externa tendrá una distancia $D = (N-1)/2$ del centro.
    *   Así, el total de movimientos es $\sum_{k=1}^{D} 8k^2$.

4.  **Fórmula de Suma de Cuadrados:** Esta suma puede ser simplificada utilizando la fórmula para la suma de los primeros $D$ cuadrados:
    $$ \sum_{k=1}^{D} k^2 = \frac{D(D+1)(2D+1)}{6} $$
    Sustituyendo esto en nuestra suma, obtenemos:
    $$ \text{Total de movimientos} = 8 \times \frac{D(D+1)(2D+1)}{6} $$
    Esta fórmula nos permite calcular el resultado directamente sin necesidad de iterar.

## Análisis Matemático
Sea $N$ el tamaño del tablero, donde $N$ es impar. El centro del tablero se encuentra en la celda $((N+1)/2, (N+1)/2)$.
La distancia Manhattan de una celda $(x, y)$ al centro $(x_c, y_c)$ es $|x-x_c| + |y-y_c|$.
Debido a la simetría del tablero y la naturaleza de la distancia Manhattan, las celdas a una distancia $k$ del centro forman un cuadrado rotado.
El número de celdas a una distancia Manhattan $k$ del centro es $8k$ para $k \ge 1$.
La distancia máxima desde el centro a cualquier celda en el borde del tablero es $D = (N-1)/2$.
Por ejemplo, para $N=3$, $D=1$. Las celdas a distancia 1 son 8.
Para $N=5$, $D=2$. Las celdas a distancia 1 son 8, y las celdas a distancia 2 son 16.

El número total de movimientos es la suma de los movimientos de todas las piezas. Cada pieza en una celda a distancia $k$ contribuye con $k$ movimientos.
La suma total es:
$$ \text{Total Moves} = \sum_{k=1}^{D} (\text{Número de celdas a distancia } k) \times k $$
$$ \text{Total Moves} = \sum_{k=1}^{D} (8k) \times k $$
$$ \text{Total Moves} = \sum_{k=1}^{D} 8k^2 $$
Factorizando el 8:
$$ \text{Total Moves} = 8 \sum_{k=1}^{D} k^2 $$
Utilizando la fórmula de la suma de los primeros $D$ cuadrados: $\sum_{k=1}^{D} k^2 = \frac{D(D+1)(2D+1)}{6}$
$$ \text{Total Moves} = 8 \times \frac{D(D+1)(2D+1)}{6} $$
Esta fórmula es la que se implementa en el código.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer el tamaño del tablero `N`.
    b.  Calcular la distancia máxima `D = (N - 1) // 2`.
    c.  Calcular el total de movimientos `movimientos = 8 * (D * (D+1) * (2*D + 1)) // 6`.
    d.  Imprimir el resultado `movimientos`.

## Notas Adicionales
*   **Tipo de Datos:** Dado que `N` puede ser hasta $250000$, el valor de `D` puede ser hasta $124999$. El cálculo de `D * (D+1) * (2*D + 1)` puede resultar en un número grande (aproximadamente $2 \times D^3$), que para $D=124999$ es del orden de $3.9 \times 10^{15}$. Este valor excede el rango de un entero de 32 bits, pero cabe en un entero de 64 bits (`long long` en C++). Python maneja automáticamente enteros de precisión arbitraria, por lo que no hay problema de desbordamiento.
*   **Optimización:** El uso de la fórmula cerrada para la suma de cuadrados evita un bucle explícito, lo que hace que la solución sea muy eficiente.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Cálculos aritméticos constantes.    |
| Espacial | O(1)                   | Espacio constante para variables.   |