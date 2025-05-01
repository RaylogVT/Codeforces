# 1722B - Colourblindness

**Enlace:** https://codeforces.com/problemset/problem/1722/B

## Resumen del problema
Vasya tiene una cuadrícula con 2 filas y `n` columnas, donde cada celda está coloreada de rojo, verde o azul. Vasya es daltónico y no puede distinguir el verde del azul. Determina si Vasya considerará que las dos filas de la cuadrícula están coloreadas de la misma manera.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 100), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un entero `n` (1 <= n <= 100), el número de columnas de la cuadrícula.
    -   Las siguientes dos líneas contienen cada una una cadena de `n` caracteres, cada uno de los cuales es 'R', 'G' o 'B', representando una celda roja, verde o azul, respectivamente.

## Output
Para cada caso de prueba, imprime "YES" si Vasya considera que las dos filas son idénticas, y "NO" en caso contrario.

## Restricciones

| Variable     | Rango     | Notas                               |
| :----------- | :-------- | :---------------------------------- |
| t (casos)    | [1, 100]  |                                     |
| n (columnas) | [1, 100]  |                                     |
| Colores      | 'R', 'G', 'B' |                               |

## Ejemplos

| Input (n, fila1, fila2) | n | fila1 | fila2 | ¿Idénticas para Vasya? | Output |
| :---------------------- | :- | :---- | :---- | :--------------------- | :----- |
| (3, "RGB", "RGG")       | 3 | "RGB" | "RGG" | Sí (G y B son iguales) | `YES`  |
| (2, "RB", "GR")         | 2 | "RB"  | "GR"  | No (R es distinto)     | `NO`   |
| (5, "GGGGGR", "BBBBBR") | 5 | "GGGGGR"| "BBBBBR"| Sí (G y B son iguales) | `YES`  |

## Forma de resolverlo

### Enfoque Algorítmico (Comparación con Indistinguibilidad G/B)
Dado que Vasya no distingue el verde ('G') del azul ('B'), podemos considerar que para él, 'G' y 'B' son el mismo color. El rojo ('R') es distinto. Para determinar si las dos filas son idénticas para Vasya, podemos comparar las filas celda por celda, tratando 'G' y 'B' como equivalentes.

1.  **Iterar por Columnas:** Recorre las dos cadenas de color simultáneamente, desde la primera columna hasta la última.
2.  **Comparar Celdas:** Para cada columna, compara los colores en la misma posición en ambas filas.
    *   Si ambos colores son 'R', son iguales para Vasya.
    *   Si uno es 'G' y el otro es 'B' (o viceversa), son iguales para Vasya.
    *   Si ambos colores son 'G' o ambos son 'B', son iguales para Vasya.
    *   En cualquier otro caso (por ejemplo, 'R' con 'G', 'R' con 'B', o un color con sí mismo pero que no cumpla las condiciones anteriores), los colores son diferentes para Vasya.
3.  **Determinar Identidad:** Si en alguna columna los colores son diferentes para Vasya, entonces las dos filas no son idénticas para él, e imprimimos "NO". Si recorremos todas las columnas y en ninguna encontramos una diferencia perceptible para Vasya, entonces las filas son idénticas para él, e imprimimos "YES".

Una forma alternativa de implementar esto es transformar una o ambas cadenas reemplazando todas las 'G' por 'B' (o viceversa) y luego comparar las cadenas transformadas directamente.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer la cadena `fila1`.
    c.  Leer la cadena `fila2`.
    d.  Inicializar una bandera `son_identicas = true`.
    e.  Iterar desde `indice_columna = 0` hasta `n-1`:
        i.  Obtener `color1 = fila1[indice_columna]` y `color2 = fila2[indice_columna]`.
        ii. Si `color1` es 'G', cambiarlo a 'B' para la comparación.
        iii. Si `color2` es 'G', cambiarlo a 'B' para la comparación.
        iv. Si `color1` (modificado) es diferente de `color2` (modificado), establecer `son_identicas = false` y romper el bucle.
    f.  Si `son_identicas` es true, imprimir "YES".
    g.  De lo contrario, imprimir "NO".

## Notas Adicionales
*   **Indistinguibilidad:** La clave es modelar la percepción de Vasya donde 'G' y 'B' son lo mismo.
*   **Eficiencia:** La comparación celda por celda o la transformación de cadenas son enfoques eficientes con complejidad temporal O(N) por caso de prueba.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | Iteración lineal sobre las columnas. |
| Espacial | O(N) o O(1)            | O(N) si se crean nuevas cadenas transformadas. O(1) si se compara in-place. |
