https://codeforces.com/problemset/problem/282/A

# 282A - Bit++

## Resumen del problema
El lenguaje Bit++ consta de una variable (X) y dos operaciones (++, --), donde ++ suma 1 y -- resta 1 a X. \
Un statement en Bit++ es un string que consta de una X y alguna de las dos operaciones, independientemente del orden (Ej. X++, ++X). \
Un programa en Bit++ es una serie de statements en las que se ejecuta la operación identificada sobre X. \
Dado un programa y siendo X = 0, ejecuta los statements y obtén el valor final de X.

## Input
La 1° línea tiene un número N (1 <= N <= 150) -- El número de statements del programa \
Las siguientes N líneas tienen un string S -- Los statements del programa, los cuales contienen la variable X y alguna de las dos operaciones (++ o --)

## Output
Imprime un número entero -- El valor final de X

## Ejemplos
| Input   | Razonamiento                                   | Output |
| :----   | :--------------------------------------------  | -----  |
| 3 <br> X++ <br> ++X <br> --X | <br> X = 0 + 1 = 1 <br> X = 1 + 1 = 2 <br> X = 2 - 1 = 1 | **1** |

## Forma de resolverlo
### a) Secuencial 
Lees cada statement y vas sumando y restando conforme vas detectando ++ o --

| Statement   | Razonamiento                               | 
| :----   | :--------------------------------------------  | 
| X++ <br> ++X <br> --X | X = 0 + 1 = 1 <br> X = 1 + 1 = 2 <br> X = 2 - 1 = 1 <br> **x = 1** |

Existen dos maneras de leer los statements: 

**a) Lectura completa** \
Si tu lenguaje maneja strings fácilmente (Ej. Python), puedes separar el ++ o -- de la X para la detección. 

**b) Lectura intuitiva** \
Como podemos ver, todos los statements constan de 3 caracteres, y la X siempre está al **inicio** o al **final** de estos. \
Un statement como **+X+** o **-X-** no son válidos porque el lenguaje Bit++ exige que la operación sea ++ o --. \
Viendo todas las combinaciones de strings restantes posibles, los statements pueden ser X++, ++X, X--, --X. \
Si los analizamos, vemos que **el caracter de en medio siempre es + o -, por lo que bastaría con hacer esta detección para saber si el statement suma o resta a X**. De esta manera evitamos leer el string completo para buscar la operación completa.

### b) Integradora
Cuenta cuántos statements tienen ++ y -- y resta el conteo de los dos

| Statement   | Cálculos                               | 
| :----   | :--------------------------------------------  | 
| 3 <br> X++ <br> ++X <br> --X | Número de statements (++) = 2 <br> Número de statements (--) = 1 <br> 2 - 1 = 1 <br> **X = 1** |  

## Algoritmo
### a) Secuencial 
1) Itera sobre los statements
2) Detecta los signos del statement \
a) Si el statement tiene '++', entonces suma +1 a X \
b) Si el statement tiene '--', entonces resta -1 a X 
3) Devuelve el valor de X

### b) Integradora
1) Genera un contador de Sumas y Restas
2) Itera sobre los statements
3) Detecta los signos del statement \
a) Si el statement tiene '++', entonces suma +1 al contador de Sumas \
b) Si el statement tiene '--', entonces suma +1 al contador de Restas 
4) Calcula (Sumas - Restas)


