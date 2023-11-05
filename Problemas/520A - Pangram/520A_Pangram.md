https://codeforces.com/problemset/problem/520/A

# 520A - Pangram

## Resumen del problema
Una string es un pangrama si tiene todas las letras del abedecario. Determina si el string es un pangrama.

## Input
La 1° línea contiene un número entero N (1 <= N <= 100) - La longitud del string \
La 2° línea contiene un string con mayúsculas y minúsculas - El string a revisar

## Output
Imprime "YES" si el string es un pangrama, de lo contrario, imprime "NO"

## Ejemplos
| Input                                         | Razonamiento  | Output    |
| --------------------------------------------- | :------------ | --------- |
| 12 <br> toosmallword                          | t,o,s,m,a,l,w,r,d = 9 letras | **NO**          |
| 35 <br> TheQuickBrownFoxJumpsOverTheLazyDog   | t,h,e,q,u,i,c,k,b,r,o,w,n,f,x,j,u,m,p,s,v,l,z,y,d,g = 26 letras| **YES**          |

## Forma de resolverlo
Para resolver este problema, simplemente debemos registrar qué letras tiene el string. Podemos utilizar un **set** (Python/C++) o **diccionario** (Python) para llevar el registro o conteo de las letras encontradas. Una vez leído el string, si el set o diccionario tiene **26** elementos (letras), entonces el string **sí tiene todas las letras del alfabeto**, por lo que es un pangrama. Sólo recuerda, el ASCII define valores distintos para mayúsculas y minúsculas, por lo que debes **normalizar el string para que tenga sólo mayúsculas o minúsculas**. Puedes usar el **lower()/tolower()** o **upper()/toupper()** de Python/C++ para ello.

## Algoritmo
1) Convierte todo el string a mayúsculas/minúsculas
2) Itera sobre los caracteres del string
3) Inserta las letras en un set/diccionario
4) Saca el tamaño del set/diccionario
5) Si el set/diccionario es de tamaño 26, ento
