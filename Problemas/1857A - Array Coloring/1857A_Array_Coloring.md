# 1857A - Array Coloring

**Enlace:** https://codeforces.com/problemset/problem/1857/A

## Resumen del problema
Se te da un arreglo `a` de `n` enteros. Tu tarea es determinar si es posible colorear cada elemento del arreglo con uno de dos colores (digamos, rojo y azul) de tal manera que:
1.  Cada color se use para al menos un elemento.
2.  La suma de todos los elementos rojos tenga la misma paridad (par o impar) que la suma de todos los elementos azules.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Cada caso de prueba comienza con una línea conteniendo un entero `n` ($2 \le n \le 50$), la longitud del arreglo `a`.
-   La siguiente línea contiene `n` enteros $a_1, a_2, \dots, a_n$ ($1 \le a_i \le 50$), los elementos del arreglo `a`.

## Output
Para cada caso de prueba, imprime "YES" si es posible realizar la coloración descrita, y "NO" en caso contrario.

## Restricciones

| Variable     | Rango      | Notas                                     |
| :----------- | :--------- | :---------------------------------------- |
| t (casos)    | [1, 1000]  |                                           |
| n (longitud) | [2, 50]    | Longitud del arreglo                      |
| a_i (elementos)| [1, 50]    | Elementos del arreglo                     |
| Adicionales  |            | Cada color con al menos un elemento.      |

## Ejemplos

| Input (n, arreglo)      | n | Arreglo ($a_i$) | Suma Total $S$ | Paridad de $S$ | ¿Posible Colorear? (Ej: Rojo, Azul) | Output |
| :---------------------- | :-: | :-------------- | :------------: | :------------: | :---------------------------------- | :----- |
| (7, [1,2,4,3,2,3,5])    | 7 | 1,2,4,3,2,3,5   | 20             | Par            | Sí (Ej: R={1,2,4,3}, Azul={2,3,5}. Sumas 10 (Par), 10 (Par)) | `YES`  |
| (2, [4, 7])             | 2 | 4, 7            | 11             | Impar          | No                                  | `NO`   |
| (3, [3, 9, 8])          | 3 | 3, 9, 8         | 20             | Par            | Sí (Ej: R={3,9}, Azul={8}. Sumas 12 (Par), 8 (Par)) | `YES`  |
| (2, [2, 2])             | 2 | 2, 2            | 4              | Par            | Sí (Ej: R={2}, Azul={2}. Sumas 2 (Par), 2 (Par)) | `YES`  |
*(Nota: El primer ejemplo del problema original tenía 8 elementos, aquí se usaron 7 para simplificar, pero la lógica es la misma. Si se usaran los 8 del original, la suma sería 24, par, y la respuesta seguiría siendo YES)*

## Forma de resolverlo

### Enfoque Algorítmico (Análisis de Paridad de la Suma Total)
La clave del problema está en entender cómo se comporta la paridad de las sumas. Si dividimos el arreglo en dos conjuntos (uno para cada color), la suma de los elementos en el primer conjunto ($S_1$) y la suma de los elementos en el segundo conjunto ($S_2$) deben sumar la suma total del arreglo ($S$). Queremos que $S_1$ y $S_2$ tengan la misma paridad.

Consideremos las reglas de paridad para la suma:
-   Par + Par = Par
-   Impar + Impar = Par
-   Par + Impar = Impar

Si $S_1$ y $S_2$ tienen la misma paridad (ambas pares o ambas impares), su suma $S = S_1 + S_2$ *siempre* será par.
Si $S_1$ y $S_2$ tienen diferente paridad, su suma $S = S_1 + S_2$ *siempre* será impar.

Por lo tanto, para que sea posible tener $S_1$ y $S_2$ con la misma paridad, es *necesario* que la suma total $S$ del arreglo sea par.

¿Es esta condición también *suficiente*? Sí. Si la suma total $S$ es par, siempre podemos encontrar una coloración válida (dado que $n \ge 2$). Una forma simple es colorear el primer elemento $a_1$ de rojo y todos los demás elementos $a_2, \dots, a_n$ de azul. Como $n \ge 2$, ambos colores tienen al menos un elemento. La suma roja es $S_1 = a_1$. La suma azul es $S_2 = a_2 + \dots + a_n = S - a_1$. ¿Tienen $S_1$ y $S_2$ la misma paridad si $S$ es par? Tienen la misma paridad si $S_1 \equiv S_2 \pmod 2$, lo cual es $a_1 \equiv S - a_1 \pmod 2$. Sumando $a_1$ a ambos lados (módulo 2), obtenemos $2a_1 \equiv S \pmod 2$. Como $2a_1$ siempre es par ($2a_1 \equiv 0 \pmod 2$), la condición se cumple si y only si $0 \equiv S \pmod 2$, es decir, si $S$ es par.

Conclusión: Es posible colorear el arreglo según las reglas si y solo si la suma total de sus elementos es par.

## Análisis Matemático: Propiedades de Paridad de Sumas

**1. Definiciones:**
Sea $A = \{a_1, a_2, \dots, a_n\}$ el arreglo.
Buscamos una partición de $A$ en dos conjuntos no vacíos, $A_{rojo}$ y $A_{azul}$, tal que:
*   $A_{rojo} \cup A_{azul} = A$
*   $A_{rojo} \cap A_{azul} = \emptyset$
*   $A_{rojo} \ne \emptyset$, $A_{azul} \ne \emptyset$
Sea $S_{rojo} = \sum_{x \in A_{rojo}} x$ y $S_{azul} = \sum_{y \in A_{azul}} y$.
La condición requerida es que $S_{rojo}$ y $S_{azul}$ tengan la misma paridad:
$$ S_{rojo} \equiv S_{azul} \pmod 2 $$

**2. Relación con la Suma Total:**
La suma total de los elementos del arreglo es $S = \sum_{i=1}^n a_i$.
Como $A_{rojo}$ y $A_{azul}$ forman una partición de $A$, tenemos $S = S_{rojo} + S_{azul}$.

**3. Condición Necesaria:**
Supongamos que es posible encontrar una coloración tal que $S_{rojo} \equiv S_{azul} \pmod 2$.
Consideremos la paridad de la suma total $S$:
$$ S = S_{rojo} + S_{azul} $$
Tomando módulo 2:
$$ S \pmod 2 \equiv (S_{rojo} + S_{azul}) \pmod 2 $$
Como $S_{rojo} \equiv S_{azul} \pmod 2$, podemos reemplazar $S_{azul}$ por $S_{rojo}$:
$$ S \pmod 2 \equiv (S_{rojo} + S_{rojo}) \pmod 2 $$
$$ S \pmod 2 \equiv 2 \cdot S_{rojo} \pmod 2 $$
Dado que $2 \cdot S_{rojo}$ siempre es par, $2 \cdot S_{rojo} \equiv 0 \pmod 2$.
Por lo tanto, si la condición se cumple, necesariamente debemos tener:
$$ S \pmod 2 \equiv 0 $$
Esto significa que la suma total $S$ debe ser par.

**4. Condición Suficiente:**
Ahora, supongamos que la suma total $S$ es par ($S \equiv 0 \pmod 2$). ¿Podemos siempre encontrar una coloración válida?
Consideremos la siguiente coloración:
*   Colorear $a_1$ de rojo ($A_{rojo} = \{a_1\}$).
*   Colorear $a_2, \dots, a_n$ de azul ($A_{azul} = \{a_2, \dots, a_n\}$).
Como $n \ge 2$, ambos conjuntos son no vacíos.
Las sumas son $S_{rojo} = a_1$ y $S_{azul} = S - a_1$.
Necesitamos verificar si $S_{rojo} \equiv S_{azul} \pmod 2$.
$$ a_1 \equiv S - a_1 \pmod 2 $$
Sumamos $a_1$ a ambos lados (módulo 2):
$$ a_1 + a_1 \equiv S - a_1 + a_1 \pmod 2 $$
$$ 2a_1 \equiv S \pmod 2 $$
$$ 0 \equiv S \pmod 2 $$
Esta condición es exactamente la que supusimos (que $S$ es par). Por lo tanto, si $S$ es par, esta coloración específica funciona (las sumas tienen la misma paridad).

**5. Conclusión:**
La condición $S \pmod 2 \equiv 0$ (la suma total es par) es tanto necesaria como suficiente para que exista una coloración válida.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer la lista de `n` enteros $a = [a_1, a_2, \dots, a_n]$.
    c.  Calcular la suma total de los elementos: `S = sum(a)`.
    d.  Verificar si `S` es par: `if S % 2 == 0:`
    e.  Si `S` es par, imprimir "YES".
    f.  Si `S` es impar, imprimir "NO".

## Notas Adicionales
*   **Paridad de la Suma:** La forma más eficiente de determinar la paridad de la suma es sumar las paridades de los elementos individuales. La suma es par si y solo si hay un número par de elementos impares. Alternativamente, se puede calcular la suma completa y verificar su paridad.
*   **Restricción $n \ge 2$:** Es crucial porque garantiza que siempre podemos dividir el arreglo en dos conjuntos no vacíos.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                                            |
| :------- | :--------------------- | :----------------------------------------------- |
| Temporal | O(N)                   | Calcular la suma de los N elementos.            |
| Espacial | O(N)                   | Para almacenar el arreglo (puede optimizarse a O(1)). |