# 1360A - Minimal Square

**Enlace:** https://codeforces.com/problemset/problem/1360/A

## Resumen del problema
Se te dan las dimensiones (`a` y `b`) de dos rectángulos idénticos. Necesitas encontrar el área del cuadrado más pequeño posible que pueda contener a ambos rectángulos sin que se superpongan. Los rectángulos pueden ser rotados y colocados en cualquier lugar dentro del cuadrado. Este problema se relaciona con encontrar la mínima caja delimitadora cuadrada para dos rectángulos.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 1000), el número de casos de prueba.
-   Cada una de las siguientes `t` líneas describe un caso de prueba y contiene dos enteros `a` y `b` (1 <= a, b <= 100), las dimensiones de los rectángulos.

## Output
Para cada caso de prueba, imprime un solo entero: el área mínima del cuadrado que puede contener los dos rectángulos.

## Restricciones

| Variable      | Rango       |
| :------------ | :---------- |
| t (casos)     | [1, 1000]   |
| a, b (dims)   | [1, 100]    |

## Ejemplos

| Input   | a, b | Posibles Colocaciones y Lados Mínimos de Cuadrado                                | Lado Mínimo | Área Mínima | Output |
| :------ | :--- | :------------------------------------------------------------------------------- | :---------- | :---------- | :----- |
| 8 <br> 3 2 | 3, 2 | 1. Lado a lado (dim 2): (3+3)x2 -> 6x2. Cuadrado min: lado 6.<br> 2. Lado a lado (dim 3): 3x(2+2) -> 3x4. Cuadrado min: lado 4. | `min(6, 4) = 4` | 4*4 = 16 | `16`   |
| 8 <br> 4 2 | 4, 2 | 1. Lado a lado (dim 2): (4+4)x2 -> 8x2. Cuadrado min: lado 8.<br> 2. Lado a lado (dim 4): 4x(2+2) -> 4x4. Cuadrado min: lado 4. | `min(8, 4) = 4` | 4*4 = 16 | `16`   |
| 8 <br> 1 1 | 1, 1 | 1. Lado a lado (dim 1): (1+1)x1 -> 2x1. Cuadrado min: lado 2.<br> 2. Lado a lado (dim 1): 1x(1+1) -> 1x2. Cuadrado min: lado 2. | `min(2, 2) = 2` | 2*2 = 4  | `4`    |
| 8 <br> 3 1 | 3, 1 | 1. Lado a lado (dim 1): (3+3)x1 -> 6x1. Cuadrado min: lado 6.<br> 2. Lado a lado (dim 3): 3x(1+1) -> 3x2. Cuadrado min: lado 3. | `min(6, 3) = 3` | 3*3 = 9  | `9`    |

*Nota: Los ejemplos restantes se omiten por brevedad, siguen la misma lógica.*

## Forma de resolverlo

Para encontrar el cuadrado mínimo, debemos considerar las formas óptimas de colocar los dos rectángulos `a x b` juntos y luego encontrar el cuadrado más pequeño que encierre esa forma combinada. Hay dos orientaciones principales para colocar los rectángulos juntos:

### a) Enfoque Algorítmico (Considerando Orientaciones)
1.  **Orientación 1:** Colocar los dos rectángulos lado a lado a lo largo de su dimensión `a`. La forma combinada tendrá dimensiones `(2*a) x b`. Para encerrar esta forma en un cuadrado, el lado del cuadrado debe ser al menos `max(2*a, b)`.
2.  **Orientación 2:** Colocar los dos rectángulos lado a lado a lo largo de su dimensión `b`. La forma combinada tendrá dimensiones `a x (2*b)`. Para encerrar esta forma en un cuadrado, el lado del cuadrado debe ser al menos `max(a, 2*b)`.
3.  **Rotación:** Dado que los rectángulos pueden rotarse, las dimensiones iniciales podrían ser `b x a`. Los casos análogos serían `(2*b) x a` (requiere lado `max(2*b, a)`) y `b x (2*a)` (requiere lado `max(b, 2*a)`). Notamos que estas son las mismas dos longitudes de lado requeridas que en los puntos 1 y 2, solo que `a` y `b` están intercambiados.
4.  **Mínimo Lado:** Para encontrar el cuadrado *más pequeño*, debemos elegir la orientación que resulte en el menor lado de cuadrado posible. Por lo tanto, el lado mínimo `s` es `min( max(2*a, b), max(a, 2*b) )`.
5.  **Área Mínima:** El área es `s * s`.

### b) Enfoque Matemático (Simplificación de la Fórmula del Lado)
Podemos simplificar la determinación del lado mínimo `s`. Un cuadrado que contiene ambos rectángulos debe satisfacer dos condiciones:
1.  Debe ser lo suficientemente grande para contener la dimensión más larga de *un solo* rectángulo. Es decir, `s >= max(a, b)`.
2.  Debe ser lo suficientemente grande para contener la dimensión combinada cuando los rectángulos se colocan lado a lado a lo largo de su lado *más corto*. Si `min(a, b)` es el lado corto, esta dimensión combinada es `2 * min(a, b)`. Por lo tanto, `s >= 2 * min(a, b)`.

El lado del cuadrado `s` debe cumplir *ambas* condiciones. Para obtener el cuadrado *mínimo*, `s` debe ser el valor más pequeño que satisfaga ambas, es decir:
`s = max( max(a, b), 2 * min(a, b) )`

Esta fórmula es equivalente a `min( max(2*a, b), max(a, 2*b) )` y puede ser más intuitiva.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer las dimensiones `a` y `b`.
    b.  Calcular el lado `s1 = max(2*a, b)`.
    c.  Calcular el lado `s2 = max(a, 2*b)`.
    d.  Determinar el lado mínimo del cuadrado: `s = min(s1, s2)`.
    e.  (Alternativa usando la fórmula simplificada): Calcular `lado_min = min(a, b)`, `lado_max = max(a, b)`. Calcular `s = max(lado_max, 2 * lado_min)`.
    f.  Calcular el área mínima: `area = s * s`.
    g.  Imprimir `area`.

## Notas Adicionales
*   **Visualización:** Ayuda imaginar colocar los dos rectángulos juntos. Si son delgados y largos (e.g., 1x5), colocarlos lado a lado sobre el lado corto (1x10) requiere un cuadrado de lado 10, pero colocarlos lado a lado sobre el lado largo (2x5) solo requiere un cuadrado de lado 5. El mínimo cuadrado se obtiene al minimizar la dimensión máxima de la forma combinada.
*   **Fórmula Clave:** `s = max(max(a, b), 2 * min(a, b))` o `s = min(max(2*a, b), max(a, 2*b))` calculan el lado mínimo necesario.

## Complejidad

| Tipo        | Complejidad (por caso) |
| :---------- | :--------------------- |
| Temporal    | O(1)                   |
| Espacial    | O(1)                   |

*La complejidad por caso de prueba es constante, ya que solo implica leer dos números y realizar un número fijo de operaciones aritméticas y comparaciones.*