# 1722A - Spell Check

**Enlace:** https://codeforces.com/problemset/problem/1722/A

## Resumen del problema
Timur quiere verificar si una cadena dada es una "ortografía correcta" de su nombre. Una cadena es una ortografía correcta si es una permutación de las letras de "Timur", con la condición específica de que la letra 'T' debe estar en mayúscula y las letras 'i', 'm', 'u', 'r' deben estar en minúscula. Dada una cadena, determina si es una ortografía correcta del nombre de Timur.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 10³), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un entero `n` (1 <= n <= 10), la longitud de la cadena.
    -   La segunda línea contiene una cadena `s` de longitud `n` compuesta solo por letras latinas mayúsculas o minúsculas.

## Output
Para cada caso de prueba, imprime "YES" (sin comillas) si la cadena `s` es una ortografía correcta del nombre de Timur, y "NO" (sin comillas) en caso contrario.

## Restricciones

| Variable     | Rango     | Notas                                     |
| :----------- | :-------- | :---------------------------------------- |
| t (casos)    | [1, 10³]  |                                           |
| n (longitud) | [1, 10]   |                                           |
| s (cadena)   | longitud n | Letras latinas mayúsculas o minúsculas |

## Ejemplos

| Input (n, s) | n | s      | ¿Ortografía Correcta? | Output |
| :----------- | :- | :----- | :-------------------- | :----- |
| (5, "Timur") | 5 | "Timur"| Sí                    | `YES`  |
| (5, "miurT") | 5 | "miurT"| Sí                    | `YES`  |
| (5, "Timru") | 5 | "Timru"| Sí                    | `YES`  |
| (4, "Timr")  | 4 | "Timr" | No (longitud)         | `NO`   |
| (5, "titur") | 5 | "titur"| No ('T' minúscula)    | `NO`   |
| (5, "TIMUR") | 5 | "TIMUR"| No (letras minúsculas)| `NO`   |

## Forma de resolverlo

### Enfoque Algorítmico (Verificación de Longitud y Contenido)
Para determinar si una cadena es una ortografía correcta del nombre de Timur, debemos verificar dos condiciones principales: su longitud y si contiene exactamente las letras requeridas con la capitalización correcta.

1.  **Verificar Longitud:** La cadena de entrada `s` debe tener una longitud exacta de 5, ya que "Timur" tiene 5 letras. Si la longitud es diferente de 5, la cadena no puede ser una ortografía correcta.
2.  **Verificar Contenido y Capitalización:** Si la longitud es 5, debemos verificar si la cadena contiene exactamente las letras 'T', 'i', 'm', 'u', 'r' con la capitalización especificada. Una forma eficiente de hacer esto es contar la frecuencia de cada carácter en la cadena de entrada y compararla con la frecuencia de los caracteres en "Timur". Alternativamente, se puede verificar la presencia de cada carácter requerido individualmente, asegurando la capitalización correcta.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer la cadena `s`.
    c.  Si `n` es diferente de 5, imprimir "NO".
    d.  Si `n` es igual a 5:
        i.  Verificar si la cadena `s` contiene exactamente una 'T' mayúscula, una 'i' minúscula, una 'm' minúscula, una 'u' minúscula y una 'r' minúscula. Una forma de hacer esto es ordenar la cadena `s` y compararla con la cadena "Timru" ordenada (que sería "Timru"). O, como se vio en las implementaciones locales, verificar la presencia de cada carácter requerido.
        ii. Si contiene todas las letras requeridas con la capitalización correcta, imprimir "YES".
        iii. De lo contrario, imprimir "NO".

## Notas Adicionales
*   **Permutaciones:** El problema permite cualquier permutación de las letras, siempre y cuando se cumpla la condición de capitalización.
*   **Eficiencia:** La verificación de longitud y contenido es muy eficiente, con una complejidad temporal de O(N) o O(N log N) si se usa ordenación, y una complejidad espacial de O(1) o O(N) dependiendo del enfoque. Dada la pequeña restricción en `n`, ambos enfoques son muy rápidos.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                                                                 |
| :------- | :--------------------- | :-------------------------------------------------------------------- |
| Temporal | O(N) o O(N log N)      | O(N) con conteo o verificación de presencia. O(N log N) con ordenación. |
| Espacial | O(1) o O(N)            | O(1) para verificación de presencia. O(N) para conteo o copia de cadena. |
