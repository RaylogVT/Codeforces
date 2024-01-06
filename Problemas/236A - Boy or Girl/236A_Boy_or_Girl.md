https://codeforces.com/problemset/problem/236/A

# 236A - Boy or Girl

## Resumen del problema
Nuestro héroe ha determinado una manera de determinar si un usuario es hombre o mujer: Si su username tiene un número distinto de letras impar, entonces es hombre, de lo contrario, es mujer. \
Dado un username, ayúdale a determinar el género del usuario.

## Input
Un string de longitud N (1 <= N <= 100) con letras minúsculas -- El username a revisar

## Output
Imprime "CHAT WITH HER!" si el usuario es mujer \
Imprime "IGNORE HIM!" si el usuario es hombre

## Ejemplos
| Input     | Razonamiento                              | Output                |
| :-------- | :---------------------------------------  | :-------------------- |
| wjmzbmr   | Letras distintas = [w, j, m, z, b, r] = 6 | **CHAT WITH HER!**    |
| xiaodao   | Letras distintas = [x, i, a, o, d] = 5    | **IGNORE HIM!**       |

## Forma de resolverlo
Para este problema, debemos buscar la manera de llevar un registro de las letras que vayamos leyendo del username para saber si son distintas o repetidas. Si bien podemos hacer dicha labor manualmente con una lista/arreglo, existe una estructura de datos que puede hacer el trabajo por nosotros.

La estructura **set()** es un arreglo que guarda valores únicos de un input, así que es perfecta para registrar las letras únicas del username. \
Para más información sobre los sets, consulta las siguientes páginas: \
Python - https://www.w3schools.com/python/python_sets.asp \
C++ - https://www.geeksforgeeks.org/set-in-cpp-stl/

## Algoritmo
1) Mete el username en un set 
2) Calcula el tamaño del set 
3) Si el tamaño del set es impar, entonces imprime "IGNORE HIM!", de lo contrario imprime "CHAT WITH HER!"
