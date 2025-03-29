# 1343B - Balanced Array

**Enlace:** https://codeforces.com/problemset/problem/1343/B

## Resumen del problema
Se te pide construir un arreglo `a` de longitud `n` que cumpla las siguientes condiciones:
1.  `n` debe ser par.
2.  Los primeros `n/2` elementos del arreglo deben ser números pares.
3.  Los segundos `n/2` elementos del arreglo deben ser números impares.
4.  Todos los elementos del arreglo deben ser distintos y positivos.
5.  La suma de la primera mitad de los elementos debe ser igual a la suma de la segunda mitad.

Debes determinar si tal arreglo existe para un `n` dado. Si existe, debes imprimir "YES" y un ejemplo de dicho arreglo. Si no existe, debes imprimir "NO". Este es un problema de tipo constructivo con un análisis basado en paridad y sumas.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 100), el número de casos de prueba.
-   Cada una de las siguientes `t` líneas contiene un solo entero `n` (2 <= n <= 2 * 10⁵, y `n` es siempre par), la longitud deseada del arreglo.

## Output
Para cada caso de prueba:
-   Si no existe un arreglo balanceado de longitud `n`, imprime "NO".
-   Si existe, imprime "YES" en la primera línea y en la segunda línea imprime los `n` elementos del arreglo construido, separados por espacios. Si hay múltiples soluciones, cualquiera es válida.

## Restricciones

| Variable      | Rango              | Notas                     |
| :------------ | :----------------- | :------------------------ |
| t (casos)     | [1, 100]           |                           |
| n (longitud)  | [2, 2 * 10⁵]     | Garantizado ser par        |
| Suma total de n | <= 2 * 10⁵       | Suma de n en todos los tests |

## Ejemplos

| Input | n   | Condición | Output                      | Explicación                                    |
| :---- | :-- | :-------- | :-------------------------- | :--------------------------------------------- |
| 5 <br> 2 | 2   | 2%4!=0    | NO                          | n/2=1. Suma par=Suma impar? Imposible.        |
| 5 <br> 4 | 4   | 4%4==0    | YES <br> 2 4 1 5           | Pares: [2, 4] (Suma=6). Impares: [1, 5] (Suma=6). |
| 5 <br> 6 | 6   | 6%4!=0    | NO                          | n/2=3. Suma(Pares)=12, Suma(Impares)=9. Dif=3 (impar). |
| 5 <br> 8 | 8   | 8%4==0    | YES <br> 2 4 6 8 1 3 5 11 | Pares: [2,4,6,8](S=20). Impares: [1,3,5,11](S=20). |
| 5 <br> 10 | 10  | 10%4!=0   | NO                          | n/2=5. Suma(Pares)=30, Suma(Impares)=25. Dif=5 (impar). |

## Forma de resolverlo

### a) Enfoque Algorítmico (Construcción Específica)
Podemos intentar construir el arreglo directamente. Una construcción simple y común es:
1.  **Primera Mitad (Pares):** Usar los primeros `n/2` números pares positivos: `2, 4, 6, ..., n`.
2.  **Segunda Mitad (Impares):** Intentar usar los primeros `n/2` números impares positivos: `1, 3, 5, ..., n-1`.
3.  **Verificar Sumas:** Calcular la suma de la primera mitad (`SumPares`) y la suma de la segunda mitad (`SumImpares`).
    *   `SumPares = 2 + 4 + ... + n = 2 * (1 + 2 + ... + n/2) = 2 * (n/2 * (n/2 + 1) / 2) = n/2 * (n/2 + 1) = n²/4 + n/2`.
    *   `SumImpares = 1 + 3 + ... + (n-1)`. Esta es la suma de los primeros `n/2` impares, que es `(n/2)² = n²/4`.
4.  **Diferencia:** La diferencia entre las sumas es `SumPares - SumImpares = (n²/4 + n/2) - n²/4 = n/2`.
5.  **Ajuste:** Para que las sumas sean iguales, necesitamos aumentar la suma de los impares en `n/2` sin introducir números pares ni duplicados. Podemos lograr esto modificando *solo el último número impar*. En lugar de usar `n-1` como último impar, usamos los primeros `n/2 - 1` impares (`1, 3, ..., n-3`) y un último impar `X` tal que la suma total sea `n²/4 + n/2`.
    *   Suma de `1, 3, ..., n-3` es `(n/2 - 1)² = n²/4 - n + 1`.
    *   Necesitamos: `(n²/4 - n + 1) + X = n²/4 + n/2`.
    *   Resolviendo para `X`: `X = (n²/4 + n/2) - (n²/4 - n + 1) = n/2 + n - 1 = 3n/2 - 1`.
6.  **Construcción Final:** El arreglo propuesto es `[2, 4, ..., n, 1, 3, ..., n-3, 3n/2 - 1]`.
7.  **Condición de Validez:** ¿Cuándo funciona esta construcción?
    *   Todos los elementos deben ser distintos y positivos (esto se cumple si n>=4).
    *   El último elemento `3n/2 - 1` debe ser impar. `3n/2` será entero solo si `n` es par (lo cual está garantizado). Si `n/2` es par (i.e., `n` es divisible por 4), `3n/2` es par, y `3n/2 - 1` es impar. Si `n/2` es impar (i.e., `n % 4 == 2`), `3n/2` es impar, y `3n/2 - 1` es par, lo cual viola la condición de que la segunda mitad sea impar.
    *   Por lo tanto, la construcción solo funciona si `n` es divisible por 4.

### b) Enfoque Matemático (Análisis de Paridad de la Diferencia)
1.  Sea `S_p` la suma de los `n/2` números pares y `S_i` la suma de los `n/2` números impares. Necesitamos `S_p = S_i`.
2.  La suma de `n/2` números pares siempre es par. (Par + Par + ... = Par).
3.  La suma de `n/2` números impares depende de la paridad de `n/2`:
    *   Si `n/2` es par (i.e., `n % 4 == 0`), la suma de `n/2` impares es par (Impar+Impar+...+Impar (par veces) = Par).
    *   Si `n/2` es impar (i.e., `n % 4 == 2`), la suma de `n/2` impares es impar (Impar+Impar+...+Impar (impar veces) = Impar).
4.  Para que `S_p = S_i`, ambas sumas deben tener la misma paridad. Como `S_p` siempre es par, `S_i` también debe ser par.
5.  Esto implica que `n/2` debe ser par, lo que significa que `n` debe ser divisible por 4.
6.  Por lo tanto, si `n % 4 != 0`, es imposible construir tal arreglo. Si `n % 4 == 0`, la construcción descrita en a) demuestra que es posible.

La condición `n % 4 == 0` es necesaria y suficiente.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Verificar si `n` es divisible por 4 (`n % 4 == 0`).
    c.  **Si `n % 4 != 0`:** Imprimir "NO".
    d.  **Si `n % 4 == 0`:**
        i.   Imprimir "YES".
        ii.  Imprimir la primera mitad: `2, 4, 6, ..., n`. (Iterar `i` de 1 a `n/2`, imprimir `2*i`).
        iii. Imprimir la segunda mitad: `1, 3, 5, ..., n-3`, seguido de `3n/2 - 1`. (Iterar `i` de 1 a `n/2 - 1`, imprimir `2*i - 1`. Luego imprimir `(n//2) * 3 - 1`). Asegurarse de manejar los espacios correctamente.
        iv.  Imprimir un salto de línea al final del arreglo.

## Notas Adicionales
*   **Condición Clave:** La divisibilidad de `n` por 4 es la única condición a verificar para determinar la existencia del arreglo.
*   **Construcción:** La construcción `[2, 4, ..., n, 1, 3, ..., n-3, 3n/2 - 1]` es una forma estándar de generar una solución válida cuando `n % 4 == 0`.

## Complejidad

| Tipo        | Complejidad (por caso) |
| :---------- | :--------------------- |
| Temporal    | O(N)                   |
| Espacial    | O(1) (sin contar salida)|

*La complejidad temporal por caso es O(N) porque, si existe solución, necesitamos generar e imprimir N números. La verificación de la condición es O(1). La complejidad espacial es O(1) si generamos los números al vuelo para imprimirlos.*