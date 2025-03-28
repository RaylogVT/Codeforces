# 1472B - Fair Division

**Enlace:** https://codeforces.com/problemset/problem/1472/B

## Resumen del problema
Alice y Bob recibieron `n` caramelos. Cada caramelo pesa 1 gramo o 2 gramos. Quieren dividir *todos* los caramelos entre ellos dos de manera que el peso total de los caramelos que recibe Alice sea igual al peso total de los caramelos que recibe Bob. Debes determinar si tal división es posible.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 10⁴), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un entero `n` (1 <= n <= 100), el número de caramelos.
    -   La segunda línea contiene `n` enteros `w_1, w_2, ..., w_n`, donde `w_i` es 1 o 2, el peso de cada caramelo.

## Output
Para cada caso de prueba, imprime "YES" si los caramelos pueden dividirse equitativamente por peso, o "NO" en caso contrario.

## Restricciones

| Variable       | Rango      |
| :------------- | :--------- |
| t (casos)      | [1, 10⁴]   |
| n (caramelos)  | [1, 100]   |
| w_i (pesos)    | 1 ó 2      |

## Ejemplos

| Input           | n | Pesos w       | Total | Mitad | #1s | #2s | Cond1? | Cond2? | Output |
| :-------------- | :- | :------------ | :---- | :---- | :-- | :-- | :----- | :----- | :----- |
| 5 <br> 2 <br> 1 1 | 2 | [1, 1]        | 2     | 1     | 2   | 0   | Sí     | Sí (1 impar, #1s>=1) | `YES`  |
| 5 <br> 2 <br> 1 2 | 2 | [1, 2]        | 3     | N/A   | 1   | 1   | No     | N/A    | `NO`   |
| 5 <br> 4 <br> 1 2 1 2 | 4 | [1,2,1,2]     | 6     | 3     | 2   | 2   | Sí     | Sí (3 impar, #1s>=1) | `YES`  |
| 5 <br> 3 <br> 2 2 2 | 3 | [2, 2, 2]     | 6     | 3     | 0   | 3   | Sí     | No (3 impar, #1s=0)  | `NO`   |
| 5 <br> 6 <br> 1 1 1 1 1 1 | 6 | [1,1,1,1,1,1] | 6     | 3     | 6   | 0   | Sí     | Sí (3 impar, #1s>=1) | `YES`  |
| (Extra) 4 <br> 2 1 2 1 | 4 | [2,1,2,1] | 6 | 3 | 2 | 2 | Sí | Sí (3 impar, #1s>=1) | YES |
| (Extra) 4 <br> 2 2 2 2 | 4 | [2,2,2,2] | 8 | 4 | 0 | 4 | Sí | Sí (4 par) | YES |

## Forma de resolverlo

La posibilidad de dividir los caramelos equitativamente depende de dos factores clave: el peso total y la disponibilidad de caramelos de 1 gramo.

### a) Enfoque Algorítmico (Condiciones Necesarias)
1.  **Condición 1: Peso Total Par:** Calcula el peso total `S` de todos los caramelos. Si Alice y Bob reciben cada uno un peso `W`, entonces `2W = S`. Esto significa que el peso total `S` debe ser par. Si `S` es impar, es imposible dividir equitativamente, por lo que la respuesta es "NO".
2.  **Condición 2: Posibilidad de Formar la Mitad:** Si `S` es par, cada persona debe recibir un peso de `W = S / 2`. Ahora debemos verificar si es posible que *ambas* personas formen este peso `W` con los caramelos disponibles.
    *   Consideremos el peso objetivo `W`.
    *   Si `W` es par: Siempre es posible formar `W`. Podemos usar tantos caramelos de 2g como sea posible sin exceder `W`. La cantidad restante necesaria será par, y como el total `S` es par, el número total de caramelos de 1g debe ser par, por lo que siempre podemos usar pares de caramelos de 1g para completar la suma par si es necesario.
    *   Si `W` es impar: Para formar una suma impar `W`, *necesariamente* debemos usar al menos un caramelo de 1g (ya que los caramelos de 2g solo contribuyen con sumas pares). Por lo tanto, si el peso objetivo `W` es impar, debemos verificar si hay al menos un caramelo de 1g disponible (`count1 >= 1`). Si no hay caramelos de 1g, es imposible formar `W` y la respuesta es "NO". Si hay al menos uno, es posible.
3.  **Combinando Condiciones:**
    *   Si `S` es impar -> "NO".
    *   Si `S` es par:
        *   `W = S / 2`.
        *   Si `W` es par -> "YES".
        *   Si `W` es impar:
            *   Si hay al menos un caramelo de 1g -> "YES".
            *   Si no hay caramelos de 1g -> "NO".

### b) Enfoque Matemático (Análisis de Paridad)
Sea `c1` el número de caramelos de 1g y `c2` el número de caramelos de 2g.
El peso total es `S = c1 * 1 + c2 * 2 = c1 + 2*c2`.
1.  Para una división equitativa, `S` debe ser par. Como `2*c2` siempre es par, `S` es par si y solo si `c1` es par.
2.  Si `S` es par, el peso objetivo para cada persona es `W = S / 2 = (c1 + 2*c2) / 2 = c1/2 + c2`.
3.  Ahora analizamos la paridad de `W`:
    *   Si `c2` es par: `W` tiene la misma paridad que `c1/2`. Si `c1` es par (necesario para `S` par), `c1/2` puede ser par (si `c1` es múltiplo de 4) o impar (si `c1` es 2 mod 4).
    *   Si `c2` es impar: `W = c1/2 + impar`. Si `c1` es par, `c1/2` es entero. `W` será impar si `c1/2` es par, y `W` será par si `c1/2` es impar.
4.  Esta línea de razonamiento se complica. Volvamos al enfoque más simple:
    *   **Necesario:** `S` debe ser par.
    *   **Necesario:** Si el objetivo `W = S/2` es impar, debemos tener `c1 >= 1`.
5.  ¿Son estas condiciones suficientes?
    *   Si `S` es par y `W` es par: Sabemos que `c1` es par. Podemos dar `W/2` caramelos de 2g a cada uno si `c2 >= W/2`. Si no, usamos todos los `c2` y los distribuimos, y usamos los `c1` (que son pares) para completar. Siempre funciona.
    *   Si `S` es par, `W` es impar, y `c1 >= 1`: Sabemos que `c1` es par (porque `S` es par). Como `W` es impar, requiere al menos un caramelo de 1g. ¿Podemos siempre formar `W`? Sí, podemos usar caramelos de 2g y un número adecuado (impar) de caramelos de 1g para llegar a `W`. Como `c1` es par y `>= 1`, `c1 >= 2`. Siempre tenemos suficientes caramelos de 1g para ambos si es necesario.
6.  **Conclusión Simplificada:** La única forma en que falla es si `S` es impar, o si `S` es par pero el objetivo `W=S/2` es impar *y* no tenemos caramelos de 1g (`c1=0`).

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer la lista de pesos `w`.
    c.  Contar el número de caramelos de 1g (`count1`) y de 2g (`count2`).
    d.  Calcular el peso total `total = count1 + 2 * count2`.
    e.  **Si `total % 2 != 0`:** Imprimir "NO".
    f.  **Si `total % 2 == 0`:**
        i.  Calcular el peso objetivo `mitad = total / 2`.
        ii. **Si `mitad % 2 == 0`:** Imprimir "YES".
        iii. **Si `mitad % 2 != 0`:**
            *   **Si `count1 >= 1`:** Imprimir "YES".
            *   **Si `count1 == 0`:** Imprimir "NO".

## Notas Adicionales
*   **Condición Clave:** La posibilidad depende de si el peso total es par y, si la mitad del peso es impar, si existe al menos un caramelo de 1 gramo.
*   **Paridad de `count1`:** Note que si el `total` es par, entonces `count1` *debe* ser par. Esto simplifica la comprobación de suficiencia.

## Complejidad

| Tipo        | Complejidad (por caso) |
| :---------- | :--------------------- |
| Temporal    | O(N)                   |
| Espacial    | O(N) / O(1) (aux)      |

*La complejidad temporal es O(N) para leer la entrada y contar los pesos (o calcular la suma). La complejidad espacial es O(N) si se almacena la lista de pesos, pero O(1) auxiliar si solo se mantienen los conteos.*