https://codeforces.com/problemset/problem/1996/A

# 1996A - Legs

## Resumen del problema
Se te da un número total de piernas contadas. Se sabe que solo hay dos tipos de animales en la granja: gallinas (con 2 piernas) y vacas (con 4 piernas). Debes determinar el número mínimo de animales que podrían tener el número total de piernas dado.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La única línea contiene un solo entero `n` ($2 \le n \le 10^9$), el número total de piernas contadas.

## Output
Para cada caso de prueba, imprime un solo entero: el número mínimo de animales.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| n (piernas)  | [2, 10^9]  | Siempre par, ya que las piernas son de 2 o 4 |

## Ejemplos

| Input (n) | n | Razonamiento                                   | Output |
| :-------- | :- | :--------------------------------------------- | :----- |
| 4         | 4 | 4 piernas / 4 piernas/vaca = 1 vaca. Mínimo: 1 animal. | `1`    |
| 2         | 2 | 2 piernas % 4 != 0. (2 / 4) + 1 = 0 + 1 = 1 gallina. Mínimo: 1 animal. | `1`    |
| 6         | 6 | 6 piernas % 4 != 0. (6 / 4) + 1 = 1 + 1 = 2 animales (1 vaca, 1 gallina). Mínimo: 2 animales. | `2`    |
| 8         | 8 | 8 piernas / 4 piernas/vaca = 2 vacas. Mínimo: 2 animales. | `2`    |

## Forma de resolverlo

### Enfoque Algorítmico (Minimizar Animales)
El objetivo es encontrar el número mínimo de animales para un número dado de piernas. Dado que las vacas tienen 4 piernas y las gallinas 2, para minimizar el número total de animales, debemos maximizar el uso de animales con más piernas, es decir, las vacas.

1.  **Priorizar Vacas:** Intentamos formar la mayor cantidad posible de grupos de 4 piernas (vacas). Esto se logra mediante la división entera del número total de piernas entre 4 (`n / 4`).
2.  **Manejar el Resto:**
    *   Si el número total de piernas (`n`) es un múltiplo de 4 (es decir, `n % 4 == 0`), significa que todas las piernas pueden ser atribuidas a vacas. En este caso, el número mínimo de animales es simplemente `n / 4`.
    *   Si el número total de piernas (`n`) no es un múltiplo de 4 (es decir, `n % 4 != 0`), significa que hay un "resto" de piernas que no pueden formar una vaca completa. Dado que las piernas son siempre pares (2 o 4), este resto siempre será 2. Este resto de 2 piernas debe ser una gallina. Por lo tanto, el número de animales será el número de vacas completas (`n / 4`) más 1 gallina.

Este enfoque es equivalente a calcular el "techo" de la división de `n` por 4, es decir, $\lceil n/4 \rceil$.

## Análisis Matemático
Sea $N$ el número total de piernas.
Sea $V$ el número de vacas (4 piernas) y $G$ el número de gallinas (2 piernas).
Queremos minimizar $V + G$ sujeto a la restricción $4V + 2G = N$.

Para minimizar $V+G$, debemos maximizar $V$.
Si $N$ es un múltiplo de 4, es decir, $N = 4k$ para algún entero $k$.
Podemos tener $V = k$ y $G = 0$.
El número total de animales sería $k = N/4$.

Si $N$ no es un múltiplo de 4, pero es par (como se garantiza implícitamente, ya que las piernas son de 2 o 4), entonces $N \pmod 4$ debe ser 2.
Es decir, $N = 4k + 2$ para algún entero $k$.
En este caso, no podemos tener solo vacas. Necesitamos al menos una gallina para las 2 piernas restantes.
Podemos tener $V = k$ y $G = 1$.
El número total de animales sería $k + 1 = (N-2)/4 + 1 = N/4 + 1$ (usando división entera para $N/4$).

Combinando ambos casos:
Si $N \pmod 4 = 0$, el número de animales es $N/4$.
Si $N \pmod 4 = 2$, el número de animales es $N/4 + 1$.

Esto es precisamente lo que el código implementa:
`if (piernas % 4 == 0) { animales = piernas / 4; } else { animales = (piernas / 4) + 1; }`

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer el número total de piernas `n`.
    b.  Si `n` es divisible por 4 (es decir, `n % 4 == 0`):
        i.  El número mínimo de animales es `n / 4`.
    c.  De lo contrario (si `n % 4 != 0`, lo que implica `n % 4 == 2`):
        i.  El número mínimo de animales es `(n / 4) + 1`.
    d.  Imprimir el resultado.

## Notas Adicionales
*   El problema asume que solo existen animales con 2 o 4 piernas.
*   El número total de piernas `n` siempre será un número par, ya que tanto las gallinas como las vacas tienen un número par de piernas.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Operaciones aritméticas constantes. |
| Espacial | O(1)                   | Espacio constante para variables.   |