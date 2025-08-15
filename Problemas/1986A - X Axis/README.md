# 1986A - X Axis

**Enlace:** https://codeforces.com/problemset/problem/1986/A

## Resumen del problema
Se dan tres puntos con coordenadas enteras $x_1, x_2, x_3$ en el eje X. Se necesita encontrar un punto entero $p$ en el eje X tal que la suma de las distancias entre $p$ y cada uno de los tres puntos dados sea mínima. Es decir, se busca minimizar $|x_1 - p| + |x_2 - p| + |x_3 - p|$.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   Una sola línea contiene tres enteros $x_1, x_2, x_3$ ($-100 \le x_i \le 100$), las coordenadas de los tres puntos.

## Output
Para cada caso de prueba, imprime un solo entero: la suma mínima de las distancias.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| $x_i$ (coordenadas) | [-100, 100] | Enteros                             |

## Ejemplos

| Input ($x_1, x_2, x_3$) | Puntos | Puntos Ordenados | $x_{max} - x_{min}$ | Output |
| :---------------------- | :----- | :--------------- | :------------------ | :----- |
| 3 1 5                   | 3, 1, 5 | 1, 3, 5          | $5 - 1 = 4$         | `4`    |
| 10 20 15                | 10, 20, 15 | 10, 15, 20       | $20 - 10 = 10$      | `10`   |
| 0 0 0                   | 0, 0, 0 | 0, 0, 0          | $0 - 0 = 0$         | `0`    |

## Forma de resolverlo

### Enfoque Algorítmico (Propiedad de la Mediana)
Este problema es una aplicación directa de una propiedad conocida en matemáticas: para un conjunto de puntos en una línea, el punto que minimiza la suma de las distancias absolutas a todos los demás puntos es la **mediana** de esos puntos.

Para tres puntos $x_1, x_2, x_3$:
1.  **Ordenar los puntos:** Primero, se ordenan los tres puntos para obtener $x_{(1)} \le x_{(2)} \le x_{(3)}$, donde $x_{(1)}$ es el mínimo, $x_{(2)}$ es la mediana y $x_{(3)}$ es el máximo.
2.  **Punto óptimo:** El punto $p$ que minimiza la suma de distancias es la mediana, es decir, $p = x_{(2)}$.
3.  **Suma mínima de distancias:** La suma de las distancias absolutas a la mediana es:
    $|x_{(1)} - x_{(2)}| + |x_{(2)} - x_{(2)}| + |x_{(3)} - x_{(2)}|$
    Como $x_{(1)} \le x_{(2)}$ y $x_{(2)} \le x_{(3)}$, esto se simplifica a:
    $(x_{(2)} - x_{(1)}) + 0 + (x_{(3)} - x_{(2)})$
    $= x_{(2)} - x_{(1)} + x_{(3)} - x_{(2)}$
    $= x_{(3)} - x_{(1)}$

Esto significa que la suma mínima de distancias es simplemente la diferencia entre el valor máximo y el valor mínimo de las coordenadas dadas.

## Análisis Matemático
Sea $S = \{x_1, x_2, x_3\}$ el conjunto de las tres coordenadas dadas. Queremos encontrar un punto $p$ que minimice la función objetivo:
$$ f(p) = \sum_{i=1}^{3} |x_i - p| = |x_1 - p| + |x_2 - p| + |x_3 - p| $$
Para un conjunto de puntos en una dimensión, la suma de las distancias absolutas se minimiza cuando $p$ es la mediana del conjunto.
Sea $x_{(1)}, x_{(2)}, x_{(3)}$ los puntos ordenados tal que $x_{(1)} \le x_{(2)} \le x_{(3)}$. La mediana es $x_{(2)}$.
Sustituyendo $p = x_{(2)}$ en la función $f(p)$:
$$ f(x_{(2)}) = |x_{(1)} - x_{(2)}| + |x_{(2)} - x_{(2)}| + |x_{(3)} - x_{(2)}| $$
Dado que $x_{(1)} \le x_{(2)}$, entonces $|x_{(1)} - x_{(2)}| = x_{(2)} - x_{(1)}$.
Dado que $x_{(2)} \le x_{(3)}$, entonces $|x_{(3)} - x_{(2)}| = x_{(3)} - x_{(2)}$.
Y $|x_{(2)} - x_{(2)}| = 0$.
Por lo tanto,
$$ f(x_{(2)}) = (x_{(2)} - x_{(1)}) + 0 + (x_{(3)} - x_{(2)}) $$
$$ f(x_{(2)}) = x_{(2)} - x_{(1)} + x_{(3)} - x_{(2)} $$
$$ f(x_{(2)}) = x_{(3)} - x_{(1)} $$
Esto demuestra que la suma mínima de distancias es la diferencia entre el valor máximo ($x_{(3)}$) y el valor mínimo ($x_{(1)}$) de las coordenadas.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer las tres coordenadas $x_1, x_2, x_3$.
    b.  Almacenar las coordenadas en una estructura de datos que permita ordenarlas (por ejemplo, un `vector` en C++ o una `list` en Python).
    c.  Ordenar las coordenadas de menor a mayor.
    d.  Calcular la diferencia entre el elemento más grande y el más pequeño de la lista ordenada (es decir, `coordenadas[2] - coordenadas[0]` si se usa indexación base 0).
    e.  Imprimir el resultado.

## Notas Adicionales
*   La solución es muy eficiente ya que solo requiere leer tres números, ordenarlos (lo cual es una operación de tiempo constante para un número fijo y pequeño de elementos) y realizar una resta.
*   No es necesario calcular explícitamente la mediana; solo se necesitan el mínimo y el máximo.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Ordenar 3 elementos es una operación de tiempo constante. |
| Espacial | O(1)                   | Se almacena un número fijo de elementos (3 coordenadas). |