# 1760B - Atilla's Favorite Problem

**Enlace:** https://codeforces.com/problemset/problem/1760/B

## Resumen del problema
Para escribir una cadena, Atilla necesita aprender todas las letras contenidas en ella. Atilla necesita escribir un mensaje representado por una cadena `s`. Se pregunta cuál es el tamaño mínimo del alfabeto requerido para poder escribir este mensaje. Un alfabeto de tamaño $x$ ($1 \le x \le 26$) contiene solo las primeras $x$ letras latinas. Por ejemplo, un alfabeto de tamaño 4 contiene solo los caracteres 'a', 'b', 'c' y 'd'.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un solo entero `n` ($1 \le n \le 100$), la longitud de la cadena.
    -   La segunda línea contiene una cadena `s` de longitud `n`, que consiste en letras latinas minúsculas.

## Output
Para cada caso de prueba, imprime un solo entero: el tamaño mínimo del alfabeto requerido.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| n (longitud) | [1, 100]   |                                     |
| s (cadena)   | longitud n | Letras latinas minúsculas           |

## Ejemplos

| Input (n, s) | n | s     | Letra Máxima | Posición en Alfabeto | Output |
| :----------- | :- | :---- | :----------- | :------------------- | :----- |
| (3, "cat")   | 3 | "cat" | 't'          | 20                   | `20`   |
| (5, "apple") | 5 | "apple"| 'p'          | 16                   | `16`   |
| (1, "b")     | 1 | "b"   | 'b'          | 2                    | `2`    |

## Forma de resolverlo

### Enfoque Algorítmico (Encontrar la Letra Máxima)
El tamaño mínimo del alfabeto requerido para escribir una cadena es determinado por la letra "más grande" (la que aparece más tarde en el orden alfabético) presente en la cadena. Si la letra más grande es la $k$-ésima letra del alfabeto, entonces se necesita un alfabeto de tamaño $k$.

1.  **Encontrar la Letra Máxima:** Itera sobre la cadena de entrada para encontrar el carácter con el valor alfabético más alto. Esto se puede hacer comparando los valores ASCII de los caracteres.
2.  **Determinar el Tamaño del Alfabeto:** Una vez que se encuentra el carácter máximo, su posición en el alfabeto (1 para 'a', 2 para 'b', ..., 26 para 'z') es el tamaño mínimo del alfabeto requerido. Esto se puede calcular restando el valor ASCII de 'a' (97) al valor ASCII del carácter máximo y sumando 1, o restando 96 como se vio en las implementaciones locales.

## Análisis Matemático
El problema se puede formalizar utilizando el concepto de orden lexicográfico en el conjunto de caracteres latinos minúsculos $\Sigma = \{'a', 'b', \dots, 'z'\}$. Dado una cadena $s = s_1s_2\dots s_n$, donde $s_i \in \Sigma$, buscamos el tamaño mínimo de un subconjunto inicial del alfabeto estándar $\Sigma_k = \{'a', 'b', \dots, \text{letra } k\text{-ésima}\}$ tal que todas las letras en $s$ estén contenidas en $\Sigma_k$.

Formalmente, sea $\text{pos}(c)$ la posición de una letra $c$ en el alfabeto (1 para 'a', 2 para 'b', ..., 26 para 'z'). El tamaño mínimo del alfabeto requerido es el máximo de las posiciones de todas las letras en la cadena $s$.
$$ \text{Tamaño mínimo del alfabeto} = \max_{i=1}^n \{ \text{pos}(s_i) \} $$
La función $\text{pos}(c)$ se puede calcular utilizando el valor ASCII de un carácter. Si $\text{ASCII}(c)$ es el valor ASCII de la letra minúscula $c$, entonces $\text{pos}(c) = \text{ASCII}(c) - \text{ASCII}('a') + 1$. Dado que $\text{ASCII}('a') = 97$, esto es $\text{ASCII}(c) - 97 + 1 = \text{ASCII}(c) - 96$.

Por lo tanto, el tamaño mínimo del alfabeto es:
$$ \max_{i=1}^n \{ \text{ASCII}(s_i) \} - 96 $$
Este enfoque matemático confirma la lógica de encontrar el valor ASCII máximo y restarle 96.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer la cadena `s`.
    c.  Encontrar el valor ASCII máximo entre los caracteres de `s`.
    d.  Calcular el tamaño mínimo del alfabeto como `ascii_maximo - 96`.
    e.  Imprimir el resultado.

## Notas Adicionales
*   **Rango del Alfabeto:** El problema especifica que el tamaño del alfabeto $x$ está entre 1 y 26, lo cual es consistente con el alfabeto latino minúsculo.
*   **Eficiencia:** Encontrar el carácter máximo en una cadena de longitud `n` tiene una complejidad temporal de O(N).

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | Iteración lineal sobre la cadena.   |
| Espacial | O(1)                   | Espacio constante para almacenar el máximo. |
