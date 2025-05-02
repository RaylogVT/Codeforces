# 1791B - Following Directions

**Enlace:** https://codeforces.com/problemset/problem/1791/B

## Resumen del problema
Alperen comienza en el punto (0,0) en un plano 2D. Se le da una cadena `s` de longitud `n` y realiza `n` movimientos. El $i$-ésimo movimiento es el siguiente: si $s_i = 'L'$, se mueve una unidad a la izquierda; si $s_i = 'R'$, se mueve una unidad a la derecha; si $s_i = 'U'$, se mueve una unidad hacia arriba; si $s_i = 'D'$, se mueve una unidad hacia abajo. Hay un dulce en (1,1). Debes determinar si Alperen alguna vez pasa por el dulce.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un solo entero `n` ($1 \le n \le 50$), la longitud de la cadena de direcciones.
    -   La segunda línea contiene una cadena `s` de longitud `n`, que consiste en caracteres 'L', 'R', 'U', 'D'.

## Output
Para cada caso de prueba, imprime "YES" (sin comillas) si Alperen alguna vez alcanza la coordenada (1,1), y "NO" (sin comillas) en caso contrario.

## Restricciones

| Variable     | Rango     | Notas                               |
| :----------- | :-------- | :---------------------------------- |
| t (casos)    | [1, 1000] |                                     |
| n (longitud) | [1, 50]   |                                     |
| s (cadena)   | longitud n | Caracteres 'L', 'R', 'U', 'D'       |

## Ejemplos

| Input (n, s) | n | s      | Trayectoria (x, y)                          | ¿Alcanza (1,1)? | Output |
| :----------- | :-: | :----- | :------------------------------------------ | :--------------: | :----- |
| (5, "RURDD") | 5 | "RURDD"| (0,0) -> (1,0) -> (1,1) -> (1,0) -> (1,-1) -> (1,-2) | Sí              | `YES`  |
| (2, "RL")    | 2 | "RL"   | (0,0) -> (1,0) -> (0,0)                      | No              | `NO`   |
| (4, "UUUU")  | 4 | "UUUU" | (0,0) -> (0,1) -> (0,2) -> (0,3) -> (0,4)    | No              | `NO`   |

## Forma de resolverlo

### Enfoque Algorítmico (Simulación Directa)
La forma más sencilla y directa de resolver este problema es simular el movimiento de Alperen paso a paso y verificar en cada momento si su posición actual es (1,1).

1.  **Inicializar Posición:** Comienza con las coordenadas de Alperen en (0,0). Sean `x = 0` e `y = 0`.
2.  **Iterar Movimientos:** Recorre la cadena de direcciones `s` carácter por carácter, desde el índice 0 hasta `n-1`.
3.  **Actualizar Posición:** Para cada carácter `s[i]`:
    *   Si `s[i]` es 'L', decrementa `x` en 1 (`x--`).
    *   Si `s[i]` es 'R', incrementa `x` en 1 (`x++`).
    *   Si `s[i]` es 'U', incrementa `y` en 1 (`y++`).
    *   Si `s[i]` es 'D', decrementa `y` en 1 (`y--`).
4.  **Verificar Dulce:** Después de *cada* movimiento (actualización de `x` e `y`), verifica si la posición actual `(x, y)` es igual a `(1, 1)`. Si `x == 1` y `y == 1`, entonces Alperen ha alcanzado el dulce. Podemos detener la simulación inmediatamente y concluir que la respuesta es "YES".
5.  **Resultado:** Si se procesan todas las `n` direcciones y Alperen nunca alcanza la posición (1,1), entonces la respuesta es "NO".

## Análisis Matemático
El movimiento de Alperen puede verse como una caminata en una cuadrícula 2D. La posición de Alperen en el paso $k$, denotada por $(x_k, y_k)$, se define a partir de la posición inicial $(x_0, y_0) = (0,0)$. Para $k \ge 1$, la posición en el paso $k$ se obtiene de la posición en el paso $k-1$ más un vector de desplazamiento $\Delta_k$ que depende de la $k$-ésima dirección $s_k$:

$$
(x_k, y_k) = (x_{k-1}, y_{k-1}) + \Delta_k
$$

donde $\Delta_k$ es uno de los siguientes vectores unitarios, dependiendo de $s_k$:
*   $\Delta_k = (-1, 0)$ si $s_k = \text{'L'}$
*   $\Delta_k = (1, 0)$ si $s_k = \text{'R'}$
*   $\Delta_k = (0, 1)$ si $s_k = \text{'U'}$
*   $\Delta_k = (0, -1)$ si $s_k = \text{'D'}$

La posición en el paso $k$ también se puede expresar como la suma acumulada de los vectores de desplazamiento desde el inicio:

$$
(x_k, y_k) = \sum_{i=1}^k \Delta_i
$$

El problema nos pide determinar si existe algún paso $k \in \{1, 2, \dots, n\}$ tal que la posición $(x_k, y_k)$ sea igual a $(1,1)$. Matemáticamente, buscamos si:

$$
\exists k \in \{1, 2, \dots, n\} \quad \text{tal que} \quad (x_k, y_k) = (1,1)
$$

Desde una perspectiva matemática más abstracta, esto es equivalente a verificar si el punto $(1,1)$ pertenece al conjunto de puntos visitados por la caminata (excluyendo el punto inicial $(0,0)$, aunque incluirlo no cambiaría la respuesta ya que $(1,1) \neq (0,0)$):

$$
(1,1) \in \{ (x_k, y_k) \mid 1 \le k \le n \}
$$

La simulación directa es computacionalmente la forma más eficiente de verificar esta condición para una secuencia de movimientos dada, especialmente considerando las pequeñas restricciones del problema ($n \le 50$). No se requiere un análisis matemático más complejo.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba (repetir `t` veces):
    a.  Leer el entero `n`.
    b.  Leer la cadena `s`.
    c.  Inicializar las coordenadas actuales: `x = 0`, `y = 0`.
    d.  Inicializar una bandera booleana: `encontrado_dulce = false`.
    e.  Iterar a través de los caracteres de la cadena `s` usando un índice `i` desde 0 hasta `n-1`:
        i.  Obtener el carácter `c = s[i]`.
        ii. Si `c == 'L'`, decrementar `x` (`x = x - 1`).
        iii. Si `c == 'R'`, incrementar `x` (`x = x + 1`).
        iv. Si `c == 'U'`, incrementar `y` (`y = y + 1`).
        v.  Si `c == 'D'`, decrementar `y` (`y = y - 1`).
        vi. Después de actualizar `x` e `y`, verificar si `x == 1` y `y == 1`.
        vii. Si la condición `x == 1` y `y == 1` es verdadera, establecer `encontrado_dulce = true` y terminar (romper) el bucle de iteración sobre `s`.
    f.  Después de que el bucle termine (ya sea completando todas las iteraciones o por el `break`), verificar el valor de `encontrado_dulce`.
    g.  Si `encontrado_dulce` es `true`, imprimir "YES".
    h.  Si `encontrado_dulce` es `false`, imprimir "NO".

## Notas Adicionales
*   **Punto de Inicio:** La caminata siempre comienza en (0,0). El dulce *no* está en el punto de inicio.
*   **Punto Objetivo:** El dulce está específicamente en (1,1). Solo esta coordenada activa la respuesta "YES".
*   **Eficiencia:** La simulación directa es muy eficiente. Solo requiere recorrer la cadena una vez.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                                                                 |
| :------- | :--------------------- | :-------------------------------------------------------------------- |
| Temporal | O(N)                   | Se itera sobre la cadena de longitud N una vez en el peor de los casos. |
| Espacial | O(1)                   | Solo se necesita almacenar las coordenadas (x, y) y una bandera.        |