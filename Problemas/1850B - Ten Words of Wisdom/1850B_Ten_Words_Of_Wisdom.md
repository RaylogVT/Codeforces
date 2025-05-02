# 1850B - Ten Words of Wisdom

**Enlace:** https://codeforces.com/problemset/problem/1850/B

## Resumen del problema
En el juego "Ten Words of Wisdom", hay `n` participantes numerados del 1 al `n`, cada uno de los cuales envía una respuesta. La $i$-ésima respuesta tiene $a_i$ palabras de longitud y calidad $b_i$. Se garantiza que ninguna respuesta tiene la misma calidad y que al menos una respuesta tiene una longitud de como máximo 10 palabras. El ganador del juego es la respuesta que tiene la calidad más alta entre todas las respuestas que no tienen más de 10 palabras. ¿Qué respuesta es la ganadora?

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 100$), el número de casos de prueba.
-   La primera línea de cada caso de prueba contiene un solo entero `n` ($1 \le n \le 50$), el número de respuestas.
-   Luego siguen `n` líneas, la $i$-ésima de las cuales contiene dos enteros $a_i$ y $b_i$ ($1 \le a_i, b_i \le 50$), el número de palabras y la calidad de la $i$-ésima respuesta, respectivamente.
-   Restricciones adicionales en la entrada: en cada caso de prueba, al menos un valor de $i$ satisface $a_i \le 10$, y todos los valores de $b_i$ son distintos.

## Output
Para cada caso de prueba, imprime un solo entero $x$ ($1 \le x \le n$) — el índice del participante ganador del juego, según las reglas dadas.

## Restricciones

| Variable     | Rango     | Notas                                     |
| :----------- | :-------- | :---------------------------------------- |
| t (casos)    | [1, 100]  |                                           |
| n (respuestas)| [1, 50]   |                                           |
| a_i (palabras)| [1, 50]   | Longitud de la respuesta                  |
| b_i (calidad)| [1, 50]   | Calidad de la respuesta                   |
| Adicionales  |           | Al menos una $a_i \le 10$, todas las $b_i$ distintas |

## Ejemplos

| Input (n, respuestas)                 | n | Respuestas (a, b)                   | Respuestas Válidas ($a_i \le 10$) | Calidad Máxima Válida | Índice Ganador | Output |
| :------------------------------------ | :-: | :---------------------------------- | :-------------------------------- | :--------------------: | :-------------: | :----- |
| (3, [(7, 2), (12, 5), (9, 3)])        | 3 | (7, 2), (12, 5), (9, 3)             | (7, 2), (9, 3)                    | 3                      | 3 (índice 1-based) | `3`    |
| (1, [(5, 10)])                       | 1 | (5, 10)                             | (5, 10)                           | 10                     | 1              | `1`    |
| (4, [(10, 1), (10, 2), (10, 3), (10, 4)])| 4 | (10, 1), (10, 2), (10, 3), (10, 4) | (10, 1), (10, 2), (10, 3), (10, 4)| 4                      | 4              | `4`    |
*(Corrección en el primer ejemplo: El índice ganador para la calidad 3 es el participante 3)*

## Forma de resolverlo

### Enfoque Algorítmico (Filtrado y Búsqueda del Máximo)
El problema requiere encontrar la respuesta con la calidad más alta, pero solo entre aquellas respuestas que cumplen una condición de longitud (tener 10 palabras o menos). Esto sugiere un proceso de dos pasos: primero, identificar las respuestas válidas, y segundo, encontrar la respuesta con la calidad máxima dentro de este subconjunto válido.

1.  **Iterar y Filtrar:** Recorre cada una de las `n` respuestas. Para cada respuesta $i$ (del participante $i$), con $a_i$ palabras y calidad $b_i$, verifica si la longitud $a_i$ es menor o igual a 10 ($a_i \le 10$). Si esta condición se cumple, la respuesta es válida para la consideración final.
2.  **Rastrear Calidad Máxima y Ganador:** Mientras iteras, mantén un registro de la calidad máxima encontrada *hasta el momento* entre las respuestas válidas y el índice del participante que proporcionó esa respuesta. Inicializa la calidad máxima a un valor bajo (por ejemplo, -1 o 0) y el índice del ganador a un valor inválido (e.g., -1). Si encuentras una respuesta válida (es decir, $a_i \le 10$) y su calidad $b_i$ es mayor que la calidad máxima registrada actualmente, actualiza la calidad máxima a $b_i$ y el índice del ganador al índice del participante actual ($i$).
3.  **Resultado:** Después de procesar todas las `n` respuestas, el índice del ganador registrado es la respuesta al problema.

## Análisis Matemático
Sea $R$ el conjunto de pares $(a_i, b_i)$ para $i = 1, \dots, n$, representando las respuestas:
$$ R = \{(a_1, b_1), (a_2, b_2), \dots, (a_n, b_n)\} $$
Definimos el conjunto de respuestas válidas $R_{válido}$ como aquellas respuestas en $R$ cuya longitud $a_i$ no excede 10:
$$ R_{válido} = \{ (a_i, b_i) \in R \mid a_i \le 10 \} $$
El problema nos pide encontrar el índice $j$ (del participante $j$, $1 \le j \le n$) tal que $(a_j, b_j) \in R_{válido}$ y su calidad $b_j$ es la máxima entre todas las respuestas válidas:
$$ b_j = \max \{ b_i \mid (a_i, b_i) \in R_{válido} \} $$

La restricción de que todas las calidades $b_i$ son distintas garantiza que existe un único máximo en el conjunto de calidades $\{b_i \mid (a_i, b_i) \in R_{válido}\}$, y por lo tanto, un único ganador. La restricción de que al menos una respuesta satisface $a_i \le 10$ garantiza que $R_{válido}$ no es un conjunto vacío, por lo que siempre habrá un ganador.

El problema se reduce a encontrar el índice asociado al par $(a_i, b_i)$ que maximiza $b_i$ sujeto a la restricción $a_i \le 10$.

Podemos pensar en esto asignando una "puntuación" a cada respuesta:
*   Si $a_i \le 10$, la Puntuación es $b_i$.
*   Si $a_i > 10$, la Puntuación es efectivamente $-\infty$ (o simplemente se ignora la respuesta).

El ganador es el participante $j$ que logra la máxima puntuación. El algoritmo de filtrado y búsqueda del máximo implementa esta lógica directamente.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Inicializar `max_quality = -1` (o 0, ya que $b_i \ge 1$).
    c.  Inicializar `winner_index = -1`.
    d.  Iterar desde `i = 1` hasta `n` (representando el índice del participante):
        i.  Leer los dos enteros para el participante `i`: $a_i$ (longitud) y $b_i$ (calidad).
        ii. Verificar si la respuesta es válida: `if a_i <= 10:`
            1.  Si es válida, verificar si su calidad es la mejor encontrada hasta ahora: `if b_i > max_quality:`
                *   Actualizar la mejor calidad: `max_quality = b_i`.
                *   Actualizar el índice del ganador: `winner_index = i`.
    e.  Después de iterar por todos los participantes, imprimir `winner_index`.

## Notas Adicionales
*   **Índices:** El problema pide el índice del participante (1-based), que coincide con el índice del bucle `i` si se itera de 1 a `n`. Si se usa un índice 0-based (de 0 a `n-1`), se debe sumar 1 al índice guardado antes de imprimirlo.
*   **Eficiencia:** El algoritmo requiere procesar cada una de las `n` respuestas una vez. La complejidad temporal es O(N) por caso de prueba.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | Recorrido lineal sobre las respuestas. |
| Espacial | O(1)                   | Espacio constante para rastrear el máximo y el índice. |