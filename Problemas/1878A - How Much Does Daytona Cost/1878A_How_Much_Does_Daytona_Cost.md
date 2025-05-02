# 1878A - How Much Does Daytona Cost?

**Enlace:** https://codeforces.com/problemset/problem/1878/A

## Resumen del problema
Se te da un arreglo `a` de tamaño `n` y un entero `k`. Debes determinar si existe un subsegmento no vacío del arreglo `a` donde `k` es el elemento *más común*. Un entero `x` es el más común en un subsegmento si su número de ocurrencias en ese subsegmento es estrictamente mayor que el número de ocurrencias de cualquier *otro* entero `y` ($y \ne x$) en ese mismo subsegmento.

**Simplificación Clave:** El problema se reduce a verificar si el entero `k` está presente en el arreglo `a` original. Si `k` existe en `a` (digamos $a_i = k$), podemos considerar el subsegmento de longitud 1 que consiste únicamente en ese elemento: $[a_i] = [k]$. En este subsegmento, `k` aparece 1 vez, y cualquier otro entero aparece 0 veces. Como $1 > 0$, `k` es el elemento más común. Si `k` no existe en el arreglo `a`, no puede aparecer en ningún subsegmento, por lo que su frecuencia siempre será 0 y no podrá ser estrictamente mayor que la frecuencia de otros elementos.

Por lo tanto, la tarea es simplemente determinar si `k` aparece al menos una vez en `a`.

## Input
-   La primera línea contiene un entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   La primera línea de cada caso de prueba contiene dos enteros `n` ($1 \le n \le 100$) y `k` ($1 \le k \le 100$). `n` es el tamaño del arreglo y `k` es el valor buscado.
-   La segunda línea de cada caso de prueba contiene `n` enteros $a_1, a_2, \dots, a_n$ ($1 \le a_i \le 100$), los elementos del arreglo `a`.

## Output
Para cada caso de prueba, imprime "YES" si `k` está presente en el arreglo `a`, y "NO" en caso contrario.

## Restricciones

| Variable     | Rango      | Notas                                     |
| :----------- | :--------- | :---------------------------------------- |
| t (casos)    | [1, 1000]  |                                           |
| n (tamaño)   | [1, 100]   | Tamaño del arreglo                        |
| k (valor)    | [1, 100]   | Valor cuya existencia se verifica         |
| a_i (elementos)| [1, 100]   | Elementos del arreglo                     |

## Ejemplos

| Input (n, k, arreglo)      | n | k | Arreglo ($a_i$) | ¿k está presente en el arreglo? | Output |
| :------------------------- | :-: | :-: | :-------------- | :------------------------------: | :----- |
| (5, 4, [1, 4, 3, 4, 1])    | 5 | 4 | 1, 4, 3, 4, 1   | Sí (en índices 1 y 3, 0-based) | `YES`  |
| (4, 1, [2, 3, 4, 4])       | 4 | 1 | 2, 3, 4, 4      | No                               | `NO`   |
| (6, 6, [4, 3, 5, 60, 4, 2])| 6 | 6 | 4, 3, 5, 60, 4, 2| No                               | `NO`   |
| (2, 5, [2, 5])             | 2 | 5 | 2, 5            | Sí (en índice 1, 0-based)      | `YES`  |

## Forma de resolverlo

### Enfoque Algorítmico (Búsqueda Lineal)
Dada la simplificación del problema a verificar si `k` existe en el arreglo `a`, podemos usar una búsqueda lineal simple.

1.  **Leer Datos:** Lee `n`, `k` y el arreglo `a`.
2.  **Iterar:** Recorre cada elemento $a_i$ del arreglo `a`.
3.  **Comparar:** Compara $a_i$ con `k`.
4.  **Marcar si se Encuentra:** Si encuentras algún $a_i$ tal que $a_i = k$, marca que `k` ha sido encontrado (puedes usar una bandera booleana) y puedes detener la iteración inmediatamente (ya que solo necesitamos saber si existe al menos una vez).
5.  **Decidir Salida:** Después de la iteración (o si te detuviste antes), si marcaste que `k` fue encontrado, imprime "YES". Si terminaste de recorrer todo el arreglo sin encontrar `k`, imprime "NO".

## Análisis Matemático: Reducción a Problema de Existencia

**1. Problema Original:**
Buscamos si existe un subsegmento $S'$ de $A = [a_1, \dots, a_n]$ tal que para el valor $k$, su frecuencia en $S'$ sea estrictamente mayor que la frecuencia de cualquier otro elemento $x \neq k$ en $S'$.
Formalmente, $\exists S' \subseteq A$ (subsegmento no vacío) tal que:
$$ \text{freq}(k, S') > \text{freq}(x, S') \quad \forall x \neq k $$
donde $\text{freq}(y, S')$ es el número de veces que $y$ aparece en el subsegmento $S'$.

**2. Caso 1: $k$ existe en el arreglo $A$.**
Supongamos que existe al menos un índice $i$ tal que $a_i = k$.
Consideremos el subsegmento más simple posible que contiene esta ocurrencia: $S' = [a_i]$. Este es un subsegmento de longitud 1.
Calculemos las frecuencias en $S' = [k]$:
*   $\text{freq}(k, S') = 1$.
*   Para cualquier otro elemento $x \neq k$, $x$ no está en $S'$, por lo tanto, $\text{freq}(x, S') = 0$.
Verifiquemos la condición: ¿Es $\text{freq}(k, S') > \text{freq}(x, S')$ para todo $x \neq k$?
$$ 1 > 0 $$
La condición se cumple. Por lo tanto, si $k$ existe en el arreglo $A$, siempre podemos encontrar un subsegmento (de longitud 1) donde $k$ es el elemento más común.

**3. Caso 2: $k$ no existe en el arreglo $A$.**
Si $k$ no está en $A$, entonces $k$ no puede estar presente en *ningún* subsegmento $S'$ de $A$.
Esto significa que para cualquier subsegmento $S'$, la frecuencia de $k$ será:
$$ \text{freq}(k, S') = 0 $$
Para que $k$ sea el elemento más común en $S'$, necesitaríamos que $0 > \text{freq}(x, S')$ para todo $x \neq k$. Sin embargo, las frecuencias son siempre $\ge 0$. No es posible tener $0 > \text{freq}(x, S')$. Por lo tanto, si $k$ no está en el arreglo, no puede ser el elemento más común en ningún subsegmento.

**4. Conclusión:**
La existencia de un subsegmento donde $k$ es el elemento más común es lógicamente equivalente a la existencia de $k$ en el arreglo original $A$.
El problema se reduce a determinar si $k \in \{a_1, a_2, \dots, a_n\}$.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n` y `k`.
    b.  Leer la lista de `n` enteros $a = [a_1, a_2, \dots, a_n]$.
    c.  Inicializar una variable booleana `k_encontrado = false`.
    d.  Iterar `i` desde 0 hasta `n-1`:
        i.  Si `a[i] == k`:
            1.  Establecer `k_encontrado = true`.
            2.  Salir del bucle (break), ya no es necesario seguir buscando.
    e.  Si `k_encontrado` es `true`, imprimir "YES".
    f.  Si `k_encontrado` es `false`, imprimir "NO".

## Notas Adicionales
*   **Simplificación Crucial:** Reconocer que un subsegmento de longitud 1 es suficiente si $k$ existe es la clave para evitar algoritmos complejos de subsegmentos.
*   **Alternativa de Búsqueda:** En muchos lenguajes, existen funciones o métodos incorporados para verificar si un elemento existe en una lista o arreglo (ej. `in` en Python, `std::find` en C++), que implementan internamente una búsqueda lineal o similar.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                                            |
| :------- | :--------------------- | :----------------------------------------------- |
| Temporal | O(N)                   | Búsqueda lineal en el arreglo de tamaño N.       |
| Espacial | O(N)                   | Para almacenar el arreglo (puede optimizarse a O(1) si se procesa la entrada directamente). |