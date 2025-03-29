# 1551A - Polycarp and Coins

**Enlace:** https://codeforces.com/problemset/problem/1551/A

## Resumen del problema
Polycarp necesita pagar exactamente `n` rublos. Solo tiene dos tipos de monedas: de 1 rublo y de 2 rublos. Quiere pagar la cantidad exacta usando una combinación de estas monedas. Como tiene muchas monedas de ambos tipos, quiere elegir una combinación de `c1` monedas de 1 rublo y `c2` monedas de 2 rublos tal que:
1.  El valor total sea `n`: `c1 * 1 + c2 * 2 = n`.
2.  El número total de monedas usadas (`c1 + c2`) sea el mínimo posible. O, equivalentemente (como se indica en el enunciado original y se deduce de la solución), la diferencia absoluta entre la cantidad de monedas de 1 rublo y la cantidad de monedas de 2 rublos (`|c1 - c2|`) sea mínima.

Debes encontrar un par de enteros no negativos `c1` y `c2` que cumplan estas condiciones. Se garantiza que siempre existe una solución.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 10⁴), el número de casos de prueba.
-   Cada una de las siguientes `t` líneas contiene un solo entero `n` (1 <= n <= 10⁹), la cantidad total a pagar.

## Output
Para cada caso de prueba, imprime dos enteros `c1` y `c2` separados por un espacio, que cumplan las condiciones. Si hay múltiples pares que minimizan `|c1 - c2|`, cualquiera es válido.

## Restricciones

| Variable      | Rango      |
| :------------ | :--------- |
| t (casos)     | [1, 10⁴]   |
| n (rublos)    | [1, 10⁹]   |

## Ejemplos

| Input   | n    | n % 3 | c1      | c2      | Suma     | \|c1-c2\| | Output   |
| :------ | :--- | :---- | :------ | :------ | :------- | :-------- | :------- |
| 7 <br> 1000 | 1000 | 1     | 334     | 333     | 334+666=1000 | 1         | `334 333`|
| 7 <br> 30   | 30   | 0     | 10      | 10      | 10+20=30   | 0         | `10 10`  |
| 7 <br> 1    | 1    | 1     | 1       | 0       | 1+0=1      | 1         | `1 0`    |
| 7 <br> 2    | 2    | 2     | 0       | 1       | 0+2=2      | 1         | `0 1`    |
| 7 <br> 3    | 3    | 0     | 1       | 1       | 1+2=3      | 0         | `1 1`    |
| 7 <br> 12   | 12   | 0     | 4       | 4       | 4+8=12     | 0         | `4 4`    |
| 7 <br> 999999999 | 999... | 0 | 333...3 | 333...3 | n        | 0         | `333333333 333333333` |

## Forma de resolverlo

### a) Enfoque Algorítmico (Priorizando Monedas de 2)
Para minimizar el número total de monedas (`c1+c2`) o la diferencia `|c1-c2|`, intuitivamente, deberíamos usar tantas monedas de 2 rublos como sea posible, ya que valen más.
1.  **Idea Inicial:** Intenta usar `n / 2` (división entera) monedas de 2 rublos. Esto suma `2 * (n // 2)`.
2.  **Ajuste:** La suma podría ser `n` (si `n` es par) o `n-1` (si `n` es impar). El resto necesario es `n - 2 * (n // 2)`, que es `0` si `n` es par y `1` si `n` es impar (o `n % 2`). Este resto debe cubrirse con monedas de 1 rublo.
3.  **Solución Preliminar:** `c1 = n % 2`, `c2 = n // 2`. Suma: `1*(n%2) + 2*(n//2) = n`.
4.  **Minimizar Diferencia:** La solución anterior (`c1=n%2`, `c2=n//2`) es válida, pero ¿minimiza `|c1 - c2|`? Consideremos `n=3`. Esta da `c1=1, c2=1`. Diferencia 0. Consideremos `n=4`. Esta da `c1=0, c2=2`. Diferencia 2. Pero `c1=2, c2=1` también suma 4 y tiene diferencia 1. Parece que necesitamos equilibrar mejor `c1` y `c2`.
5.  **Equilibrio Ideal:** La combinación `c1*1 + c2*2 = n` es cercana a `c1+c2+c2 = n`, o `3 * (promedio de c1 y c2) ≈ n`. Esto sugiere que `c1` y `c2` deberían estar cerca de `n/3`.
6.  **Basado en n/3:** Sea `q = n // 3`.
    *   Si `n = 3q` (`n % 3 == 0`), la elección `c1 = q, c2 = q` funciona (`1*q + 2*q = 3q = n`) y da diferencia 0, la mínima posible.
    *   Si `n = 3q + 1` (`n % 3 == 1`), necesitamos `1*c1 + 2*c2 = 3q + 1`. Probemos con `c1, c2` cercanos a `q`. Si `c1 = q+1, c2 = q`, la suma es `(q+1) + 2q = 3q + 1 = n`. La diferencia es `|q+1 - q| = 1`. ¿Podemos obtener diferencia 0? No, porque `c1 + 2c2` tendría que ser múltiplo de 3 si `c1=c2`. Así que la diferencia 1 es mínima.
    *   Si `n = 3q + 2` (`n % 3 == 2`), necesitamos `1*c1 + 2*c2 = 3q + 2`. Probemos con `c1, c2` cercanos a `q`. Si `c1 = q, c2 = q+1`, la suma es `q + 2(q+1) = q + 2q + 2 = 3q + 2 = n`. La diferencia es `|q - (q+1)| = 1`. La diferencia 0 es imposible. Así que la diferencia 1 es mínima.

### b) Enfoque Matemático (Resolviendo Ecuación Diofántica)
Buscamos enteros no negativos `c1, c2` tales que `c1 + 2c2 = n` y `|c1 - c2|` sea mínimo.
1.  De la ecuación, `c1 = n - 2c2`.
2.  Queremos minimizar `|c1 - c2| = |(n - 2c2) - c2| = |n - 3c2|`.
3.  Minimizar `|n - 3c2|` significa que queremos que `3c2` sea lo más cercano posible a `n`.
4.  El múltiplo de 3 más cercano a `n` se relaciona con `n % 3`.
    *   Si `n % 3 == 0`: El múltiplo de 3 más cercano es `n` mismo. Queremos `3c2 = n`, así que `c2 = n / 3`. Entonces `c1 = n - 2(n/3) = n/3`. Par: `(n/3, n/3)`.
    *   Si `n % 3 == 1`: Los múltiplos de 3 más cercanos a `n` son `n-1` y `n+2`.
        *   Si `3c2 = n-1`, entonces `c2 = (n-1)/3`. `c1 = n - 2(n-1)/3 = (3n - 2n + 2)/3 = (n+2)/3`. Diferencia `|c1-c2| = |(n+2)/3 - (n-1)/3| = |3/3| = 1`. Esto corresponde a `c2 = n//3` y `c1 = n//3 + 1`.
        *   Si `3c2 = n+2`, entonces `c2 = (n+2)/3`. `c1 = n - 2(n+2)/3 = (3n - 2n - 4)/3 = (n-4)/3`. Diferencia `|c1-c2| = |(n-4)/3 - (n+2)/3| = |-6/3| = 2`.
        *   La mínima diferencia es 1, obtenida con `c1 = n//3 + 1, c2 = n//3`.
    *   Si `n % 3 == 2`: Los múltiplos de 3 más cercanos a `n` son `n-2` y `n+1`.
        *   Si `3c2 = n-2`, entonces `c2 = (n-2)/3`. `c1 = n - 2(n-2)/3 = (3n - 2n + 4)/3 = (n+4)/3`. Diferencia `|c1-c2| = |(n+4)/3 - (n-2)/3| = |6/3| = 2`.
        *   Si `3c2 = n+1`, entonces `c2 = (n+1)/3`. `c1 = n - 2(n+1)/3 = (3n - 2n - 2)/3 = (n-2)/3`. Diferencia `|c1-c2| = |(n-2)/3 - (n+1)/3| = |-3/3| = 1`. Esto corresponde a `c2 = n//3 + 1` y `c1 = n//3`.
        *   La mínima diferencia es 1, obtenida con `c1 = n//3, c2 = n//3 + 1`.

## Algoritmo (Reflejando la lógica del código)
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer el total `n`.
    b.  Calcular el cociente base `q = n // 3`.
    c.  Calcular el residuo `rem = n % 3`.
    d.  Inicializar `c1` y `c2` con `q`.
    e.  **Si `rem == 1`:** Incrementar `c1` en 1.
    f.  **Si `rem == 2`:** Incrementar `c2` en 1.
    g.  Imprimir `c1` y `c2` separados por un espacio.

## Notas Adicionales
*   **Objetivo Doble:** Aunque el enunciado menciona minimizar `c1+c2`, la condición de minimizar `|c1-c2|` (que es lo que la solución estándar y el código hacen) también resulta en una solución válida y es más fácil de derivar.
*   **División por 3:** La solución depende fundamentalmente del residuo de `n` al dividir por 3.

## Complejidad

| Tipo        | Complejidad (por caso) |
| :---------- | :--------------------- |
| Temporal    | O(1)                   |
| Espacial    | O(1)                   |

*La complejidad por caso de prueba es constante O(1), ya que solo se requiere división entera, módulo y unas pocas sumas/comparaciones.*