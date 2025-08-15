https://codeforces.com/problemset/problem/2065/A

# 2065A - Skibidus and Amongus

## Resumen del problema
Skibidus aterriza en un planeta foráneo, donde la tribu Amog habla el lenguaje Amog'u, el cual tiene dos tipos de sustantivos: \
Dada la raíz del sustantivo S, los dos tipos se escriben como: \
a) Singular = S + "us" \
b) Plural = S + "i"

Dada un sustantivo en Amog'u en su forma singular, conviértela a su contraparte plural.

## Input
La 1° línea contiene un número entero `N` (`1 <= N <= 100`) -- El número de casos de prueba \
La única línea por cada caso de prueba contiene un string `W` de hasta 10 letras -- El sustantivo en Amog'u en singular

## Output
Por cada caso de prueba, imprime un string -- El sustantivo en Amog'u convertido de singular a plural

## Ejemplos
| Input     | Razonamiento                | Output      |
| :----     | :-------------------        | ---------   |
| 5         |                             |             |
| sus       | sus - us + i = si           | **si**      |
| fungus    | fungus - us + i = fungi     | **fungi**   |
| amogus    | amogus - us + i = amogi     | **amogi**   |
| cactus    | cactus - us + i = cacti     | **cacti**   |
| chungus   | chungus - us + i = chungi   | **chungi**  |

## Forma de resolverlo
La forma más sencilla de resolver este problema es simplemente removiendo el sufijo singular **"us"** del sustantivo y añadirle el sufijo plural **"i"**.

Para eliminar el sufijo **"us"**, podemos usar índices para iterar sobre el string e **ignorar las últimas dos letras**. \
De ahí solamente tenemos que concatenar el sufijo **"i"** con una operación de suma **(+)**.

## Algoritmo
1) Remueve el sufijo singular "us" del sustantivo
2) Agrega el sufijo plural "i" al sustantivo