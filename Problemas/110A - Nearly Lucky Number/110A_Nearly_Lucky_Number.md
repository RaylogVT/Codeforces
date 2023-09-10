https://codeforces.com/problemset/problem/110/A

# 110A - Nearly Lucky Number

## Resumen del problema
Un número de la suerte es aquél que tiene solo 4s y 7s (Ej. 4, 7, 47, 774, etc...) \
Un número casi-de-la-suerte es aquél que tiene un número de dígitos igual a un número casi-de-la-suerte. \
Determina si un número es un número casi-de-la-suerte.

## Input
Una línea con un número entero N (1 <= N <= 10^18) - El número a evaluar

## Output
Imprime 'YES' si el número es casi-de-la-suerte, de lo contrario, imprime 'NO'

## Ejemplos
| Input | Razonamiento                          | Output    |
| :---- | :------------------                   | --------- |
| 4047 | 3 números de la suerte (**4**0**47**)  | **NO**    |
| 7447 | 4 números de la suerte (**7447**)      | **YES**   |
| 1000 | 0 números de la suerte (1000)          | **NO**    |

## Forma de resolverlo
Para este problema, lo fácil es contar cuántos dígitos son 4 o 7. \
Sin embargo, **¿cómo sabemos si dicha cantidad de dígitos es un número de la suerte?** \
Pensemos lo siguiente: ¿Cuántos dígitos tiene el número más grande posible como nuestro input? \
10^18 tiene **19 dígitos** (Un 1, 18 0s). Entre el 0-19, los únicos números de la suerte que hay son el **4 y 7**. \
Entonces, si nuestro número tiene 4 o 7 dígitos de la suerte, entonces es un número casi-de-la-suerte.

Sabiendo esto, **¿cómo extraemos los dígitos del número?**
### a) String (Python)
En lenguajes con **conversiones de tipos de datos** como **Python**, podemos convertir nuestro **número entero a string**, y así revisar cada dígito de **izquierda a derecha** mediante un ciclo para saber si es un 4 o 7.

### b) Matemático (C++)
Una manera tradicional de extraer dígitos de un número es de la siguiente manera:
1) Realiza **Número % 10** para extraer el último dígito
2) Divide el **Número / 10** para eliminar el último dígito
3) **Repite los pasos 1 y 2** hasta quedarte sin dígitos (i.e. Número / 10 = 0)

Veámoslo con un ejemplo:
| Módulo | Dígito          | División           |
| :----  | :-------------- | ---------          |
| 52147  | 52147 % 10 = 7  | 52147 / 10 = 5214  |
| 5214   | 5214 % 10 = 4   | 5214 / 10 = 521    |
| 521    | 521 % 10 = 1    | 521 / 10 = 52      |
| 52     | 52 % 10 = 2     | 52 / 10 = 5        |
| 5      | 5 % 10 = 5      | 5 / 10 = 0         |

Como vemos en la tabla, realizando módulo 10 y diviendo entre 10, podemos sacar los dígitos de un número de **derecha a izquierda** y revisar si este es un 4 o 7.

## Algoritmo
1) Extrae cada dígito del número
2) Revisa si el dígito es igual a 4 o 7 \
Si lo es, suma 1 a un contador de dígitos de la suerte
3) Revisa si el contador de dígitos de la suerte es un número de la suerte \
Si lo es, entonces imprime 'YES', de lo contario, imprime 'NO'
