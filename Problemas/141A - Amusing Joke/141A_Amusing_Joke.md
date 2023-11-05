https://codeforces.com/problemset/problem/141/A

# 141A - Amusing Joke

## Resumen del problema
En vísperas de Navidad, cortaste cartones con letras para formar dos letreros, cada uno con el nombre del host e invitado. Al día siguiente, alguien tomó todas las letras, las revolvió y las dejó en una pila frente a tu casa. Con las letras encontradas, ¿puedes recrear los dos letreros del host e invitado de tal manera que no sobren ni falten letras?

## Input
La 1° línea contiene un string de longitud N (1 <= N <= 100) - Las letras del letrero del host \
La 2° línea contiene un string de longitud N (1 <= N <= 100) - Las letras del letrero del invitado \
La 3° línea contiene un string de longitud N (1 <= N <= 100) - La pila de letras encontradas al día siguiente

## Output
Imprime YES si se pueden reconstruir los letreros con la pila encontrada. De lo contrario, imprime NO

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| SANTACLAUS <br> DEDMOROZ <br> SANTAMOROZDEDCLAUS | AAACDDELMNOORSSTUZ = AAACDDELMNOORSSTUZ <br> SANTA MOROZ DED CLAUS --> SANTACLAUS DEDMOROZ | **YES**          |
| PAPAINOEL <br> JOULUPUKKI <br> JOULNAPAOILELUPUKKI | AAEIIJKKLLNOOPPPUUU != AAEIIJKKLLLNOOPPUUU <br> PAPAINOEL JOULU_UKKI L | **NO**          |

## Forma de resolverlo
Para resolver este problema, simplemente debemos agrupar las letras de los dos letreros en un solo string y compararlos con los de la pila de letras encontrada. Podemos revisar si tenemos las letras necesarias **contando el total de cada una** mediante un diccionario y comparando que las cantidades sean iguales. Otra aproximación es **ordenar alfabéticamente la pila y suma de letreros** y ver si los strings resultantes son iguales. 

## Algoritmo
1) Agrupa las letras de los dos letreros en un string
2) Ordena alfabéticamente el string de los letreros
3) Ordena alfabéticamente la pila de letras
4) Compara si los strings ordenados son iguales \
    a) Imprime YES si son iguales \
    b) Imprime NO si no son iguales
