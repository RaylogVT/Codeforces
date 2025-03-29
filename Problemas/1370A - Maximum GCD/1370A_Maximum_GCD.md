# 1370A - Maximum GCD

**Enlace:** https://codeforces.com/problemset/problem/1370/A

## Resumen del problema
Dado un entero `n`, se te pide encontrar el máximo valor posible del máximo común divisor (GCD, Greatest Common Divisor) entre dos números enteros *distintos* `a` y `b`, tales que `1 <= a < b <= n`. El problema requiere entender cómo se relaciona el GCD con los múltiplos de un número dentro de un rango limitado.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 1000), el número de casos de prueba.
-   Cada una de las siguientes `t` líneas contiene un solo entero `n` (2 <= n <= 10⁹).

## Output
Para cada caso de prueba, imprime un solo entero: el máximo GCD posible entre dos números distintos en el rango [1, n].

## Restricciones

| Variable      | Rango      | Notas                               |
| :------------ | :--------- | :---------------------------------- |
| t (casos)     | [1, 1000]  |                                     |
| n (límite)    | [2, 10⁹]   | Garantiza que siempre hay >= 2 números |

## Ejemplos

| Input   | n   | Pares (a,b) con 1<=a<b<=n | GCDs Posibles (ejemplos) | Max GCD | Output |
| :------ | :-- | :------------------------ | :----------------------- | :------ | :----- |
| 6 <br> 2 | 2   | (1, 2)                    | gcd(1,2)=1               | 1       | `1`    |
| 6 <br> 3 | 3   | (1,2), (1,3), (2,3)       | gcd(1,2)=1, gcd(1,3)=1, gcd(2,3)=1 | 1       | `1`    |
| 6 <br> 4 | 4   | (1,2)...(3,4)             | **gcd(2,4)=2**, gcd(1,?) = 1...| 2       | `2`    |
| 6 <br> 5 | 5   | (1,2)...(4,5)             | **gcd(2,4)=2**, gcd(1,?) = 1...| 2       | `2`    |
| 6 <br> 10| 10  | (1,2)...(9,10)            | **gcd(5,10)=5**, gcd(4,8)=4...| 5       | `5`    |
| 6 <br> 11| 11  | (1,2)...(10,11)           | **gcd(5,10)=5**, gcd(4,8)=4...| 5       | `5`    |

## Forma de resolverlo

### a) Enfoque Algorítmico (Considerando Múltiplos)
Queremos maximizar `g = gcd(a, b)` donde `1 <= a < b <= n`.
1.  **Propiedad Fundamental:** Si `g = gcd(a, b)`, entonces `g` debe dividir tanto a `a` como a `b`. Esto significa que `a` y `b` son múltiplos de `g`.
2.  **Necesidad de Dos Múltiplos:** Para que `a` y `b` sean distintos (`a < b`), necesitamos que existan al menos dos múltiplos *distintos* de `g` dentro del rango `[1, n]`.
3.  **Múltiplos de g:** Los múltiplos positivos de `g` son `g, 2g, 3g, ...`.
4.  **Condición de Rango:** Para tener al menos dos múltiplos distintos (`g` y `2g`) en el rango, el segundo múltiplo (`2g`) debe ser menor o igual a `n`. Es decir, `2g <= n`.
5.  **Límite Superior para g:** De la condición `2g <= n`, obtenemos que `g <= n / 2`. El valor entero más grande que `g` puede tomar es `floor(n / 2)`.
6.  **Alcanzabilidad:** ¿Podemos siempre lograr este valor máximo `g = floor(n / 2)`? Sí. Si elegimos este `g` máximo, podemos tomar el par `(a, b)` como `(g, 2g)`.
    *   Claramente `a = g >= 1` (ya que `n >= 2`).
    *   Sabemos que `b = 2g <= n`, así que `b` está en el rango.
    *   `a` y `b` son distintos (`g < 2g` porque `g >= 1`).
    *   El `gcd(a, b) = gcd(g, 2g) = g` (porque `g` divide a `g` y `g` divide a `2g`, y ningún número mayor que `g` puede dividir a `g`).
7.  **Conclusión:** Dado que podemos alcanzar el límite superior `floor(n / 2)` con un par válido `(g, 2g)`, este es el máximo GCD posible. Se calcula como `n // 2` (división entera).

### b) Enfoque Matemático (Propiedades del GCD y Maximización)
Buscamos `max { gcd(a, b) | 1 <= a < b <= n }`.
1.  **Límite del GCD:** `gcd(a, b)` no puede ser mayor que `a` (ya que `a < b`). Por lo tanto, `gcd(a, b) <= a`.
2.  **Caso Ideal:** El GCD es máximo cuando `gcd(a, b) = a`. Esto ocurre si y solo si `a` divide a `b`.
3.  **Objetivo Reformulado:** Queremos encontrar el valor `a` más grande posible tal que exista un `b` con `a < b <= n` y `a` divida a `b`.
4.  **Elección de b:** El múltiplo más simple de `a` que es mayor que `a` es `b = 2a`.
5.  **Condición Simplificada:** Buscamos el `a` más grande tal que `2a <= n`.
6.  **Solución:** El `a` más grande que satisface `2a <= n` es `a = floor(n / 2)`.
7.  **Verificación:** Para este `a = floor(n / 2)`, podemos elegir `b = 2a`. Como se vio en el enfoque (a), este par `(a, b)` es válido (está en el rango, son distintos) y `gcd(a, b) = a`.
8.  **Resultado:** El máximo GCD es `a = floor(n / 2)`.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer el entero `n`.
    b.  Calcular `resultado = n / 2` (usando división entera, equivalente a `floor(n / 2)`).
    c.  Imprimir `resultado`.

## Notas Adicionales
*   **Simplicidad Engañosa:** Aunque involucra GCD, la solución final es muy directa y no requiere calcular GCDs explícitamente.
*   **Intuición:** El par de números distintos más "cercanos" en términos de divisibilidad es un número y su doble. Maximizar el GCD equivale a encontrar el número más grande (`g`) cuyo doble (`2g`) todavía cabe en el rango `[1, n]`.
*   **¿Por qué no `3g`, `4g`, etc.?** Considerar `3g <= n` (implicando `g <= n/3`) o `4g <= n` (`g <= n/4`) solo pondría límites superiores más estrictos a `g`. La condición `2g <= n` es la que permite el valor potencialmente más alto para `g`.
*   **Constraint `n >= 2`:** Asegura que siempre exista al menos un par de números distintos (1 y 2) en el rango, haciendo la pregunta válida.

## Complejidad

| Tipo        | Complejidad (por caso) |
| :---------- | :--------------------- |
| Temporal    | O(1)                   |
| Espacial    | O(1)                   |

*La complejidad por caso de prueba es constante O(1), ya que solo se necesitan operaciones aritméticas básicas que no dependen del tamaño de `n`.*