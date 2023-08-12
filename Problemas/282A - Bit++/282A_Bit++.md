https://codeforces.com/problemset/problem/282/A

# 282A - Bit++

## Resumen del problema
El lenguaje Bit++ consta de una variable (X) y dos operaciones (++, --), donde ++ suma 1 y -- resta 1 a X. \
Un statement en Bit++ es un string que consta de una X y alguna de las dos operaciones, independientemente del orden (Ej. X++, ++X). \
Un programa en Bit++ es una serie de statements en las que se ejecuta la operación identificada sobre X. \
Dado un programa y siendo X = 0, ejecuta los statements y obtén el valor final de X.

## Input
La primera línea tiene un número N (1 <= N <= 150), el número de statements del programa \
Las siguientes N líneas son los statements del programa, los cuales contienen la variable X y alguna de las dos operaciones (++ o --)

## Output
Imprime el valor final de X

## Ejemplos
3   \
X++ \
++X \
--X 

| Statement | Resultado |
| :--- | :------------- |
| X++ | X = 0 + 1 = 1 |
| ++X | X = 1 + 1 = 2 |
| --X | X = 2 - 1 = 1 |

Resultado = **1**

## Forma de resolverlo
### a) Secuencial 
Lees cada statement y vas sumando y restando conforme vas detectando ++ o --

3   \
X++ \
++X \
--X 

| Statement | Resultado |
| :--- | :------------- |
| X++ | X = 0 + 1 = 1 |
| ++X | X = 1 + 1 = 2 |
| --X | X = 2 - 1 = 1 |
|     | **X = 1**     |

Existen dos maneras de leer los statements: 

**a) Lectura completa** \
Si tu lenguaje maneja strings fácilmente (Ej. Python), puedes separar el ++ o -- de la X para la detección. 

**b) Lectura intuitiva** \
Como podemos ver, todos los statements constan de 3 caracteres, y curiosamente la X siempre tiene que estar al **inicio** o al **final** del mismo. \
Un statement como **+X+** o **-X-** no son válidos porque el lenguaje Bit++ exige que la operación sea ++ o --. \
Viendo todas las combinaciones de strings restantes posibles, los statements pueden ser X++, ++X, X--, --X. \
Si los analizamos, vemos que **el caracter de en medio siempre es + o -, por lo que bastaría con hacer esta detección para saber si el statement suma o resta a X**. De esta manera evitamos leer el string completo para buscar la operación completa.

### b) Integradora
Cuenta cuántos statements tienen ++ y -- y resta el conteo de los dos

3   \
X++ \
++X \
--X 

Número de statements (++) = 2 \
Número de statements (--) = 1 \
2 - 1 = 1 \
**X = 1**           
