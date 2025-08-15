# 1980A - Problem Generator

**Enlace:** https://codeforces.com/problemset/problem/1980/A

## Resumen del problema
Tienes un banco de problemas y quieres organizar `M` rondas de un concurso. Para cada ronda, necesitas seleccionar un problema de cada uno de los 7 tipos de dificultad, que van de 'A' a 'G'. Se te da la cantidad actual de problemas en tu banco. Debes determinar el número mínimo de problemas adicionales que necesitas agregar a tu banco para poder organizar las `M` rondas.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene dos enteros `n` ($1 \le n \le 100$) y `m` ($1 \le m \le 100$), donde `n` es la cantidad de problemas en el banco y `m` es el número de rondas a realizar.
    -   La segunda línea contiene una cadena `s` de longitud `n`, que representa los problemas actualmente en el banco. Cada carácter de la cadena es una letra mayúscula de 'A' a 'G', indicando la dificultad del problema.

## Output
Para cada caso de prueba, imprime un solo entero: el número mínimo de problemas adicionales que se necesitan.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| n (longitud) | [1, 100]   | Longitud de la cadena `s`           |
| m (rondas)   | [1, 100]   | Número de rondas a organizar        |
| s (cadena)   | longitud n | Caracteres 'A' a 'G'                |

## Ejemplos

| Input (n, m, s) | n | m | s       | Recuento por Dificultad | Problemas Necesarios | Output |
| :-------------- | :- | :- | :------ | :---------------------- | :------------------- | :----- |
| (5, 2, "AABBC") | 5 | 2 | "AABBC" | A:2, B:2, C:1, D:0, E:0, F:0, G:0 | C: (2-1)=1, D: (2-0)=2, E: (2-0)=2, F: (2-0)=2, G: (2-0)=2. Total: 1+2+2+2+2 = 9 | `9`    |
| (7, 1, "ABCDEFG")| 7 | 1 | "ABCDEFG"| A:1, B:1, C:1, D:1, E:1, F:1, G:1 | Todos tienen al menos 1. Total: 0 | `0`    |
| (3, 5, "AAA")   | 3 | 5 | "AAA"   | A:3, B:0, C:0, D:0, E:0, F:0, G:0 | A: (5-3)=2, B: (5-0)=5, C: (5-0)=5, D: (5-0)=5, E: (5-0)=5, F: (5-0)=5, G: (5-0)=5. Total: 2+5*6 = 32 | `32`   |

## Forma de resolverlo

### Enfoque Algorítmico (Conteo y Déficit)
El problema requiere que para cada una de las 7 dificultades ('A' a 'G'), tengamos al menos `m` problemas disponibles. Si para una dificultad específica ya tenemos `x` problemas, y `x` es menor que `m`, entonces necesitamos agregar `m - x` problemas de esa dificultad. Si `x` es igual o mayor que `m`, no necesitamos agregar problemas de esa dificultad. El objetivo es calcular la suma total de estos déficits para todas las dificultades.

1.  **Identificar Dificultades Requeridas:** El problema especifica que las dificultades son 'A', 'B', 'C', 'D', 'E', 'F' y 'G'.
2.  **Contar Problemas Existentes:** Para cada una de estas 7 dificultades, se cuenta cuántas veces aparece en la cadena `s` (el banco de problemas actual).
3.  **Calcular Déficit:** Para cada dificultad, se compara el conteo actual con el número de rondas `m`. Si el conteo es menor que `m`, la diferencia (`m - conteo_actual`) se suma a un total acumulado de problemas a agregar.
4.  **Suma Total:** El valor acumulado final es la cantidad mínima de problemas adicionales necesarios.

## Análisis Matemático
Sea $S$ la cadena que representa el banco de problemas actual, y $N$ su longitud.
Sea $M$ el número de rondas a realizar.
Las dificultades requeridas son el conjunto $\mathcal{D} = \{'A', 'B', 'C', 'D', 'E', 'F', 'G'\}$.

Para cada dificultad $d \in \mathcal{D}$, sea $count(d, S)$ el número de ocurrencias de la letra $d$ en la cadena $S$.
El número de problemas adicionales necesarios para la dificultad $d$ es $\max(0, M - count(d, S))$.

El número total mínimo de problemas a agregar, $P_{total}$, se calcula como la suma de los problemas adicionales necesarios para cada dificultad:
$$ P_{total} = \sum_{d \in \mathcal{D}} \max(0, M - count(d, S)) $$
Este enfoque matemático valida la lógica de iterar sobre cada tipo de dificultad y sumar los problemas faltantes.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n` (longitud del banco) y `m` (rondas requeridas).
    b.  Leer la cadena `s` (el banco de problemas).
    c.  Inicializar una variable `problemasAgregar = 0`.
    d.  Definir una lista o cadena con las 7 dificultades: `dificultades = "ABCDEFG"`.
    e.  Para cada `letra` en `dificultades`:
        i.  Contar cuántas veces aparece `letra` en la cadena `s`. Almacenar este conteo en `problemasDificultadActual`.
        ii. Si `problemasDificultadActual < m`:
            1.  Sumar `(m - problemasDificultadActual)` a `problemasAgregar`.
    f.  Imprimir `problemasAgregar`.

## Notas Adicionales
*   El problema solo considera las dificultades 'A' a 'G'. Cualquier otro carácter en la cadena de entrada `s` (aunque el problema garantiza que solo serán de 'A' a 'G') sería irrelevante para el cálculo.
*   La implementación en C++ utiliza `std::count` y la de Python utiliza el método `count()` de las cadenas, ambos eficientes para esta tarea.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | Se itera 7 veces sobre la cadena de longitud N. (7 * O(N)) = O(N). |
| Espacial | O(N)                   | Para almacenar la cadena de entrada `s`. O(1) si no se cuenta la entrada. |