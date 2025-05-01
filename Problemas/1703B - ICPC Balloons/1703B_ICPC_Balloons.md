# 1703B - ICPC Balloons

**Enlace:** https://codeforces.com/problemset/problem/1703/B

## Resumen del problema
En un concurso ICPC, se distribuyen globos de la siguiente manera: cada vez que un equipo resuelve un problema, recibe un globo. La primera vez que un equipo resuelve un problema específico, recibe un globo adicional. Dada una cadena que representa el orden en que se resolvieron los problemas (letras mayúsculas de la 'A' a la 'Z'), determina el número total de globos recibidos por los equipos.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 100), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un entero `n` (1 <= n <= 50), la longitud de la cadena de problemas resueltos.
    -   La segunda línea contiene una cadena `s` de longitud `n` compuesta por letras mayúsculas del alfabeto inglés ('A' a 'Z'), representando los problemas resueltos en orden.

## Output
Para cada caso de prueba, imprime un solo entero: el número total de globos recibidos.

## Restricciones

| Variable        | Rango    | Notas                               |
| :-------------- | :------- | :---------------------------------- |
| t (casos)       | [1, 100] |                                     |
| n (longitud)    | [1, 50]  |                                     |
| s (cadena)      | longitud n | Compuesta por 'A'-'Z' mayúsculas |

## Ejemplos

| Input (n, s) | n | s     | Problemas Resueltos | Problemas Únicos | Globos (n + únicos) | Output |
| :----------- | :- | :---- | :------------------ | :--------------- | :------------------ | :----- |
| (3, "ABA")   | 3 | "ABA" | A, B, A             | A, B             | 3 + 2 = 5           | `5`    |
| (4, "AAAA")  | 4 | "AAAA"| A, A, A, A          | A                | 4 + 1 = 5           | `5`    |
| (3, "ABC")   | 3 | "ABC" | A, B, C             | A, B, C          | 3 + 3 = 6           | `6`    |

## Forma de resolverlo

### Enfoque Algorítmico (Conteo de Problemas y Problemas Únicos)
La lógica del problema indica que cada problema resuelto otorga un globo, y la primera vez que se resuelve un problema se otorga un globo adicional. Esto se traduce en que el número total de globos es igual al número total de problemas resueltos (la longitud de la cadena de entrada) más el número de problemas únicos resueltos.

1.  **Contar Problemas Totales:** La longitud de la cadena de entrada `s` (`n`) representa el número total de problemas resueltos.
2.  **Identificar Problemas Únicos:** Utiliza una estructura de datos que almacene elementos únicos, como un `set` en Python o C++, para encontrar los problemas que se resolvieron por primera vez. Itera sobre la cadena `s` e inserta cada carácter en el `set`. El tamaño final del `set` será el número de problemas únicos resueltos.
3.  **Calcular Total de Globos:** Suma el número total de problemas resueltos (`n`) y el número de problemas únicos resueltos (el tamaño del `set`). Este será el número total de globos.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer la cadena `s`.
    c.  Crear un `set` vacío.
    d.  Iterar a través de cada carácter en la cadena `s` e insertarlo en el `set`.
    e.  Calcular el número total de globos como `n + tamaño_del_set`.
    f.  Imprimir el resultado.

## Notas Adicionales
*   **Eficiencia:** Este enfoque es eficiente, con una complejidad temporal de O(N) por caso de prueba en promedio debido a la inserción en el `set`.
*   **Restricción de `n`:** La pequeña restricción en `n` (hasta 50) hace que este enfoque sea muy rápido.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | En promedio con el uso de un set.   |
| Espacial | O(U)                   | Donde U es el número de problemas únicos (máx. 26). |
