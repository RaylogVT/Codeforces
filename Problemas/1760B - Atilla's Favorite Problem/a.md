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

| Input (n, s) | n | s      | Trayectoria (x, y) | ¿Alcanza (1,1)? | Output |
| :----------- | :- | :----- | :----------------- | :-------------- | :----- |
| (5, "RURDD") | 5 | "RURDD"| (0,0) -> (1,0) -> (1,1) -> (1,0) -> (1,-1) -> (1,-2) | Sí              | `YES`  |
| (2, "RL")    | 2 | "RL"   | (0,0) -> (1,0) -> (0,0) | No              | `NO`   |
| (4, "UUUU")  | 4 | "UUUU" | (0,0) -> (0,1) -> (0,2) -> (0,3) -> (0,4) | No              | `NO`   |

## Forma de resolverlo

### Enfoque Algorítmico (Simulación Directa)
La forma más sencilla y directa de resolver este problema es simular el movimiento de Alperen paso a paso y verificar en cada momento si su posición actual es (1,1).

1.  **Inicializar Posición:** Comienza con las coordenadas de Alperen en (0,0).
2.  **Iterar Movimientos:** Recorre la cadena de direcciones carácter por carácter.
3.  **Actualizar Posición:** Para cada carácter, actualiza las coordenadas de Alperen según la dirección ('L': x--, 'R': x++, 'U': y++, 'D': y--).
4.  **Verificar Dulce:** Después de cada movimiento, verifica si la posición actual de Alperen es (1,1). Si lo es, hemos encontrado el dulce y podemos detener la simulación y reportar "YES".
5.  **Resultado:** Si se procesan todas las direcciones y Alperen nunca alcanza la posición (1,1), entonces reportamos "NO".

## Análisis Matemático
El movimiento de Alperen puede verse como una caminata aleatoria en una cuadrícula 2D, aunque las direcciones no son aleatorias sino determinísticas, dadas por la cadena $s$. La posición de Alperen en el paso $k$, denotada por $(x_k, y_k)$, se puede definir recursivamente. Comenzando en $(x_0, y_0) = (0,0)$, la posición en el paso $k$ ($1 \le k \le n$) se obtiene de la posición en el paso $k-1$ más un vector de desplazamiento $\Delta_k$ que depende de la $k$-ésima dirección $s_k$:
$$ (x_k, y_k) = (x_{k-1}, y_{k-1}) + \Delta_k $$
donde $\Delta_k$ es:
$$ \Delta_k = \begin{cases} (-1, 0) & \text{si } s_k = 'L' \\ (1, 0) & \text{si } s_k = 'R' \\ (0, 1) & \text{si } s_k = 'U' \\ (0, -1) & \text{si } s_k = 'D' \end{cases} $$
La posición en el paso $k$ también se puede expresar como la suma de los vectores de desplazamiento desde el inicio:
$$ (x_k, y_k) = \sum_{i=1}^k \Delta_i $$
El problema nos pide determinar si existe algún paso $k \in \{1, 2, \dots, n\}$ tal que $(x_k, y_k) = (1,1)$.

Desde una perspectiva matemática más abstracta, esto es equivalente a verificar si el punto $(1,1)$ pertenece al conjunto de puntos visitados por la caminata:
$$ (1,1) \in \{ (x_k, y_k) \mid k = 1, 2, \dots, n \} $$
La simulación directa es computacionalmente equivalente a construir explícitamente el conjunto de puntos visitados hasta el paso $n$ y verificar si $(1,1)$ está en él. Dada la pequeña restricción en $n$ ($n \le 50$), la simulación directa es un enfoque eficiente. No hay un método matemático significativamente más rápido para determinar si un punto específico es visitado en una caminata determinística arbitraria sin simular al menos hasta ese punto o encontrar un patrón cíclico (que no es garantizado aquí).

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer la cadena `s`.
    c.  Inicializar `x = 0`, `y = 0`.
    d.  Inicializar `encontrado_dulce = false`.
    e.  Iterar desde `i = 0` hasta `n-1`:
        i.  Si `s[i]` es 'L', decrementar `x`.
        ii. Si `s[i]` es 'R', incrementar `x`.
        iii. Si `s[i]` es 'U', incrementar `y`.
        iv. Si `s[i]` es 'D', decrementar `y`.
        v.  Si `x == 1` y `y == 1`, establecer `encontrado_dulce = true` y romper el bucle.
    f.  Si `encontrado_dulce` es true, imprimir "YES".
    g.  De lo contrario, imprimir "NO".

## Notas Adicionales
*   **Punto de Inicio:** La caminata siempre comienza en (0,0).
*   **Punto Objetivo:** El dulce está en (1,1).
*   **Eficiencia:** La simulación directa tiene una complejidad temporal de O(N) por caso de prueba, ya que procesamos cada dirección una vez.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | Iteración lineal sobre las direcciones. |
| Espacial | O(1)                   | Espacio constante para las coordenadas y la bandera. |
