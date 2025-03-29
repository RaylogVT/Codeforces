# 1426A - Floor Number

**Enlace:** https://codeforces.com/problemset/problem/1426/A

## Resumen del problema
En un edificio de apartamentos, el primer piso tiene exactamente 2 apartamentos, numerados 1 y 2. Cada piso subsiguiente (del segundo en adelante) tiene exactamente `x` apartamentos. Los apartamentos se numeran consecutivamente a medida que subes de piso (piso 1: 1, 2; piso 2: 3 a 2+x; piso 3: (2+x)+1 a (2+x)+x; etc.). Dado el número `n` del apartamento de Petya y el número `x` de apartamentos por piso (a partir del segundo), debes determinar en qué piso se encuentra el apartamento `n`.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 1000), el número de casos de prueba.
-   Cada una de las siguientes `t` líneas describe un caso de prueba y contiene dos enteros `n` y `x` (1 <= n <= 1000, 1 <= x <= 1000).

## Output
Para cada caso de prueba, imprime un solo entero: el número del piso donde se encuentra el apartamento `n`.

## Restricciones

| Variable      | Rango       |
| :------------ | :---------- |
| t (casos)     | [1, 1000]   |
| n (apto Petya)| [1, 1000]   |
| x (aptos/piso)| [1, 1000]   |

## Ejemplos

| Input   | n, x | Aptos Piso 1 | Aptos Piso 2 | Aptos Piso 3 | ... | Piso de n | Output |
| :------ | :--- | :----------- | :----------- | :----------- | :-- | :-------- | :----- |
| 4 <br> 7 3 | 7, 3 | 1, 2         | 3, 4, 5      | 6, **7**, 8      | ... | 3         | `3`    |
| 4 <br> 1 5 | 1, 5 | **1**, 2       | 3..7         | 8..12        | ... | 1         | `1`    |
| 4 <br> 2 5 | 2, 5 | 1, **2**       | 3..7         | 8..12        | ... | 1         | `1`    |
| 4 <br> 8 4 | 8, 4 | 1, 2         | 3, 4, 5, 6   | 7, **8**, 9, 10  | ... | 3         | `3`    |
| (Extra) 10 3| 10,3 | 1, 2         | 3, 4, 5      | 6, 7, 8      | 9, **10**, 11 | 4 | `4`    |


## Forma de resolverlo

### a) Enfoque Algorítmico (Simulación Piso por Piso)
Podemos simular la asignación de apartamentos a los pisos.
1.  **Piso 1:** Siempre contiene los apartamentos 1 y 2. Si `n` es 1 o 2, la respuesta es 1.
2.  **Pisos Superiores (n >= 3):** Para `n >= 3`, sabemos que Petya no vive en el piso 1. Empezamos a considerar a partir del piso 2.
    *   El piso 2 contiene los siguientes `x` apartamentos (del 3 al 2+x).
    *   El piso 3 contiene los siguientes `x` apartamentos (del (2+x)+1 al (2+x)+x).
    *   Y así sucesivamente.
3.  Podemos mantener un contador del piso actual (empezando en 2) y el rango de apartamentos cubierto hasta el piso anterior. Para `n >= 3`, los apartamentos en pisos superiores son `n-2` apartamentos en total (excluyendo los 2 del primer piso). Estos se distribuyen `x` por piso.
4.  Podemos calcular cuántos pisos completos (de `x` apartamentos cada uno) se necesitan para cubrir estos `n-2` apartamentos y en qué piso cae el apartamento `n`.

### b) Enfoque Matemático (Fórmula Directa)
Podemos derivar una fórmula para calcular el piso directamente.
1.  **Caso Base:** Si `n <= 2`, Petya está en el piso 1.
2.  **Caso General (n >= 3):**
    *   Los apartamentos 1 y 2 están en el piso 1.
    *   Consideremos los apartamentos restantes, del 3 al `n`. Hay `n - 2` de estos apartamentos.
    *   Estos `n - 2` apartamentos se distribuyen en grupos de `x` por cada piso, comenzando desde el piso 2.
    *   Queremos saber cuántos grupos de `x` se necesitan para alcanzar o superar el apartamento número `n-2` (relativo al inicio del piso 2).
    *   El número de pisos *adicionales* (después del piso 1) necesarios se calcula como `ceil((n - 2) / x)`. La función techo (`ceil`) se usa porque incluso si `n` cae en el primer apartamento de un nuevo piso, ese piso completo cuenta.
    *   El piso final es `1 (piso base) + ceil((n - 2) / x)`.
    *   Para calcular `ceil(A / B)` usando división entera para enteros positivos `A, B`, podemos usar `(A + B - 1) // B`. Así, para `n >= 3`, el número de pisos adicionales es `(n - 2 + x - 1) // x`.
    *   **Fórmula alternativa (más simple):** Los apartamentos en pisos `f >= 2` comienzan desde el apartamento 3. El número de apartamentos *antes* del apartamento `n` (en los pisos `f >= 2`) es `n - 3`. Estos `n-3` apartamentos ocupan `floor((n - 3) / x)` pisos completos *después* del piso 2. El apartamento `n` estará en el siguiente piso. Así, el piso es `2 (piso inicial) + floor((n - 3) / x)`. Esto se calcula como `2 + (n - 3) // x` usando división entera.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n` y `x`.
    b.  **Si `n <= 2`:** Imprimir 1.
    c.  **Si `n > 2`:**
        i.  Calcular `piso = 2 + (n - 3) // x` (usando división entera).
        ii. Imprimir `piso`.

## Notas Adicionales
*   **Estructura del Edificio:** La clave es entender la numeración: 2 apartamentos en el piso 1, y `x` en todos los demás.
*   **Cálculo del Techo:** La función techo es importante si se usa el enfoque `ceil((n-2)/x)`. El enfoque `2 + (n-3)//x` lo evita elegantemente para `n>=3`.

## Complejidad

| Tipo        | Complejidad (por caso) |
| :---------- | :--------------------- |
| Temporal    | O(1)                   |
| Espacial    | O(1)                   |

*La complejidad por caso de prueba es constante O(1), ya que solo implica leer dos números y realizar un número fijo de operaciones aritméticas y comparaciones.*