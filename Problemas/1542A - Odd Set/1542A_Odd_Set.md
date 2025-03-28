# 1542A - Odd Set

**Enlace:** https://codeforces.com/problemset/problem/1542/A

## Resumen del problema
Se te da un multiconjunto (puede contener elementos repetidos) con `2n` números enteros. Tu tarea es determinar si es posible dividir este multiconjunto en exactamente `n` pares de números, de tal manera que la suma de los dos números en *cada* par sea impar. Este problema pone a prueba la comprensión básica de las propiedades de paridad (par/impar) en la suma.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 100), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un entero `n` (1 <= n <= 100).
    -   La segunda línea contiene `2n` enteros `a_1, a_2, ..., a_{2n}` (0 <= a_i <= 100), los elementos del multiconjunto.

## Output
Para cada caso de prueba, imprime "YES" si es posible dividir el multiconjunto en `n` pares con suma impar, o "NO" en caso contrario.

## Restricciones

| Variable         | Rango      |
| :--------------- | :--------- |
| t (casos)        | [1, 100]   |
| n (pares a formar)| [1, 100]   |
| a_i (elementos)  | [0, 100]   |

## Ejemplos

| Input       | n | Multiset a     | #Odds | #Evens | #Odds == n? | Possible? | Output |
| :---------- | :- | :------------- | :---- | :----- | :---------- | :-------- | :----- |
| 5 <br> 2 <br> 2 3 4 5 | 2 | [2, 3, 4, 5]   | 2     | 2      | Sí (2 == 2) | Sí ({2,3},{4,5}) | `YES`  |
| 5 <br> 3 <br> 2 3 4 5 6 7 | 3 | [2,3,4,5,6,7]  | 3     | 3      | Sí (3 == 3) | Sí ({2,3},{4,5},{6,7}) | `YES`  |
| 5 <br> 2 <br> 2 4 6 8 | 2 | [2, 4, 6, 8]   | 0     | 4      | No (0 != 2) | No        | `NO`   |
| 5 <br> 1 <br> 1 1   | 1 | [1, 1]         | 2     | 0      | No (2 != 1) | No        | `NO`   |
| 5 <br> 1 <br> 1 2   | 1 | [1, 2]         | 1     | 1      | Sí (1 == 1) | Sí ({1,2})  | `YES`  |

## Forma de resolverlo

### a) Enfoque Algorítmico (Contando Paridades)
La estrategia se basa en la propiedad fundamental de la suma de números pares e impares:
-   Par + Par = Par
-   Impar + Impar = Par
-   Par + Impar = Impar

Para que la suma de un par sea impar, el par debe consistir obligatoriamente en un número par y un número impar.
1.  Si queremos formar `n` pares, y cada par debe tener un número par y uno impar, necesitamos exactamente `n` números pares y `n` números impares en el multiconjunto original de `2n` elementos.
2.  Por lo tanto, el algoritmo consiste en contar cuántos números impares (y/o pares) hay en el multiconjunto dado.
3.  Itera a través de los `2n` números del multiconjunto.
4.  Mantén un contador para los números impares (o para los números pares).
5.  Después de revisar todos los números, compara el contador de números impares con `n`.
6.  Si la cantidad de números impares es exactamente `n`, entonces la cantidad de números pares también será `2n - n = n`. En este caso, es posible formar los pares requeridos, y la respuesta es "YES".
7.  Si la cantidad de números impares no es `n`, entonces no tenemos la combinación necesaria de `n` pares y `n` impares, y es imposible formar los pares con suma impar. La respuesta es "NO".

### b) Enfoque Matemático (Condición de Paridad Balanceada)
Sea `O` el conjunto de números impares en el multiconjunto y `E` el conjunto de números pares. Sea `|O|` el número de elementos impares y `|E|` el número de elementos pares. El tamaño total del multiconjunto es `|O| + |E| = 2n`.
1.  Queremos formar `n` pares `(a_i, b_i)` tales que `a_i + b_i` sea impar para todo `i` de 1 a `n`.
2.  La condición `a_i + b_i` es impar implica que uno de los elementos (`a_i` o `b_i`) debe ser par y el otro impar.
3.  Para formar `n` de estos pares, necesitamos "consumir" un número impar y un número par por cada par.
4.  Esto requiere que tengamos disponibles exactamente `n` números impares y `n` números pares en total.
5.  Por lo tanto, la condición necesaria y suficiente para que la partición sea posible es que `|O| = n` (y consecuentemente, `|E| = n`).

## Algoritmo (Basado en el conteo de impares)
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer los `2n` números del multiconjunto.
    c.  Inicializar un contador `contador_impares = 0`.
    d.  Iterar a través de los `2n` números leídos.
    e.  Para cada número, verificar si es impar (`numero % 2 != 0`).
    f.  Si es impar, incrementar `contador_impares`.
    g.  Después de iterar por todos los números, comparar `contador_impares` con `n`.
    h.  Si `contador_impares == n`, imprimir "YES".
    i.  Si `contador_impares != n`, imprimir "NO".

## Notas Adicionales
*   **Condición Única:** La única condición que determina si la división es posible es si hay exactamente `n` números impares (y por lo tanto, `n` números pares) en el multiconjunto inicial.
*   **Multiconjunto:** El hecho de que sea un multiconjunto (valores repetidos permitidos) no afecta la lógica, solo contamos las paridades.

## Complejidad

| Tipo        | Complejidad (por caso) |
| :---------- | :--------------------- |
| Temporal    | O(N)                   |
| Espacial    | O(N) / O(1) (aux)      |

*La complejidad temporal es O(N) (o más precisamente O(2N)) porque necesitamos leer y verificar la paridad de los 2N números. La complejidad espacial es O(N) si almacenamos los números en una lista/vector, pero solo O(1) de espacio auxiliar si contamos las paridades al vuelo durante la lectura.*