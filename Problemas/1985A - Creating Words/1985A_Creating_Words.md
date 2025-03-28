https://codeforces.com/problemset/problem/1985/A

# 1985A - Creating Words

## Resumen del problema
Dado dos strings de 3 letras, intercambia la 1° letra de ambos entre sí.

## Input
La 1° línea contiene un número entero T (1 <= T <= 100) -- El número de casos de prueba \
Las siguientes T líneas contienen dos strings A y B de 3 caracteres separados por un espacio en blanco

## Output
Por cada caso de prueba, imprime los strings A y B con la 1° letra de ambos intercambiadas entre sí

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 3 <br> ray log <br> bit set <br> twi tch                  | <br> r-ay l-og --> l-ay r-og <br> b-it s-et --> s-it b-et <br> t-wi t-ch --> t-wi t-ch              | <br> **lay rog** <br> **sit bet** <br> **twi tch**           |

## Forma de resolverlo
Para resolver este problema, simplemente extraer la 1° letra de ambos strings y reemplazarla en el string opuesto. \

### Python
En Python la forma común de reemplazar caracteres en strings es mediante **slicing**, es decir, partir el string en partes y reconstruirlo mediante sumas. Primero extrae la 1° letra de ambos strings y suma a cada uno la parte restante del otro string mediante índices. La fórmula sería: **new_string = original_string[0] + other_string[1:]**

### C++
En C++ puedes cambiar directamente un caracter de un string simplemente asignando el nuevo valor en su debida localidad. Primero extrae la 1° letra de ambos strings en dos variables auxiliares, y reemplaza el valor de la **localidad 0 (1° letra)** de ambos con estas.   

## Algoritmo
### Python
1) Utiliza slicing para reconstruir los strings con las 1° letras intercambiadas de ambos
- A = B[0] + A[1:]
- B = A[0] + B[1:]

### C++
1) Extrae la 1° letra de ambos strings \
- first_letter_A = A[0]
- first_letter_B = B[0]
2) Reemplaza los caracteres de la localidad 0 con las letras extraídas del paso anterior
- A[0] = first_letter_B
- B[0] = first_letter_A