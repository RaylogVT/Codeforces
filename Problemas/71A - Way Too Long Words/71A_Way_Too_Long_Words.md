https://codeforces.com/problemset/problem/71/A

# 71A - Way Too Long Words

## Resumen del problema
Un string que tenga más de 10 caracteres debe abreviarse de la siguiente forma: Toma el 1° y último carácter, y en medio escribe el número de caracteres que hay entre estos.

## Input
La primera línea es un número entero N (1 <= N <= 100) -- El número de palabras a abreviar \
Las siguientes N líneas son strings de longitud L (1 <= L <= 100) -- Las palabras a abreviar

## Output
Imprime N líneas, donde la i-ésima línea es la abreviación de la i-ésima palabra del input

## Ejemplos
| Input         | Razonamiento                                  | Output        |
| word          | word (4 letras) = Sin cambio                  | **word**      |
| localization  | localization (12 letras) = l**ocalizatio**n   | **l10n**      |

## Algoritmo
1) Determina si la palabra tiene más de 10 caracteres. En caso de que no, la palabra no se abrevia 
2) Extrae el 1° y último carácter de la palabra 
3) Extrae el número de caracteres entre el 1° y último carácter \
Esto se calcula sacando la longitud total de la palabra y restarle 2 (el 1° y último caracter) \
**Caracteres en medio** = Longitud de palabra - 2 
4) Imprime el 1° carácter, el número de caracteres en medio y el último carácter

