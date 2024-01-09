https://codeforces.com/problemset/problem/71/A

# 71A - Way Too Long Words

## Resumen del problema
Un string que tenga más de 10 caracteres debe abreviarse de la siguiente forma: \
Toma el 1° y último carácter, y en medio escribe el número de caracteres que hay entre estos. \
Abrevia las siguientes palabras.

## Input
La 1° línea es un número entero N (1 <= N <= 100) -- El número de palabras a abreviar \
Las siguientes N líneas son strings de longitud L (1 <= L <= 100) -- Las palabras a abreviar

## Output
Imprime N líneas -- La i-ésima línea es la abreviación de la i-ésima palabra del input

## Ejemplos
| Input         | Razonamiento                                  | Output        |
| :------------ | :-------------------------------------------- | :------------ |
| word          | word (4 letras) = Sin cambio                  | **word**      |
| localization  | localization (12 letras) = l**ocalizatio**n   | **l10n**      |

## Forma de resolverlo
Para resolver este problema, debemos buscar una manera de calcular el número de letras que hay entre la primera y última letra de una palabra con más de 10 caracteres. \
Pensemos en lo siguiente: Al descartar la primera y última letra de una palabra, estamos restando **2 letras** a la misma, lo cual nos da las letras que están en medio. \
Con base en esto, podemos concluir que el número de letras en medio de una palabra es **(Longitud de palabra - 2)**

## Algoritmo
1) Determina si la palabra tiene más de 10 caracteres. \
a) Si la palabra tiene más de 10 caracteres, entonces se va al siguiente paso \
b) Si la palabra tiene 10 o menos de 10 caracteres, entonces la palabra no se abrevia, se imprime como tal
2) Extrae el 1° y último carácter de la palabra 
3) Calcula el número de letras en medio (Longitud de palabra - 2)
4) Imprime el 1° carácter, el número de letras en medio y el último carácter
