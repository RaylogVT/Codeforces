https://codeforces.com/problemset/problem/472/A

# 472A - Design Tutorial: Learn from Math

## Resumen del problema
Dado un número N >= 12, busca 2 números compuestos (X,Y) tal que X + Y = N 

## Input
Una sola línea con un número entero N (12 <= N <= 1000000) -- El número a descomponer

## Output
Imprime 2 números enteros compuestos X y Y (1 < X, Y < N) tal que X + Y = N

## Ejemplos
| Input    | Razonamiento  | Output    |
| -------- | :------------ | --------- |
| 12       | 12 = 8 + 4    | 8 4       |
| 15       | 15 = 9 + 6    | 9 6       |
| 18       | 18 = 8 + 10   | 8 10      |
| 21       | 21 = 6 + 15   | 6 15      |

## Forma de resolverlo
Para resolver este problema, podríamos iterar sobre las **combinaciones de X y Y** que dan N hasta encontrar un **par que sea compuesto**. Sin embargo, podemos usar unas propiedades matemáticas para simplificar el problema.

Primero, veamos la paridad de una suma:

| Propiedad                 | Ejemplo      |
| ------------------------- | :----------- |
| Par + Par = Par           | 8 + 4 = 12   | 
| Par + Impar = Impar       | 8 + 5 = 13   |
| Impar + Par = Impar       | 9 + 4 = 13   | 
| Impar + Impar = Par       | 9 + 5 = 14   | 

Después, consideremos lo siguiente: ¿Qué conjunto de números está garantizado que son compuestos? Respuesta: **Los números pares**
1) Todo número par **mayor o igual a 4** es compuesto porque es **múltiplo de 2**
2) **Todos los números primos son impares**, así que es más difícil si un número impar es primo o compuesto hasta que le hagas una prueba de primalidad. 

Del análisis anterior, podemos concluir que al menos **X o Y tiene que ser un número par**.

Ahora podemos empezar a pensar en qué valores asignarle a cada variable. **Suponiendo que Y es el número par, ¿qué valor le asignamos a X?**

Ahora veamos la paridad de una resta:

| Propiedad                 | Ejemplo      |
| ------------------------- | :----------- |
| Par - Par = Par           | 12 - 4 = 8   | 
| Impar - Par = Impar       | 13 - 4 = 9   |

Viendo la paridad de la resta, podemos hacer que X tenga un valor con base en si **N es par o impar**. Como **N >= 12 y Y >= 4 y par**, entonces el valor **compuesto más pequeño** que puede tener X es **8 o 9**, y por ende, **Y = (N - 8) o (N - 9)**.

| N par                                   | N impar                                  |
| --------------------------------------- | :--------------------------------------- |
| x + y = n <br> 8 + y = n <br> y = n - 8 | x + y = n <br> 9 + y = n <br> y = n - 9  |

Analicemos si (8, N - 8) y (9, N - 9) son buenos valores de X y Y para satisfacer el requisito de números compuestos.

| Propiedad de suma         | x + y = n     | Propiedad de resta  | y = n - x   |
| ------------------------- | :------------ | :------------------ | :---------- |
| Par + Par = Par           | 8 + (n-8) = n | Par + Par = Par     | y = n - 8   | 
| Impar + Par = Impar       | 9 + (n-9) = n | Impar + Par = Impar | y = n - 9   |

12 = 8 + 4 \
13 = 9 + 4 \
14 = 8 + 6 \
15 = 9 + 6 \
16 = 8 + 8 \
17 = 9 + 8 

Como podemos ver, el hecho de que **N >= 12** y **X = 8 o 9** en función de si **N es par o impar** garantiza que **Y >= 4 y par**. Por lo tanto, para resolver el problema, simplemente tenemos que checar la **paridad de N** para saber si **(X,Y) = (8, N - 8) o (9, N - 9)**.

## Algoritmo
1) Detecta la paridad de N \
a) Si N es par, entonces imprime X = 8 y Y = N - 8 \
b) Si N es impar, entonces imprime X = 9 y Y = N - 9
