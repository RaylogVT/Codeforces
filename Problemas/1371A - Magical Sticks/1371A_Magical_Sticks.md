# 1371A - Magical Sticks

**Enlace:** https://codeforces.com/problemset/problem/1371/A

## Resumen del problema
Tienes `n` palos (sticks) con longitudes 1, 2, ..., `n`. La operación permitida es tomar dos palos cualesquiera y conectarlos extremo a extremo para formar un palo más largo (es decir, si combinas un palo de longitud `i` y uno de longitud `j`, obtienes un palo de longitud `i+j`). Puedes realizar esta operación cualquier número de veces. El objetivo es determinar cuál es el número máximo, `k`, de palos que puedes tener al final de forma que todos esos `k` palos tengan la *misma longitud*.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 1000), el número de casos de prueba.
-   Cada una de las siguientes `t` líneas contiene un solo entero `n` (1 <= n <= 10⁹), el número inicial de palos (y la longitud máxima).

## Output
Para cada caso de prueba, imprime un solo entero: el máximo número `k` de palos de igual longitud que se pueden obtener.

## Restricciones

| Variable      | Rango      |
| :------------ | :--------- |
| t (casos)     | [1, 1000]  |
| n (palos)     | [1, 10⁹]   |

## Ejemplos

| Input   | n | Palos Iniciales | Operaciones Ejemplo                   | Palos Finales Ejemplo | Max k (misma longitud) | ceil(n/2) | Output |
| :------ | :- | :-------------- | :------------------------------------ | :-------------------- | :--------------------- | :-------- | :----- |
| 6 <br> 1 | 1 | [1]             | -                                     | [1]                   | 1 (longitud 1)         | 1         | `1`    |
| 6 <br> 2 | 2 | [1, 2]          | - (no se pueden combinar para igualar) | [1, 2]                | 1 (longitud 1 o 2)     | 1         | `1`    |
| 6 <br> 3 | 3 | [1, 2, 3]       | Combinar (1, 2) -> 3                  | [3, 3]                | 2 (longitud 3)         | 2         | `2`    |
| 6 <br> 4 | 4 | [1, 2, 3, 4]    | Combinar (1, 3) -> 4                  | [2, 4, 4]             | 2 (longitud 4)         | 2         | `2`    |
| 6 <br> 5 | 5 | [1..5]          | Combinar (1,4)->5, (2,3)->5           | [5, 5, 5]             | 3 (longitud 5)         | 3         | `3`    |
| 6 <br> 6 | 6 | [1..6]          | Combinar (1,5)->6, (2,4)->6           | [3, 6, 6, 6]          | 3 (longitud 6)         | 3         | `3`    |

## Forma de resolverlo

### a) Enfoque Algorítmico (Estrategia de Emparejamiento)
Observa cómo se realizan las operaciones de combinación. Cada vez que combinas dos palos, el número total de palos disminuye en uno. Empezamos con `n` palos. Si realizamos `p` operaciones de combinación, terminaremos con `n - p` palos.
Queremos maximizar el número de palos resultantes (`k`) que tengan la misma longitud `L`.

Considera cuántas operaciones de combinación podemos hacer como máximo. Podemos formar `floor(n/2)` pares de palos distintos. Si realizamos `p = floor(n/2)` combinaciones, nos quedarán `n - floor(n/2)` palos en total.
`n - floor(n/2) = ceil(n/2)`.

¿Podemos siempre hacer que estos `ceil(n/2)` palos restantes tengan la misma longitud?
Consideremos la estrategia de emparejar el palo más pequeño disponible con el más grande disponible para formar un palo más largo, y repetir.
-   **Si n es impar** (e.g., n=5 -> [1,2,3,4,5]):
    -   Combina (1, 4) -> 5
    -   Combina (2, 3) -> 5
    -   El palo 5 original queda.
    -   Resultado: [5, 5, 5]. Tenemos `k = 3 = ceil(5/2)` palos de longitud 5.
-   **Si n es par** (e.g., n=6 -> [1,2,3,4,5,6]):
    -   Combina (1, 5) -> 6
    -   Combina (2, 4) -> 6
    -   Los palos 3 y 6 originales quedan.
    -   Resultado: [3, 6, 6, 6]. Tenemos `k = 3 = ceil(6/2)` palos de longitud 6 (ignorando el palo de longitud 3 que no coincide).

Parece que con una estrategia adecuada (como la descrita, o apuntando a la longitud `n` o `n-1`), siempre podemos obtener `ceil(n/2)` palos de la misma longitud. No podemos obtener más, porque cada combinación reduce el número total de palos, y el número mínimo de palos que podemos tener después de maximizar las combinaciones es `ceil(n/2)`.

### b) Enfoque Matemático (Conteo de Pares)
El número máximo de palos de igual longitud que podemos obtener está limitado por el número total de palos que tenemos después de realizar el máximo número posible de combinaciones útiles.
1.  Podemos formar `floor(n / 2)` pares distintos a partir de los `n` palos iniciales.
2.  Cada combinación de un par reduce el número total de palos en 1.
3.  Si realizamos `floor(n / 2)` combinaciones, el número final de palos será `n - floor(n / 2)`.
4.  Esta cantidad es igual a `ceil(n / 2)`.
    *   Si `n` es par, `n=2m`. `2m - floor(2m/2) = 2m - m = m = n/2 = ceil(n/2)`.
    *   Si `n` es impar, `n=2m+1`. `(2m+1) - floor((2m+1)/2) = (2m+1) - m = m+1 = ceil((2m+1)/2) = ceil(n/2)`.
5.  Como se mostró en el enfoque (a), es posible, mediante una estrategia de combinación adecuada, hacer que estos `ceil(n / 2)` palos finales tengan todos la misma longitud (generalmente longitud `n` o `n-1`).
6.  Por lo tanto, el máximo número `k` de palos de igual longitud es `ceil(n / 2)`.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer el entero `n`.
    b.  Calcular `k = n / 2` usando división entera.
    c.  Si `n` es impar (`n % 2 == 1`), sumar 1 a `k`. (Esto calcula `ceil(n/2)`).
    d.  Alternativamente, calcular `k = (n + 1) / 2` usando división entera.
    e.  Imprimir `k`.

## Notas Adicionales
*   **Interpretación:** La clave es entender que la operación de "combinar" reduce el número total de palos. El número final de palos limita el máximo `k` posible.
*   **Cálculo de Techo:** La fórmula `(N / 2) + (N % 2)` (con división entera) es una forma común y eficiente de calcular `ceil(N / 2)` para enteros positivos `N`. Otra forma es `(N + 1) / 2` (con división entera).

## Complejidad

| Tipo        | Complejidad (por caso) |
| :---------- | :--------------------- |
| Temporal    | O(1)                   |
| Espacial    | O(1)                   |

*La complejidad por caso de prueba es constante O(1), ya que solo implica leer un número y realizar operaciones aritméticas básicas.*