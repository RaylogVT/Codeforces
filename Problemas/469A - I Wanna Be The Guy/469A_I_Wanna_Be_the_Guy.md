https://codeforces.com/problemset/problem/469/A

# 469A - I Wanna Be The Guy

## Resumen del problema
X y Y quieren pasarse el juego 'I Wanna Be The Guy'. X puede pasarse unos niveles, mientras que Y puede pasarse otros. Trabajando juntos, ¿podrían pasarse el juego?

## Input
La 1° línea contiene un número entero N (1 <= N <= 100) -- El número de niveles del juego \
La 2° línea contiene un número entero P (0 <= P <= N), seguido de P números enteros distintos (1 <= P1, P2, ..., Pn <= N) -- El número de niveles que X puede pasarse, seguido de los índices de los niveles que X puede pasarse \
La 3° línea contiene un número entero Q (0 <= Q <= N), seguido de Q números enteros distintos (1 <= Q1, Q2, ..., Qn <= N) -- El número de niveles que Y puede pasarse, seguido de los índices de los niveles que y puede pasarse \

## Output
Imprime 'I become the guy.' si X y Y pueden pasarse todos los niveles del juego. \
Imprime 'Oh, my keyboard!' si X y Y no pueden pasarse todos los niveles del juego.

## Ejemplos
| Input | Razonamiento  | Output    |
| ----- | :------------ | --------- |
| 4 <br> 3 1 2 3 <br> 2 2 4 | 1 2 3 4 <br> X X X - <br> - Y - Y <br> X X X Y <br> Pueden pasarse todos los niveles | **I become the guy.** |
| 4 <br> 3 1 2 3 <br> 2 2 3 | 1 2 3 4 <br> X X X - <br> - Y Y - <br> X Y Y - <br> No pueden pasarse el Nivel 4 | **Oh, my keyboard!** |

## Forma de resolverlo
### a) Iteración por fuerza bruta
Podemos resolver el problema **iterando sobre cada nivel del juego**. Si X o Y pueden pasarse el nivel actual, entonces pueden avanzar al siguiente. Si logran pasarse el último nivel, entonces pueden pasarse el juego. Por otro lado, si X o Y no pueden pasarse algún nivel, entonces no pueden terminar el juego.

### b) Set de niveles
Podemos insertar los niveles que X y Y pueden pasarse en un **set()**. Dado que la estructura de datos **set()** guarda valores únicos, si X y Y pueden pasarse un mismo nivel, entonces sólo se registrará una vez. Si el tamaño del set es igual al número de niveles, entonces X y Y pueden pasarse el juego. Por otro lado, si el tamaño del set es distinto al número de niveles, entonces hay algun nivel que X y Y no pueden pasarse, y por ende no pueden terminar el juego.

## Algoritmo
### a) Iteración por fuerza bruta
1) Empieza por el Nivel 1
2) Checa si X y Y no pueden pasarse el nivel actual \
a) Si no pueden, entonces imprime 'Oh, my keyboard!' (Aquí termina el proceso) \
b) Si pueden, entonces pasa al siguiente nivel \
3) Repite el Paso 2 hasta llegar al último nivel
4) Si X y Y pasaron todos los niveles, entonces imprime 'I become the guy.'

### b) Set de niveles
1) Inserta los niveles de X y Y en un set
2) Revisa el tamaño del set \
a) Si el tamaño del set es igual al número de niveles, entonces X y Y pueden pasarse todos los niveles, imprime 'I become the guy.' \
b) Si el tamaño del set es distinto al número de niveles, entonces X y Y no pueden pasarse todos los niveles, imprime 'Oh, my keyboard!'
