https://codeforces.com/problemset/problem/1703/A

# 1703A - Yes or YES?

## Resumen del problema
Dado un string de 3 caracteres, determina si este es igual a la palabra "YES" (independientemente de si usa minúsculas y mayúsculas).

## Input
La 1° línea contiene un número enteno T (1 <= T <= 1000) - El número de casos de prueba
Las siguientes T líneas contienen un string de 3 caracteres - El string a identificar

## Output
Imprime "YES" si el string es igual a alguna variación de "YES", de lo contrario, imprime "NO"

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 4 <br> yEs <br> YEs <br> YaS <br> Zed | <br> y E s -> yes = yes <br> Y E s -> yes = yes <br> Y a S -> yas != yes <br> Z e d -> zed = yes |<br> **YES** <br> **YES** <br> **NO** <br> **NO** |

## Forma de resolverlo
Para resolver este problema, simplemente podemos convertir el string a minúsculas o mayúsculas y ver si es igual al string **"yes/YES"**. \
De ser así, imprime "YES". Si no son iguales, entonces imprime "NO".

## Algoritmo
1) Convierte el string a mayúsculas/minúsculas
2) Compara el string con "yes" o "YES" \
a) Si son iguales, entonces imprime "YES" \
b) Si son distintas, entonces imprime "NO"
