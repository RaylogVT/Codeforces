https://codeforces.com/problemset/problem/281/A

# 281A - Word Capitalization

## Resumen del problema
Capitaliza una palabra (convierte a mayúscula su primera letra)

## Input
Un string de longitud N (1 <= N <= 1000) con mayúsculas y minúsculas -- La palabra a capitalizar

## Output
Imprime un string -- La palabra capitalizada

## Ejemplos
| Input  | Razonamiento | Output        |
| :----- | :----------  | :------------ |   
| konjac | **K**onjac   | **K**onjac    |
| aPplE  | **A**PplE    | **A**PplE     |

## Forma de resolverlo
Si bien los lenguajes de programación tienen una función para capitalizar strings (Ej. Python --> capitalize()), esta lo hace en modo **Oración**. \
Por ejemplo, si capitalizamos la palabra '**rAyLoG**', entonces se convertiría en '**Raylog**'. Sin embargo, solo nos interesa convertir la 1° letra en mayúscula y preservar las demás intactas, así que debemos buscar otra aproximación al problema.

La solución más fácil es separar la primera letra de la palabra del resto, capitalizarla, y volver a unir las dos partes. Usando la función **upper()** de Python o **toupper()** de C++ podemos convertir la primera letra en mayúscula, y de ahí la pegamos con el resto de la palabra. 

## Algoritmo
1) Saca la primera letra de la palabra
2) Conviértela a mayúscula
3) Imprime la 1° letra de la palabra
4) Imprime el resto de la palabra
