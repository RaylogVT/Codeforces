https://codeforces.com/problemset/problem/2014/A

# 2014A - Robin Helps

## Resumen del problema
El problema simula una versión simplificada de las acciones de Robin Hood. Para un conjunto dado de personas, cada una con una cierta cantidad de oro, y un valor `threshold`, Robin Hood realiza una serie de operaciones. Itera a través de las personas. Para cada persona, si su cantidad de oro es igual o excede el `threshold`, Robin toma todo su oro. Posteriormente, si la persona actual (o cualquier persona encontrada más adelante en la iteración) tiene exactamente 0 oro, y Robin tiene oro acumulado, le da 1 unidad de oro a esa persona. El objetivo es determinar el número total de personas que recibieron 1 unidad de oro de Robin.

## Input
-   La primera línea contiene un solo entero `t`, el número de casos de prueba.
-   Para cada caso de prueba:
    -   La primera línea contiene dos enteros `personas` y `threshold`, que representan el número de personas y el oro mínimo que debe tener una persona para que Robin Hood se lo robe, respectivamente.
    -   La segunda línea contiene `personas` enteros, `oroPersonas`, que indican la cantidad de oro que tiene cada persona.

## Output
Para cada caso de prueba, imprime un solo entero: la cantidad de personas que recibieron oro de Robin Hood.

## Forma de resolverlo
El problema se resuelve mediante una simulación directa de las acciones de Robin Hood en una única pasada por la lista de personas.

1.  **Inicialización:** Se utilizan dos variables para mantener el estado: `robin` para almacenar el oro total que Robin ha acumulado (inicialmente 0), y `personasDonadas` para contar cuántas personas han recibido oro de Robin (inicialmente 0).

2.  **Iteración y Simulación:** Se recorre cada persona en el orden en que se presentan sus cantidades de oro. Para cada persona, se realizan las siguientes verificaciones y acciones:
    *   **Fase de Recolección:** Si la cantidad de oro de la persona actual (`oroPersonas[indice_persona]`) es igual o mayor que el `threshold`, Robin Hood toma todo su oro. Esta cantidad se añade al total de `robin`.
    *   **Fase de Distribución:** Si la cantidad de oro de la persona actual es exactamente 0 (`oroPersonas[indice_persona] == 0`), y Robin tiene oro disponible (`robin > 0`), entonces Robin le da 1 unidad de oro a esa persona. Esto implica que el oro de `robin` se decrementa en 1, y el contador `personasDonadas` se incrementa en 1.

3.  **Resultado Final:** Una vez que se han procesado todas las personas en la lista, el valor final de `personasDonadas` se imprime como el resultado para el caso de prueba actual.

Este enfoque de una sola pasada es crucial, ya que el oro robado de una persona puede ser utilizado inmediatamente para ayudar a personas posteriores en la misma iteración.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `personas` (número de personas) y `threshold` (oro mínimo para robar).
    b.  Leer las `personas` cantidades de oro y almacenarlas en un arreglo/lista `oroPersonas`.
    c.  Inicializar `robin = 0` (oro acumulado por Robin) y `personasDonadas = 0` (contador de personas ayudadas).
    d.  Iterar desde `indice_persona = 0` hasta `personas - 1`:
        i.  Si `oroPersonas[indice_persona] >= threshold`:
            -   `robin += oroPersonas[indice_persona]`
        ii. Si `oroPersonas[indice_persona] == 0` y `robin > 0`:
            -   `robin -= 1`
            -   `personasDonadas += 1`
    e.  Imprimir `personasDonadas`.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(N)                   | Se realiza una única iteración lineal sobre la lista de `N` personas. |
| Espacial | O(N)                   | Se utiliza un arreglo/lista para almacenar las `N` cantidades de oro de las personas. |