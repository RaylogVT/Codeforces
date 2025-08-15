# 1791C - Prepend and Append

**Enlace:** https://codeforces.com/problemset/problem/1791/C

## Resumen del problema
Timur inicialmente tenía una cadena binaria (posiblemente vacía). Realizó la siguiente operación varias veces (posiblemente cero): añadir un '0' a un extremo de la cadena y un '1' al otro extremo. Dada la cadena final de Timur, ¿cuál es la longitud de la cadena más corta posible con la que pudo haber comenzado?

## Input
-   La primera línea contiene un entero `t` ($1 \le t \le 100$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene un entero `n` ($1 \le n \le 2000$), la longitud de la cadena final de Timur.
    -   La segunda línea contiene una cadena `s` de longitud `n` que consiste en caracteres '0' o '1', denotando la cadena final.

## Output
Para cada caso de prueba, imprime un solo entero no negativo: la longitud más corta posible de la cadena original de Timur. Ten en cuenta que la cadena original de Timur podría haber estado vacía, en cuyo caso debes imprimir 0.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 100]   |                                     |
| n (longitud) | [1, 2000]  |                                     |
| s (cadena)   | longitud n | Caracteres '0' o '1'                |

## Ejemplos

| Input (n, s) | n | s        | Proceso Inverso (Eliminación) | Longitud Final | Output |
| :----------- | :-: | :------- | :---------------------------- | :-------------: | :----- |
| (3, "100")   | 3 | "100"    | "100" -> "0" (eliminar 1 y 0) | 1              | `1`    |
| (4, "0111")  | 4 | "0111"   | "0111" -> "11" (eliminar 0 y 1)| 2              | `2`    |
| (5, "10101") | 5 | "10101"  | "10101" -> "010" -> "1"       | 1              | `1`    |
| (6, "110001")| 6 | "110001" | "110001" -> "1000" -> "00"    | 2              | `2`    |
| (1, "0")     | 1 | "0"      | "0"                           | 1              | `1`    |
| (1, "1")     | 1 | "1"      | "1"                           | 1              | `1`    |

## Forma de resolverlo

### Enfoque Algorítmico (Dos Punteros)
La operación inversa a añadir un '0' a un extremo y un '1' al otro es eliminar un '0' de un extremo y un '1' del otro. Para encontrar la cadena original más corta posible, debemos realizar esta operación inversa tantas veces como sea posible. Esto se puede lograr utilizando un enfoque de dos punteros, uno en el inicio de la cadena y otro en el final.

1.  **Inicializar Punteros:** Coloca un puntero `izquierda` en el índice 0 y un puntero `derecha` en el índice `n-1`.
2.  **Eliminación Inversa:** Mientras el puntero `izquierda` sea menor que el puntero `derecha` y los caracteres en `s[izquierda]` y `s[derecha]` sean diferentes ('0' y '1' en cualquier orden), podemos "deshacer" una operación. Para hacer esto, movemos `izquierda` un paso a la derecha (`izquierda++`) e `derecha` un paso a la izquierda (`derecha--`).
3.  **Longitud de la Subcadena Central:** Cuando el bucle termina (ya sea porque los punteros se cruzaron o porque los caracteres en los extremos son iguales), la subcadena restante entre `izquierda` y `derecha` (inclusive) es la cadena original más corta posible. Su longitud es `derecha - izquierda + 1`. Si los punteros se cruzaron (`derecha < izquierda`), la cadena original más corta era vacía, con longitud 0.

## Análisis Matemático
Consideremos la operación como una transformación $T(s)$ que produce $0s1$ o $1s0$. Dada una cadena final $s_f$, buscamos la cadena inicial $s_0$ de longitud mínima tal que $s_f$ se pueda obtener aplicando $T$ repetidamente a $s_0$. Esto es equivalente a encontrar la cadena $s_0$ de longitud mínima tal que $s_f$ es de la forma $c_1 c_2 \dots c_k s_0 d_k \dots d_2 d_1$, donde para cada $i \in \{1, \dots, k\}$, el par $\{c_i, d_i\}$ es igual al conjunto $\{'0', '1'\}$.

La operación inversa consiste en eliminar un '0' de un extremo y un '1' del otro. Si la cadena actual es $c s' d$ donde $\{c, d\} = \{'0', '1'\}$, podemos obtener $s'$. Si $c=d$, la operación inversa no es posible con esos caracteres específicos en los extremos.

El proceso de dos punteros implementa esta operación inversa. En cada paso, si el carácter en el puntero izquierdo $s[L]$ es diferente del carácter en el puntero derecho $s[R]$, significa que estos caracteres podrían haber sido añadidos en la última operación $T$. Al mover los punteros hacia adentro, estamos efectivamente "eliminando" este par de caracteres. El proceso se detiene cuando los caracteres en los punteros son iguales ($s[L] = s[R]$) o cuando los punteros se cruzan o coinciden ($L \ge R$).

Sea $L$ el índice del puntero izquierdo y $R$ el índice del puntero derecho. Inicialmente, $L=0$ y $R=n-1$. La condición para continuar la eliminación inversa es $s[L] \ne s[R]$ y $L < R$. El bucle se ejecuta mientras esta condición sea cierta, actualizando los punteros en cada paso:
$L \leftarrow L+1$
$R \leftarrow R-1$

Cuando el bucle termina, la subcadena restante es $s[L \dots R]$ (los caracteres desde el índice $L$ hasta el índice $R$, inclusive). La longitud de esta subcadena es $R - L + 1$. Si $R < L$ (los punteros se cruzaron), la subcadena es vacía y la longitud es 0. Esto se calcula correctamente como $R - L + 1 \le (L-1) - L + 1 = 0$.

Este enfoque de "deshacer" la operación confirma que la longitud mínima de la cadena original se obtiene eliminando el número máximo posible de pares '0' y '1' de los extremos opuestos.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer la cadena `s`.
    c.  Inicializar `izquierda = 0`, `derecha = n - 1`.
    d.  Mientras `izquierda < derecha`:
        i.  Si `s[izquierda]` es diferente de `s[derecha]`:
            1.  Incrementar `izquierda`.
            2.  Decrementar `derecha`.
        ii. Si no (si `s[izquierda]` es igual a `s[derecha]`), romper el bucle.
    e.  Calcular la longitud resultante. Si `izquierda > derecha`, la longitud es 0. De lo contrario, la longitud es `derecha - izquierda + 1`.
    f.  Imprimir la longitud calculada.

## Notas Adicionales
*   **Cadena Vacía:** Si la cadena original era vacía, la cadena final tendrá una estructura donde todos los caracteres se pueden eliminar en pares '0' y '1'. En este caso, los punteros se cruzarán (`derecha < izquierda`), y la longitud calculada `derecha - izquierda + 1` será 0 o menor, lo que correctamente indica una longitud de 0.
*   **Eficiencia:** El enfoque de dos punteros recorre la cadena como máximo una vez (cada puntero se mueve hacia el centro), lo que resulta en una complejidad temporal de O(N) por caso de prueba.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | Recorrido lineal con dos punteros. |
| Espacial | O(1)                   | Espacio constante para los punteros. |