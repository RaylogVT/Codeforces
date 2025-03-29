# 1294A - Collecting Coins

**Enlace:** https://codeforces.com/problemset/problem/1294/A

## Resumen del problema
Hay tres hermanas: Alice, Barbara y Cerene, con `a`, `b` y `c` monedas respectivamente. Polycarp tiene `n` monedas adicionales. Polycarp quiere distribuir *exactamente* sus `n` monedas entre las tres hermanas (dando algunas a Alice, otras a Barbara y otras a Cerene; puede dar cero monedas a algunas). El objetivo es determinar si es posible distribuir las `n` monedas de tal manera que, al final, las tres hermanas tengan el *mismo* número de monedas. Este es un problema de lógica y matemática básica.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 10⁴), el número de casos de prueba.
-   Cada una de las siguientes `t` líneas describe un caso de prueba y contiene cuatro enteros: `a`, `b`, `c` y `n` (1 <= a, b, c, n <= 10⁹), las monedas iniciales de Alice, Barbara, Cerene y las monedas de Polycarp, respectivamente.

## Output
Para cada caso de prueba, imprime "YES" si es posible distribuir las `n` monedas para que las tres hermanas terminen con la misma cantidad, o "NO" en caso contrario.

## Restricciones

| Variable         | Rango      |
| :--------------- | :--------- |
| t (casos prueba) | [1, 10⁴]   |
| a, b, c, n       | [1, 10⁹]   |

## Ejemplos

| Input            | a,b,c,n | Total | Target | max(a,b,c)| Cond1? | Cond2? | Razonamiento                                                                  | Output |
| :--------------- | :------ | :---- | :----- | :-------- | :----- | :----- | :---------------------------------------------------------------------------- | :----- |
| 4 <br> 5 3 2 8    | 5,3,2,8 | 18    | 6      | 5         | Sí (18%3=0) | Sí (6>=5) | Total=18. Target=6. 6>=5, 6>=3, 6>=2. Es posible (e.g., A+1, B+3, C+4)   | `YES`  |
| 4 <br> 100 100 100 1 | 100,...1| 301   | N/A    | 100       | No (301%3!=0)| N/A    | Total 301 no es divisible por 3.                                              | `NO`   |
| 4 <br> 1 1 1 100  | 1,1,1,100| 103   | N/A    | 1         | No (103%3!=0)| N/A    | Total 103 no es divisible por 3.                                              | `NO`   |
| 4 <br> 10 20 15 2  | 10,20,15,2| 47    | N/A    | 20        | No (47%3!=0) | N/A    | Total 47 no es divisible por 3.                                              | `NO`   |
| (Caso extra) <br> 1 1 10 3 | 1,1,10,3 | 15    | 5      | 10        | Sí (15%3=0) | No (5<10) | Total=15. Target=5. Pero Cerene ya tiene 10 (>5), imposible.          | `NO`   |

## Forma de resolverlo

### a) Enfoque Algorítmico (Condiciones Necesarias)
Para que sea posible lograr el objetivo, deben cumplirse dos condiciones fundamentales:
1.  **Divisibilidad del Total:** Si las tres hermanas terminan con la misma cantidad de monedas, digamos `k` cada una, entonces la suma total de todas las monedas (`a + b + c + n`) debe ser igual a `3k`. Esto significa que la suma total *debe ser divisible por 3*. Si `(a + b + c + n) % 3 != 0`, es imposible.
2.  **Alcanzabilidad del Objetivo:** Si la primera condición se cumple, podemos calcular el número objetivo de monedas que cada hermana debe tener: `target = (a + b + c + n) / 3`. Como Polycarp solo puede *añadir* monedas (o añadir cero), es imposible que una hermana termine con el `target` si ya empezó con *más* que eso. Por lo tanto, cada hermana debe empezar con una cantidad menor o igual al `target`. Es decir, debemos verificar que `a <= target`, `b <= target` y `c <= target`. Una forma rápida de verificar esto es comprobar si la *cantidad máxima* inicial entre las hermanas (`max(a, b, c)`) es menor o igual al `target`. Si `max(a, b, c) > target`, es imposible.

Si ambas condiciones se cumplen, siempre es posible distribuir las monedas. (La cantidad necesaria para cada hermana es `target - a`, `target - b`, `target - c`. La suma de estas cantidades es `3*target - (a+b+c) = (a+b+c+n) - (a+b+c) = n`, que es exactamente la cantidad de monedas que tiene Polycarp).

### b) Enfoque Matemático (Ecuaciones y Desigualdades)
Sea `k` la cantidad final de monedas de cada hermana. Sean `n_a, n_b, n_c` las monedas que Polycarp da a Alice, Barbara y Cerene respectivamente. Debemos cumplir:
1.  `a + n_a = k`
2.  `b + n_b = k`
3.  `c + n_c = k`
4.  `n_a + n_b + n_c = n`
5.  `n_a >= 0, n_b >= 0, n_c >= 0`

Sumando las ecuaciones 1, 2 y 3:
`(a + b + c) + (n_a + n_b + n_c) = 3k`
Usando la ecuación 4:
`a + b + c + n = 3k`

De esta ecuación derivamos la **primera condición necesaria**: `(a + b + c + n)` debe ser divisible por 3. Si lo es, entonces `k = (a + b + c + n) / 3`.

Ahora, usamos la condición 5 y las ecuaciones 1, 2, 3:
*   `n_a = k - a >= 0`  => `k >= a`
*   `n_b = k - b >= 0`  => `k >= b`
*   `n_c = k - c >= 0`  => `k >= c`

Estas desigualdades forman la **segunda condición necesaria**: el valor objetivo `k` debe ser mayor o igual que las cantidades iniciales de cada hermana.

Si ambas condiciones necesarias se cumplen, la distribución es posible.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `a`, `b`, `c`, `n`.
    b.  Calcular la suma total: `total = a + b + c + n`.
    c.  Verificar la primera condición: ¿Es `total % 3 == 0`?
    d.  **Si no es divisible por 3:** Imprimir "NO".
    e.  **Si es divisible por 3:**
        i.  Calcular el objetivo: `target = total / 3`.
        ii. Verificar la segunda condición: ¿Es `target >= a` Y `target >= b` Y `target >= c`? (O equivalentemente: ¿Es `target >= max(a, b, c)`?)
        iii. **Si la segunda condición se cumple:** Imprimir "YES".
        iv. **Si la segunda condición no se cumple:** Imprimir "NO".

## Notas Adicionales
*   **Condiciones Necesarias y Suficientes:** Las dos condiciones verificadas (divisibilidad total y alcanzabilidad del objetivo) no solo son necesarias, sino también suficientes para garantizar que la distribución es posible.
*   **Tipos de Datos:** Dado que `a, b, c, n` pueden ser hasta 10⁹, la suma total puede exceder 3*10⁹. Es importante usar tipos de datos que puedan manejar estos valores (ej. `long long` en C++). Python maneja enteros grandes automáticamente.

## Complejidad

| Tipo        | Complejidad (por caso) |
| :---------- | :--------------------- |
| Temporal    | O(1)                   |
| Espacial    | O(1)                   |

*La complejidad por cada caso de prueba es constante, ya que solo implica realizar unos pocos cálculos aritméticos y comparaciones, independientemente de la magnitud de los números (dentro de los límites del tipo de dato).*