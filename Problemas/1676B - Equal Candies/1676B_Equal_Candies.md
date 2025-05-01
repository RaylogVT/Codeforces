# 1676B - Equal Candies

**Enlace:** https://codeforces.com/problemset/problem/1676/B

## Resumen del problema
Tienes `n` cajas de dulces, donde la $i$-ésima caja contiene $a_i$ dulces. Puedes comer cualquier cantidad de dulces de cualquier caja (pero no puedes añadir dulces). Tu objetivo es hacer que el número de dulces en todas las cajas sea igual, minimizando la cantidad total de dulces que comes.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   La primera línea de cada caso de prueba contiene un solo entero `n` ($1 \le n \le 50$), el número de cajas.
-   La segunda línea de cada caso de prueba contiene `n` enteros $a_1, a_2, \dots, a_n$ ($1 \le a_i \le 1000$), donde $a_i$ es el número de dulces en la $i$-ésima caja.

## Output
Para cada caso de prueba, imprime un solo entero: la cantidad mínima total de dulces que debes comer para que todas las cajas tengan el mismo número de dulces.

## Restricciones

| Variable     | Rango      | Notas                                     |
| :----------- | :--------- | :---------------------------------------- |
| t (casos)    | [1, 1000]  |                                           |
| n (cajas)    | [1, 50]    |                                           |
| a_i (dulces) | [1, 1000]  | Número de dulces inicial en la caja $i$   |

## Ejemplos

| Input (n, dulces) | n | Dulces ($a_i$) | Mínimo ($\min(A)$) | Dulces a comer por caja ($a_i - \min(A)$) | Total dulces a comer | Output |
| :---------------- | :-: | :------------- | :----------------: | :-------------------------------------- | :-------------------: | :----- |
| (3, [5, 2, 8])    | 3 | 5, 2, 8        | 2                  | (5-2), (2-2), (8-2) = 3, 0, 6           | 3 + 0 + 6 = 9         | `9`    |
| (4, [1, 1, 1, 1]) | 4 | 1, 1, 1, 1     | 1                  | (1-1), (1-1), (1-1), (1-1) = 0, 0, 0, 0 | 0 + 0 + 0 + 0 = 0     | `0`    |
| (2, [10, 100])    | 2 | 10, 100        | 10                 | (10-10), (100-10) = 0, 90               | 0 + 90 = 90           | `90`   |

## Forma de resolverlo

### Enfoque Algorítmico (Encontrar Mínimo y Sumar Diferencias)
Para minimizar la cantidad total de dulces a comer, debemos asegurarnos de que el número final de dulces en cada caja sea el máximo posible, pero igual para todas. Como solo podemos comer dulces (reducir la cantidad), el número final de dulces en cualquier caja no puede exceder la cantidad mínima inicial encontrada en *cualquier* caja. Si intentáramos dejar más dulces que el mínimo inicial, necesitaríamos añadir dulces a la(s) caja(s) que tenían el mínimo, lo cual no está permitido. Por lo tanto, el número objetivo de dulces para todas las cajas debe ser igual al número mínimo de dulces presente inicialmente en cualquiera de las cajas.

1.  **Encontrar el Mínimo:** Recorre todas las cajas y encuentra la cantidad mínima de dulces, $\min(A)$.
2.  **Calcular la Diferencia Total:** Para cada caja $i$, la cantidad de dulces a comer es la diferencia entre su cantidad inicial $a_i$ y el mínimo $\min(A)$. Calcula la suma de estas diferencias $(a_i - \min(A))$ para todas las cajas. Esta suma total es la respuesta.

## Análisis Matemático: Minimización mediante Maximización del Estado Final

**1. Objetivo:** Queremos minimizar la cantidad total de dulces que comemos para que al final todas las $n$ cajas tengan el mismo número de dulces.

**2. Variable Clave:** Sea $k$ el número final de dulces que habrá en *cada* caja. Nuestro objetivo es elegir $k$ de manera que el total de dulces comidos sea mínimo.

**3. Restricción Fundamental:** La única operación permitida es comer dulces. No podemos añadir dulces. Esto significa que el número final de dulces $k$ en cualquier caja $i$ no puede ser mayor que su número inicial $a_i$. Formalmente, para cada $i$ (desde 1 hasta $n$), debe cumplirse:
$$ k \le a_i $$
Como esto debe ser cierto para *todas* las cajas, $k$ debe ser menor o igual que la cantidad mínima de dulces encontrada en cualquier caja al inicio. Sea $A = \{a_1, a_2, \dots, a_n\}$ el conjunto de cantidades iniciales. Entonces:
$$ k \le \min(A) = \min(a_1, a_2, \dots, a_n) $$

**4. Cantidad Total Comida:** La cantidad total de dulces comidos es la diferencia entre la suma total inicial y la suma total final.
*   Suma inicial: $\sum_{i=1}^n a_i$
*   Suma final: Como hay $n$ cajas y cada una tendrá $k$ dulces, la suma final es $n \cdot k$.
La cantidad total comida es:
$$ \text{Total comido}(k) = \left( \sum_{i=1}^n a_i \right) - (n \cdot k) $$

**5. Minimización:** Queremos minimizar $\text{Total comido}(k)$. Observa la fórmula: $\sum_{i=1}^n a_i$ es una constante (la suma inicial total). El término $n \cdot k$ se resta. Para hacer que $\text{Total comido}(k)$ sea lo más pequeño posible, necesitamos que el término que restamos, $n \cdot k$, sea lo más *grande* posible.

**6. Maximizar k:** Como $n$ es positivo, maximizar $n \cdot k$ es lo mismo que maximizar $k$. ¿Cuál es el valor más grande que $k$ puede tomar? Según nuestra restricción fundamental (paso 3), el valor más grande posible para $k$ es $\min(A)$.

**7. Conclusión:** Para minimizar los dulces comidos, debemos elegir el mayor valor posible para $k$, que es $k = \min(A)$. Esto significa que debemos reducir los dulces en cada caja hasta que todas tengan $\min(A)$ dulces.

**8. Cálculo Final:** La cantidad de dulces a comer de la caja $i$ es $a_i - k = a_i - \min(A)$. La cantidad total mínima de dulces a comer es la suma de estas cantidades para todas las cajas:
$$ \text{Total comido}_{\min} = \sum_{i=1}^n (a_i - \min(A)) $$
Esto confirma que el algoritmo propuesto (encontrar el mínimo y sumar las diferencias) es correcto.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer `n`.
    b.  Leer la lista de `n` enteros $a = [a_1, a_2, \dots, a_n]$.
    c.  Encontrar el valor mínimo en la lista $a$. Llamémoslo `min_dulces`.
    d.  Inicializar `total_dulces_comer = 0`.
    e.  Iterar sobre cada elemento `dulces_actuales` en la lista $a$:
        i.  Calcular la diferencia: `diferencia = dulces_actuales - min_dulces`.
        ii. Sumar esta diferencia al total: `total_dulces_comer = total_dulces_comer + diferencia`.
    f.  Imprimir `total_dulces_comer`.

## Notas Adicionales
*   **Eficiencia:** El algoritmo requiere encontrar el mínimo (O(N)) y luego iterar para sumar las diferencias (O(N)). La complejidad temporal total es O(N) por caso de prueba.
*   **Espacio:** Se requiere espacio para almacenar la lista de dulces, que es O(N). (Se puede optimizar a O(1) de espacio si se procesa la entrada sin almacenar todo el arreglo, calculando el mínimo y la suma en una o dos pasadas).

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                                            |
| :------- | :--------------------- | :----------------------------------------------- |
| Temporal | O(N)                   | Encontrar el mínimo y sumar diferencias.         |
| Espacial | O(N)                   | Para almacenar el número de dulces en las cajas (puede optimizarse a O(1)). |