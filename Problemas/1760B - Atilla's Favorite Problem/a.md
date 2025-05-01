# 1760B - Atilla's Favorite Problem

**Enlace:** https://codeforces.com/problemset/problem/1760/B

## Resumen del problema
Para escribir una cadena, Atilla necesita aprender primero todas las letras que contiene. Atilla necesita escribir un mensaje representado por una cadena `s`. Se pregunta cuál es el tamaño mínimo del alfabeto necesario para poder escribir este mensaje. Un alfabeto de tamaño `x` (1 <= x <= 26) contiene solo las primeras `x` letras latinas. Por ejemplo, un alfabeto de tamaño 4 contiene solo los caracteres 'a', 'b', 'c' y 'd'.

## Input
-   La primera línea contiene un solo entero `t` (1 <= t <= 1000), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un solo entero `n` (1 <= n <= 100), la longitud de la cadena.
    -   La segunda línea contiene una cadena `s` de longitud `n`, compuesta solo por letras latinas minúsculas.

## Output
Para cada caso de prueba, imprime un solo entero: el tamaño mínimo del alfabeto requerido.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| n (longitud) | [1, 100]   |                                     |
| s (cadena)   | longitud n | Letras latinas minúsculas           |

## Ejemplos

| Input (n, s) | n | s     | Letra de mayor valor | Tamaño mínimo alfabeto | Output |
| :----------- | :- | :---- | :------------------- | :--------------------- | :----- |
| (3, "a")     | 3 | "a"   | 'a'                  | 1                      | `1`    |
| (5, "abc")   | 5 | "abc" | 'c'                  | 3                      | `3`    |
| (7, "zzza")  | 7 | "zzza"| 'z'                  | 26                     | `26`   |
| (1, "b")     | 1 | "b"   | 'b'                  | 2                      | `2`    |

## Forma de resolverlo

### Enfoque Algorítmico (Encontrar la Letra de Mayor Valor)
El tamaño mínimo del alfabeto necesario para escribir una cadena está determinado por la letra en la cadena que tiene el mayor valor alfabético. Si la letra de mayor valor es la k-ésima letra del alfabeto (donde 'a' es la 1ª, 'b' es la 2ª, etc.), entonces se necesita un alfabeto de tamaño k.

1.  **Encontrar la Letra Máxima:** Itera sobre la cadena de entrada para encontrar el carácter con el mayor valor alfabético. Esto se puede hacer comparando los valores ASCII de los caracteres.
2.  **Calcular Tamaño del Alfabeto:** Una vez que se encuentra el carácter máximo, determina su posición en el alfabeto. Si el carácter máximo es `c`, su posición es `ASCII(c) - ASCII('a') + 1`. Dado que `ASCII('a')` es 97, esto es `ASCII(c) - 97 + 1 = ASCII(c) - 96`. Este valor es el tamaño mínimo del alfabeto requerido.

## Análisis Matemático
El problema puede formalizarse utilizando una función de mapeo del conjunto de caracteres latinos minúsculos al conjunto de enteros positivos $\{1, 2, \dots, 26\}$. Sea $v: \{\text{'a', 'b', ..., 'z'}\} \to \{1, 2, \dots, 26\}$ una función que asigna a cada carácter su posición en el alfabeto (ej. $v('a')=1, v('b')=2, \dots, v('z')=26$). Esta función es biyectiva.

Dada una cadena $s = s_1s_2\dots s_n$, el conjunto de caracteres utilizados en la cadena es $C = \{s_i \mid 1 \le i \le n\}$. Buscamos el entero positivo más pequeño $x$ tal que el conjunto $C$ sea un subconjunto del conjunto de las primeras $x$ letras del alfabeto, denotado $A_x = \{c \mid v(c) \le x\}$. Es decir, buscamos el mínimo $x$ tal que $C \subseteq \{c \mid v(c) \le x\}$.

Esta condición es equivalente a encontrar el valor máximo de la función $v$ aplicado a cualquier carácter en la cadena:
$$x = \max_{c \in C} \{v(c)\}$$
Dado que $C = \{s_i \mid 1 \le i \le n\}$, esto se convierte en:
$$x = \max_{1 \le i \le n} \{v(s_i)\}$$
La función $v(c)$ puede calcularse a partir del valor ASCII del carácter $c$. Si $ASCII(c)$ es el valor ASCII de $c$, entonces $v(c) = ASCII(c) - ASCII('a') + 1$. Como $ASCII('a') = 97$, tenemos $v(c) = ASCII(c) - 97 + 1 = ASCII(c) - 96$.

Por lo tanto, el tamaño mínimo del alfabeto requerido es:
$$x = \max_{1 \le i \le n} \{ASCII(s_i)\} - 96$$
Este análisis matemático formaliza la intuición algorítmica y confirma que encontrar el carácter con el mayor valor ASCII y aplicar la transformación $ASCII(c) - 96$ es la solución correcta. Desde la perspectiva de la teoría de conjuntos, estamos encontrando el rango mínimo del alfabeto que cubre el conjunto de caracteres presentes en la cadena.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer la cadena `s`.
    c.  Inicializar `max_ascii = 0`.
    d.  Iterar a través de cada `caracter` en la cadena `s`:
        i.  Obtener el valor ASCII del `caracter`.
        ii. Actualizar `max_ascii = max(max_ascii, ASCII(caracter))`.
    e.  Calcular el tamaño mínimo del alfabeto como `max_ascii - 96`.
    f.  Imprimir el resultado.

## Notas Adicionales
*   **Rango de Letras:** El problema especifica letras latinas minúsculas, lo que limita el rango de valores ASCII relevantes.
*   **Eficiencia:** Encontrar el máximo valor ASCII en la cadena es una operación lineal, lo que resulta en una solución eficiente con complejidad temporal O(N) por caso de prueba.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | Iteración lineal sobre la cadena.   |
| Espacial | O(1)                   | Espacio auxiliar constante.         |
