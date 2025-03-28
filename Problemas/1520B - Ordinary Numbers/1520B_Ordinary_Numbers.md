# 1520B - Ordinary Numbers

**Enlace:** https://codeforces.com/problemset/problem/1520/B

## Resumen del problema
Un número entero positivo se llama "ordinario" si todos sus dígitos en su representación decimal son iguales. Por ejemplo, 1, 2, 99, 777, 4444 son números ordinarios, mientras que 12, 101, 788 no lo son. Dado un número `n`, necesitas contar cuántos números ordinarios `k` existen tales que `1 <= k <= n`.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 10⁴), el número de casos de prueba.
-   Cada una de las siguientes `t` líneas contiene un solo entero `n` (1 <= n <= 10⁹).

## Output
Para cada caso de prueba, imprime un solo entero: la cantidad de números ordinarios menores o iguales a `n`.

## Restricciones

| Variable      | Rango      |
| :------------ | :--------- |
| t (casos)     | [1, 10⁴]   |
| n (límite)    | [1, 10⁹]   |

## Ejemplos

| Input    | n     | Números Ordinarios <= n                               | Count | Output |
| :------- | :---- | :---------------------------------------------------- | :---- | :----- |
| 6 <br> 1  | 1     | 1                                                   | 1     | `1`    |
| 6 <br> 2  | 2     | 1, 2                                                | 2     | `2`    |
| 6 <br> 3  | 3     | 1, 2, 3                                             | 3     | `3`    |
| 6 <br> 10 | 10    | 1, 2, 3, 4, 5, 6, 7, 8, 9                           | 9     | `9`    |
| 6 <br> 100| 100   | (1..9), (11..99) -> 1, ..., 9, 11, 22, ..., 99        | 9+9=18| `18`   |
| 6 <br> 123| 123   | (1..9), (11..99), 111                                 | 9+9+1=19| `19`   |
| 6 <br> 99 | 99    | (1..9), (11..99)                                      | 9+9=18| `18`   |

## Forma de resolverlo

### a) Enfoque Algorítmico (Generación y Conteo)
La idea es generar sistemáticamente todos los números ordinarios posibles y contar cuántos de ellos son menores o iguales a `n`. Dado que `n <= 10⁹`, el número ordinario más grande que podría ser relevante es 999,999,999 (9 dígitos). Los números ordinarios tienen una estructura muy regular: están definidos por el dígito que se repite (1 a 9) y el número de veces que se repite (1 a 9 dígitos, ya que 1,111,111,111 ya es > 10⁹).
1.  Itera a través de los posibles dígitos repetidos, `d`, desde 1 hasta 9.
2.  Para cada dígito `d`, genera los números ordinarios formados por él: `d`, `dd`, `ddd`, `dddd`, ...
3.  Esto se puede hacer comenzando con `ord_num = d` y en cada paso actualizando `ord_num = ord_num * 10 + d`.
4.  Continúa generando estos números para el dígito `d` mientras `ord_num <= n`.
5.  Cada vez que generes un `ord_num` que cumpla `ord_num <= n`, incrementa un contador total.
6.  Repite para todos los dígitos `d` del 1 al 9. El valor final del contador es la respuesta.
*Alternativa (como en el código):* En lugar de generar secuencialmente (`d, dd, ddd...`), puedes usar bucles anidados: bucle exterior para el dígito `d` (1-9) y bucle interior para la longitud `L` (1-9). Dentro, construyes el número ordinario de longitud `L` con dígito `d` y verificas si es `<= n`.
### a)
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer el límite superior `n`.
    b.  Inicializar un contador `numeros_ordinarios = 0`.
    c.  Iterar a través de los posibles dígitos `d` (desde 1 hasta 9).
    d.  Para cada dígito `d`, iterar a través de las posibles longitudes `l` (desde 1 hasta 9, ya que 10 dígitos excederían 10⁹).
        i.  Construir o calcular el número ordinario `ord_num` que consiste en el dígito `d` repetido `l` veces. (Por ejemplo, usando la fórmula `d * (10^l - 1) / 9` o construyéndolo iterativamente).
        ii. Si `ord_num` es mayor que `n`, se puede detener la iteración de longitudes para el dígito `d` actual (ya que longitudes mayores también excederán `n`).
        iii. Si `ord_num <= n`, incrementar `numeros_ordinarios`.
    e.  Después de completar los bucles para todos los dígitos y longitudes relevantes, imprimir `numeros_ordinarios`.
### b) Enfoque Matemático (Conteo por Longitud)
Podemos contar cuántos números ordinarios hay para cada posible longitud y sumar.
1.  **Números de 1 dígito:** Hay 9 (1, 2, ..., 9). Todos son <= n (ya que n >= 1).
2.  **Números de 2 dígitos:** Hay 9 (11, 22, ..., 99).
3.  **Números de L dígitos:** Hay 9 (1...1, 2...2, ..., 9...9, todos con L dígitos).
4.  Sea `L_n` la cantidad de dígitos en `n`.
5.  Todos los números ordinarios con longitud menor a `L_n` (es decir, de 1 a `L_n - 1` dígitos) son definitivamente menores que `n`. Hay `9 * (L_n - 1)` de estos.
6.  Ahora considera los números ordinarios con exactamente `L_n` dígitos. Estos son `ord_L(d)`, donde `d` va de 1 a 9 y `L=L_n`.
7.  Necesitamos contar cuántos de estos `ord_L(d)` son menores o iguales a `n`. Iteramos `d` de 1 a 9 y verificamos si `ord_L(d) <= n`. Sea `count_L` este número.
8.  El resultado total es `9 * (L_n - 1) + count_L`.

## Algoritmo (Basado en Generación y Conteo)
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Inicializar `contador_ordinarios = 0`.
    c.  Iterar `digito` desde 1 hasta 9.
    d.  Inicializar `numero_actual_ordinario` con el valor de `digito`.
    e.  Mientras `numero_actual_ordinario <= n`:
        i.   Incrementar `contador_ordinarios`.
        ii.  Si `numero_actual_ordinario > n / 10`, romper el bucle interno para evitar overflow o procesamiento innecesario (ya que `numero_actual_ordinario * 10 + digito` seguramente excederá `n`).
        iii. Actualizar `numero_actual_ordinario = numero_actual_ordinario * 10 + digito`.
    f.  Después de iterar por todos los dígitos, imprimir `contador_ordinarios`.

## Notas Adicionales
*   **Número Limitado:** Hay muy pocos números ordinarios en total (máximo 9 dígitos * 9 tipos = 81) hasta 10⁹. Generarlos todos y contarlos es muy eficiente.
*   **Generación:** La fórmula `d * (10^L - 1) / 9` genera el número ordinario con dígito `d` y longitud `L`, pero la generación iterativa (`num = num * 10 + d`) suele ser más práctica en programación.

## Complejidad

| Tipo        | Complejidad (por caso) | Notas                                       |
| :---------- | :--------------------- | :------------------------------------------ |
| Temporal    | O(log N) o O(1)        | O(log N) si se genera iterativamente. O(1) porque el número total de ordinarios a chequear es constante (~81). |
| Espacial    | O(1)                   | No se necesita almacenamiento significativo. |

*La complejidad real es O(1) por caso de prueba, ya que el número de operaciones está limitado por el número total de números ordinarios posibles hasta 10⁹, que es una constante pequeña (81).*