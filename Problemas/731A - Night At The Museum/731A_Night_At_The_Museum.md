# 731A - Night at the Museum

**Enlace:** https://codeforces.com/problemset/problem/731/A

## Resumen del problema
Imagina una rueda circular con las 26 letras minúsculas del alfabeto inglés ('a' a 'z') dispuestas en orden. Hay un puntero que inicialmente apunta a la letra 'a'. Para escribir una palabra dada, debes girar la rueda desde la letra actual a la siguiente letra de la palabra. Puedes girar la rueda en sentido horario o antihorario. Cada giro de una posición (a la letra adyacente) cuenta como un movimiento. El objetivo es calcular el número total mínimo de movimientos necesarios para escribir la palabra completa, empezando desde 'a'. Este problema es una tarea de implementación relativamente sencilla que evalúa la comprensión de la distancia en un espacio circular.

## Input
La única línea de entrada contiene una cadena `s` (la palabra a escribir), que consiste únicamente en letras minúsculas del alfabeto inglés.

## Output
Imprime un solo número entero: el número total mínimo de rotaciones necesarias para escribir la palabra `s`.

## Restricciones

| Variable         | Rango                         |
| :--------------- | :---------------------------- |
| Longitud de `s`  | [1, 100]                      |
| Caracteres en `s`| Letras minúsculas ('a'-'z')   |

## Ejemplos

| Input | Palabra | Transiciones y Movimientos Mínimos                                                                                                     | Output |
| :---- | :------ | :------------------------------------------------------------------------------------------------------------------------------------- | :----- |
| `zeus`  | zeus    | a -> z: min(|a-z|, 26-|a-z|) = min(25, 1) = 1 <br> z -> e: min(|z-e|, 26-|z-e|) = min(21, 5) = 5 <br> e -> u: min(|e-u|, 26-|e-u|) = min(16, 10) = 10 <br> u -> s: min(|u-s|, 26-|u-s|) = min(2, 24) = 2 <br> Total: 1 + 5 + 10 + 2 = 18 | `18`   |
| `cat`   | cat     | a -> c: min(|a-c|, 26-|a-c|) = min(2, 24) = 2 <br> c -> a: min(|c-a|, 26-|c-a|) = min(2, 24) = 2 <br> a -> t: min(|a-t|, 26-|a-t|) = min(19, 7) = 7 <br> Total: 2 + 2 + 7 = 11 | `11`   |
| `a`     | a       | a -> a: min(|a-a|, 26-|a-a|) = min(0, 26) = 0 <br> Total: 0                                                                         | `0`    |

## Forma de resolverlo

### a) Enfoque Algorítmico (Simulación Secuencial)
Podemos simular el proceso paso a paso. Mantenemos un registro de la letra a la que apunta el puntero actualmente (empezando en 'a'). Luego, para cada letra de la palabra objetivo, calculamos el costo mínimo para mover el puntero desde la letra actual hasta esa letra objetivo.
1.  Inicializa la posición actual del puntero a 'a'.
2.  Inicializa el contador total de movimientos a 0.
3.  Itera sobre cada letra (`letra_objetivo`) en la palabra de entrada.
4.  Para cada `letra_objetivo`, calcula la distancia en sentido horario y antihorario desde la `letra_actual` hasta la `letra_objetivo`.
5.  La distancia horaria es `(letra_objetivo - letra_actual + 26) % 26`.
6.  La distancia antihoraria es `(letra_actual - letra_objetivo + 26) % 26`.
7.  (Alternativa más simple para el cálculo): Calcula la diferencia absoluta `d = abs(ord(letra_actual) - ord(letra_objetivo))`. El mínimo de los dos caminos es `min(d, 26 - d)`.
8.  Suma esta distancia mínima al contador total de movimientos.
9.  Actualiza la `letra_actual` para que sea la `letra_objetivo`.
10. Después de procesar todas las letras de la palabra, el contador total tiene el resultado.
*Truco de implementación:* Prependiendo 'a' a la palabra de entrada se simplifica el bucle, ya que siempre se calcula la transición del carácter `i` al `i+1`.

### b) Enfoque Matemático (Suma de Distancias Circulares Mínimas)
El problema se reduce a calcular la distancia mínima entre pares de letras consecutivas en una secuencia, considerando la naturaleza circular del alfabeto. La distancia circular mínima entre dos letras `c1` y `c2` se puede calcular eficientemente.
1.  Considera las letras como números del 0 ('a') al 25 ('z').
2.  La diferencia directa entre sus valores numéricos es `diff = abs(valor(c1) - valor(c2))`.
3.  Esta `diff` representa la distancia en una dirección (por ejemplo, horaria).
4.  La distancia en la dirección opuesta (antihoraria) es `26 - diff` (ya que el círculo completo tiene 26 pasos).
5.  La distancia mínima es `min(diff, 26 - diff)`.
6.  El número total de movimientos es la suma de estas distancias mínimas para cada par consecutivo en la secuencia `('a', palabra[0], palabra[1], ..., palabra[n-1])`.

## Algoritmo
1.  Leer la palabra de entrada `s`.
2.  Crear una nueva cadena `secuencia = 'a' + s`.
3.  Inicializar `total_movimientos = 0`.
4.  Iterar con un índice `i` desde 0 hasta `len(secuencia) - 2`.
5.  Obtener la letra actual `c1 = secuencia[i]` y la siguiente letra `c2 = secuencia[i+1]`.
6.  Calcular la diferencia absoluta de sus valores ordinales (ASCII): `diff_abs = abs(ord(c1) - ord(c2))`.
7.  Calcular la distancia mínima para esta transición: `movimientos_paso = min(diff_abs, 26 - diff_abs)`.
8.  Sumar `movimientos_paso` a `total_movimientos`.
9.  Después de que el bucle termine, imprimir `total_movimientos`.

## Notas Adicionales
*   **Clave del Problema:** El núcleo es calcular correctamente la distancia mínima en un espacio circular (el alfabeto). La fórmula `min(abs_diff, 26 - abs_diff)` es fundamental.
*   **Simplicidad:** Es un buen ejemplo de problema donde la simulación directa del proceso descrito es la solución más clara.
*   **Eficiencia:** Dado que la longitud de la palabra es pequeña (hasta 100), una simulación O(L) donde L es la longitud de la palabra es perfectamente aceptable.
*   **Implementación:** Usar los valores ordinales de los caracteres (`ord()` en Python, conversión implícita a `int` en C++) facilita el cálculo de las diferencias.

## Complejidad

| Tipo        | Complejidad       |
| :---------- | :---------------- |
| Temporal    | O(L)              |
| Espacial    | O(L) / O(1) (aux) |

*La complejidad temporal es O(L), donde L es la longitud de la palabra de entrada, ya que iteramos sobre la palabra (o la secuencia modificada) una vez. La complejidad espacial es O(L) si se crea una nueva cadena (como `secuencia = 'a' + s`), o O(1) de espacio auxiliar si se maneja la posición actual sin crear una nueva cadena explícita.*