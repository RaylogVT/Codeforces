# 1619A - Square String?

**Enlace:** https://codeforces.com/problemset/problem/1619/A

## Resumen del problema
Una cadena `s` se llama "cuadrada" (square) si es el resultado de concatenar alguna cadena `t` consigo misma (es decir, `s = t + t`). Dada una cadena `s`, debes determinar si es una cadena cuadrada o no.

## Input
-   La primera línea contiene un entero `t` (1 <= t <= 100), el número de casos de prueba.
-   Cada una de las siguientes `t` líneas contiene una sola cadena `s`, que consiste únicamente en letras minúsculas del alfabeto inglés. La longitud de `s` está entre 1 y 100, inclusive.

## Output
Para cada caso de prueba, imprime "YES" si la cadena `s` es cuadrada, o "NO" en caso contrario.

## Restricciones

| Variable      | Rango         | Notas                     |
| :------------ | :------------ | :------------------------ |
| t (casos)     | [1, 100]      |                           |
| s (longitud)  | [1, 100]      |                           |
| s (caracteres)| a-z (minúsculas) |                           |

## Ejemplos

| Input          | s          | Longitud | Par? | Mitad 1 | Mitad 2 | Iguales? | Output |
| :------------- | :--------- | :------- | :--- | :------ | :------ | :------- | :----- |
| 10 <br> a      | a          | 1        | No   | N/A     | N/A     | N/A      | `NO`   |
| 10 <br> aa     | aa         | 2        | Sí   | a       | a       | Sí       | `YES`  |
| 10 <br> aaa    | aaa        | 3        | No   | N/A     | N/A     | N/A      | `NO`   |
| 10 <br> abacaba| abacaba    | 7        | No   | N/A     | N/A     | N/A      | `NO`   |
| 10 <br> abcabc | abcabc     | 6        | Sí   | abc     | abc     | Sí       | `YES`  |
| 10 <br> zzaazzaa| zzaazzaa | 8        | Sí   | zzaa    | zzaa    | Sí       | `YES`  |
| 10 <br> abcd   | abcd       | 4        | Sí   | ab      | cd      | No       | `NO`   |

*Nota: Se omiten algunos ejemplos por brevedad.*

## Forma de resolverlo

### a) Enfoque Algorítmico (Verificación por Mitades)
La definición `s = t + t` impone dos condiciones directas sobre `s`:
1.  **Longitud:** La longitud de `s` debe ser el doble de la longitud de `t`, lo que significa que la longitud de `s` debe ser par. Si la longitud es impar, `s` no puede ser cuadrada.
2.  **Estructura:** Si la longitud es par, sea `m` la mitad de la longitud (`m = len(s) / 2`). La primera mitad de `s` (los primeros `m` caracteres) debe ser idéntica a la segunda mitad de `s` (los últimos `m` caracteres).
Por lo tanto, el algoritmo consiste en verificar estas dos condiciones.

### b) Enfoque Matemático/Estructural (Definición Directa)
La definición `s = t + t` implica:
1.  `len(s) = 2 * len(t)`. Esto requiere que `len(s)` sea par. Si `len(s)` es impar, no existe tal `t`.
2.  Si `len(s)` es par, sea `m = len(s) / 2`. Debemos verificar si `s[0...m-1]` (la primera mitad) es igual a `s[m...len(s)-1]` (la segunda mitad). Si son iguales, entonces `t = s[0...m-1]` (o `s[m...len(s)-1]`) y `s` es cuadrada. Si no son iguales, `s` no es cuadrada.

Ambos enfoques llevan a la misma lógica de verificación.

## Algoritmo (Basado en la lógica del código)
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer la cadena `s`.
    b.  Obtener la longitud de la cadena, `l = len(s)`.
    c.  Verificar si `l` es par (`l % 2 == 0`).
    d.  **Si `l` es impar:** Imprimir "NO".
    e.  **Si `l` es par:**
        i.   Calcular el punto medio: `mitad = l / 2`.
        ii.  Extraer la primera mitad de la cadena: `parte1 = s[0...mitad-1]`.
        iii. Extraer la segunda mitad de la cadena: `parte2 = s[mitad...l-1]`.
        iv.  Comparar `parte1` y `parte2`.
        v.   Si `parte1 == parte2`, imprimir "YES".
        vi.  Si `parte1 != parte2`, imprimir "NO".

## Notas Adicionales
*   **Condición Necesaria:** La longitud par es una condición necesaria pero no suficiente.
*   **Suficiencia:** Si la longitud es par Y la primera mitad es igual a la segunda mitad, entonces la cadena es cuadrada.
*   **Implementación:** Lenguajes como Python permiten comparar mitades fácilmente con slicing (`s[:mitad] == s[mitad:]`). C++ puede usar `substr`.

## Complejidad

| Tipo        | Complejidad (por caso) | Notas                                                     |
| :---------- | :--------------------- | :-------------------------------------------------------- |
| Temporal    | O(L)                   | Dominado por la comparación/extracción de las dos mitades. |
| Espacial    | O(L) / O(1) (aux)      | O(L) si se crean nuevas cadenas para las mitades. O(1) auxiliar si se comparan in-place. |

*Donde L es la longitud de la cadena `s`.*