https://codeforces.com/problemset/problem/1560/A

# 1560A - Dislike of Threes

## Resumen del problema
Determina el k-ésimo número que no es múltiplo de 3 ni termina con el dígito 3

## Input
La 1° línea contiene un número entero T (1 <= T <= 100) -- El número de casos de prueba a realizar
Las siguientes N líneas contienen un número entero K (1 <= K <= 1000) -- El índice del k-ésimo elemento a buscar 

## Output
Por cada caso de prueba, imprime un número entero -- El k-ésimo número que no es múltiplo de 3 ni termina en 3

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 4 <br> 2 <br> 3 <br> 5 <br> 7 | <br> **1 2** <br> **1 2** 3 **4** <br> **1 2** 3 **4 5** 6 **7** <br> **1 2** 3 **4 5** 6 **7 8** 9 **10** | <br> **2** <br> **4** <br> **7** <br> **10** |

## Forma de resolverlo
Para resolver este problema, podemos iterar sobre los números partiendo desde el 0 e ir detectando si es múltiplo de 3 o termina en 3. ¿Cómo sabemos si hemos llegado al k-ésimo número? Podemos generar un **contador** que lleve el registro de cuántos números hemos encontrado que cumplen nuestras condiciones, y una vez que este llegue al valor esperado, entonces simplemente extraemos el **número en el que nos quedamos de iterar**. Esto se puede realizar con un ciclo **while()** que nos permita iterar de manera infinita hasta alcanzar el valor esperado.

Para saber si un número es múltiplo de otro, simplemente utilizamos la operación módulo (%) y revisar si el número % 3 es igual a 0 (puesto que lo haría divisible). Para saber si un número termina en 3, igualmente podemos usar módulos y revisar si el número % 10 es igual a 3 (puesto que los módulos 10 son perfectos para extraer dígitos de un número).

## Algoritmo
1) Inicia el contador de números en 0
2) Inicia un ciclo que detecte si el índice del k-ésimo número es mayor a 0
3) Suma +1 al contador de números
4) Detecta si el número actual no es múltiplo de 3 y no termina en 3 \
a) Si lo es, entonces resta -1 al índice del k-ésimo número
5) Devuelve el contador cuando el índice del k-ésimo número sea igual a 0