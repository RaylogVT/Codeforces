# 1901A - Line Trip

**Enlace:** https://codeforces.com/problemset/problem/1901/A

## Resumen del problema
Un coche necesita viajar desde el punto 0 hasta el punto $k$. En el camino, hay $n$ gasolineras ubicadas en puntos específicos $a_1, a_2, \dots, a_n$. El coche comienza con el tanque lleno en el punto 0 y puede repostar completamente en cualquier gasolinera. El objetivo es determinar la capacidad mínima del tanque de combustible que el coche necesita para completar el viaje. Hay una condición especial: la distancia desde la última gasolinera hasta el destino final ($k$) requiere el doble de combustible de lo que normalmente se necesitaría para esa distancia.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene dos enteros `n` ($1 \le n \le 50$) y `k` ($1 \le k \le 10^9$), el número de gasolineras y la coordenada del destino final, respectivamente.
    -   La segunda línea contiene `n` enteros $a_1, a_2, \dots, a_n$ ($1 \le a_i < a_{i+1} < k$), las coordenadas de las gasolineras en orden ascendente.

## Output
Para cada caso de prueba, imprime un solo entero: la capacidad mínima del tanque de combustible requerida.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| n (gasolineras)| [1, 50]    |                                     |
| k (destino)  | [1, 10^9]  |                                     |
| a_i (ubicaciones)| $1 \le a_i < a_{i+1} < k$ | Coordenadas de gasolineras, ordenadas |

## Ejemplos

| Input (n, k, a_i) | n | k | a_i     | Segmentos y Distancias | Output |
| :---------------- | :- | :- | :------ | :--------------------- | :----- |
| (2, 10, [3, 7])   | 2 | 10 | [3, 7]  | 0->3: 3 <br> 3->7: 4 <br> 7->10: 2*(10-7)=6 | `6`    |
| (1, 5, [2])       | 1 | 5 | [2]     | 0->2: 2 <br> 2->5: 2*(5-2)=6   | `6`    |
| (3, 20, [5, 10, 15]) | 3 | 20 | [5, 10, 15] | 0->5: 5 <br> 5->10: 5 <br> 10->15: 5 <br> 15->20: 2*(20-15)=10 | `10`   |

## Forma de resolverlo

### Enfoque Algorítmico (Máxima Distancia de Segmento)
El problema requiere encontrar la capacidad mínima del tanque de combustible. Esta capacidad debe ser suficiente para cubrir la distancia más larga que el coche debe recorrer sin repostar. Los puntos de repostaje son el inicio (punto 0) y todas las gasolineras. La clave es que el último segmento del viaje (desde la última gasolinera hasta el destino final `k`) tiene un requisito de combustible especial: necesita el doble de la distancia real.

Para resolverlo, debemos:
1.  **Calcular la distancia del primer segmento:** Desde el punto de inicio (0) hasta la primera gasolinera ($a_1$).
2.  **Calcular las distancias entre gasolineras consecutivas:** Para cada par de gasolineras adyacentes ($a_i$ y $a_{i+1}$), calcular la distancia $a_{i+1} - a_i$.
3.  **Calcular la distancia del último segmento (especial):** Desde la última gasolinera ($a_n$) hasta el destino final ($k$). Esta distancia debe multiplicarse por 2.
4.  **Encontrar el máximo:** La capacidad mínima del tanque será el valor máximo entre todas las distancias calculadas en los pasos 1, 2 y 3.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n` (número de gasolineras) y `k` (punto final).
    b.  Leer las `n` ubicaciones de las gasolineras en un arreglo `ubicaciones`.
    c.  Inicializar `tanque_minimo = 0`.
    d.  **Calcular la distancia del primer segmento:**
        i.  `distancia_actual = ubicaciones[0]` (desde 0 hasta la primera gasolinera).
        ii. Actualizar `tanque_minimo = max(tanque_minimo, distancia_actual)`.
    e.  **Calcular distancias entre gasolineras consecutivas:**
        i.  Iterar desde la segunda gasolinera hasta la última (índice `i` de 1 a `n-1`).
        ii. `distancia_actual = ubicaciones[i] - ubicaciones[i-1]`.
        iii. Actualizar `tanque_minimo = max(tanque_minimo, distancia_actual)`.
    f.  **Calcular la distancia del último segmento (con factor doble):**
        i.  `distancia_final_especial = 2 * (k - ubicaciones[n-1])`.
        ii. Actualizar `tanque_minimo = max(tanque_minimo, distancia_final_especial)`.
    g.  Imprimir `tanque_minimo`.

## Notas Adicionales
*   El problema garantiza que las ubicaciones de las gasolineras están ordenadas y son menores que el punto final `k`.
*   La lógica de multiplicar por 2 la distancia del último segmento es crucial y está directamente reflejada en el código.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | Iteración lineal sobre las gasolineras.   |
| Espacial | O(N)                   | Para almacenar las ubicaciones de las gasolineras. (En C++ se usa un array de tamaño fijo 51, que es O(1) en la práctica dado N <= 50). |