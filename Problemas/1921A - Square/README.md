https://codeforces.com/problemset/problem/1921/A

# 1921A - Square

## Resumen del problema
Se te dan las coordenadas de las cuatro esquinas de un cuadrado. Tu tarea es calcular y devolver el área de este cuadrado.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba, se proporcionan cuatro líneas. Cada una de estas líneas contiene dos enteros `x` e `y` ($-1000 \le x, y \le 1000$), representando las coordenadas de una esquina del cuadrado.

## Output
Para cada caso de prueba, imprime un solo entero: el área del cuadrado.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| x, y (coord.)| [-1000, 1000]| Coordenadas de las esquinas.       |
| Cuadrado     |            | Se garantiza que los puntos forman un cuadrado. |

## Ejemplos

| Input (4 puntos) | Puntos de Ejemplo | Lado | Área |
| :--------------- | :---------------- | :--- | :--- |
| (0,0), (0,1), (1,0), (1,1) | (0,0), (0,1) | 1    | `1`  |
| (1,1), (1,3), (3,1), (3,3) | (1,1), (1,3) | 2    | `4`  |
| (-2,-2), (-2,0), (0,-2), (0,0) | (-2,-2), (-2,0) | 2    | `4`  |

## Forma de resolverlo

### Enfoque Geométrico (Cálculo de la Longitud del Lado)
Dado que se nos proporcionan las cuatro esquinas de un cuadrado y se garantiza que forman un cuadrado, podemos encontrar la longitud de uno de sus lados y luego calcular el área elevando esa longitud al cuadrado.

Un cuadrado tiene lados paralelos a los ejes X e Y (o rotados, pero en este problema las coordenadas sugieren alineación con los ejes, o al menos que las diferencias en X y Y entre puntos adyacentes son las mismas). Si tomamos dos puntos adyacentes de un cuadrado, compartirán una coordenada (X o Y). Por ejemplo, si tenemos los puntos $(x_1, y_1)$ y $(x_2, y_2)$:
-   Si $x_1 = x_2$, entonces los puntos están en una línea vertical, y la longitud del lado es $|y_1 - y_2|$.
-   Si $y_1 = y_2$, entonces los puntos están en una línea horizontal, y la longitud del lado es $|x_1 - x_2|$.

El código proporcionado toma las coordenadas de las primeras dos esquinas leídas y aplica esta lógica. Si las coordenadas X de las dos primeras esquinas son iguales, calcula la diferencia absoluta de sus coordenadas Y. Si sus coordenadas Y son iguales, calcula la diferencia absoluta de sus coordenadas X. Si ninguna de estas condiciones se cumple (lo que implicaría que las dos primeras esquinas son diagonales entre sí), el código aún calcula `abs(esquina1y - esquina2y)`. En un cuadrado, si dos puntos son diagonales (por ejemplo, $(x_1, y_1)$ y $(x_2, y_2)$), entonces la longitud del lado es igual a $|x_1 - x_2|$ y también igual a $|y_1 - y_2|$. Por lo tanto, tomar `abs(esquina1y - esquina2y)` en este caso también dará la longitud correcta del lado.

Una vez que se obtiene la longitud del lado, el área del cuadrado se calcula como `longitud * longitud`.

## Análisis Matemático
Sea $L$ la longitud del lado del cuadrado. El área $A$ de un cuadrado se calcula como $A = L^2$.
Para encontrar la longitud del lado $L$, podemos tomar dos puntos cualesquiera que formen un lado del cuadrado. Por ejemplo, si tenemos dos puntos $(x_a, y_a)$ y $(x_b, y_b)$ que son esquinas adyacentes:
-   Si $x_a = x_b$ (lado vertical), entonces $L = |y_a - y_b|$.
-   Si $y_a = y_b$ (lado horizontal), entonces $L = |x_a - x_b|$.

El código implementa esta lógica tomando las dos primeras esquinas de entrada. Si los puntos de entrada son $(x_1, y_1), (x_2, y_2), (x_3, y_3), (x_4, y_4)$, y el código considera $(x_1, y_1)$ y $(x_2, y_2)$:
-   Si $x_1 = x_2$, entonces $L = |y_1 - y_2|$.
-   Si $y_1 = y_2$, entonces $L = |x_1 - x_2|$.
-   Si $x_1 \ne x_2$ y $y_1 \ne y_2$ (lo que significa que $(x_1, y_1)$ y $(x_2, y_2)$ son esquinas diagonales), entonces, por las propiedades de un cuadrado alineado con los ejes, la diferencia absoluta en X es igual a la diferencia absoluta en Y, y ambas son iguales a la longitud del lado. Es decir, $|x_1 - x_2| = |y_1 - y_2| = L$. El código elige calcular $L = |y_1 - y_2|$ en este caso, lo cual es válido.

En resumen, el algoritmo encuentra una de las diferencias absolutas entre coordenadas que representan la longitud del lado y luego la eleva al cuadrado.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer las coordenadas $(x_1, y_1), (x_2, y_2), (x_3, y_3), (x_4, y_4)$ de las cuatro esquinas.
    b.  Determinar la longitud del lado `L` del cuadrado. Una forma sencilla es:
        i.  Si `x1 == x2`, entonces `L = abs(y1 - y2)`.
        ii. Si `y1 == y2`, entonces `L = abs(x1 - x2)`.
        iii. En cualquier otro caso (lo que implica que los puntos son diagonales), `L = abs(y1 - y2)` (o `abs(x1 - x2)`, ya que serán iguales para un cuadrado).
    c.  Calcular el área como `Area = L * L`.
    d.  Imprimir `Area`.

## Notas Adicionales
*   La garantía de que los puntos forman un cuadrado simplifica el problema, ya que no es necesario validar la forma.
*   Las coordenadas pueden ser negativas, por lo que el uso de `abs()` (valor absoluto) es crucial para obtener distancias positivas.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Operaciones constantes: lectura de 8 enteros, unas pocas comparaciones, una resta, una potencia. |
| Espacial | O(1)                   | Espacio constante para almacenar las coordenadas y variables auxiliares. |