https://codeforces.com/problemset/problem/1791/A

# 1791A - Codeforces Checking

## Resumen del problema
Determina si un carácter se encuentra en la palabra 'Codeforces'

## Input
La 1° línea contiene un número enteno T (1 <= T <= 26) -- El número de casos de prueba
Las siguientes T líneas contienen un carácter C -- El carácter a buscar

## Output
Imprime "YES" si el carácter está en la palabra, de lo contrario, imprime "NO" 

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 4 <br> a <br> b <br> c <br> d | <br> Codeforces <br> Codeforces <br> **C**odefor**c**es <br> Co**d**eforces | <br> **NO** <br> **NO** <br> **YES** <br> **YES** |

## Forma de resolverlo
### a) Set de letras
Podemos generar un **set()** que guarde las letras que contiene la palabra 'Codeforces' y simplemente revisar si el carácter está o no en el set.

### b) Iteración
Podemos crear una variable **booleana** que sirva como **bandera** para determinar si el carácter está en la palabra 'Codeforces'. \
Partiendo de que empieza como **False**, iteramos sobre las letras de la palabra 'Codeforces' y si encontramos que el caracter coincide con alguna de las letras, entonces setteamos la variable bandera a **True**. Dependiendo del valor de la variable bandera, imprimimos el output correspondiente.

## Algoritmo
### a) Set de letras
1) Genera el set de las letras en la palabra 'Codeforces'
2) Detecta si el carácter está en el set de letras \
a) Si lo está, entonces imprime "YES" \
b) Si no lo está, entonces imprime "NO"

### b) Iteración
1) Genera una variable booleana como bandera, settéala a False
2) Itera sobre las letras de la palabra 'Codeforces'
3) Detecta si el carácter es igual a alguna de las letras \
a) Si alguna lo es, entonces cambia la variable bandera a True
4) Detecta el valor final de la variable bandera \
a) Si es True, entonces imprime "YES" \
b) Si es False, entonces imprime "NO"