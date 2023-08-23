https://codeforces.com/problemset/problem/112/A

# 112A - Petya and Strings

## Resumen del problema
Petya tiene dos strings y quiere compararlos lexicográficamente (valor ASCII). \
Dos letras equivalen lo mismo, independientemente de si están en mayúsculas o minúsculas (i.e. 'A' vale lo mismo que 'a'). \
Determina el string más grande.

## Input
Dos strings de longitud N (1 <= N <= 100). \
Está garantizado que tienen la misma longitud y constan de mayúsculas y minúsculas.

## Output
Imprime 1 si el 1° string es más grande. \
Imprime -1 si el 2° string es más grande. \
Imprime 0 si los dos strings son iguales. \

## Ejemplos
AaaA**A** (1°) \
AaaA**B** (2°)

Según la tabla ASCII, B = 66 y A = 65, entonces el 2° string es el más grande. \
Output = **-1**
___________________

AB**D** (1°) \
AB**C** (2°)

Según la tabla ASCII, D = 68 y C = 67, entonces el 1° string es el más grande. \
Output = **1**
___________________

AaaA**A** (1°) \
AaaA**A** (2°)

Los dos strings no tienen letras distintas, por lo que son iguales. \
Output = **0**

## Forma de resolverlo
Si bien la primera idea que se nos vendría a la cabeza es comparar directamente los strings, tenemos que considerar que las letras mayúsculas y minúsculas no tienen el mismo valor lexicográfico. Si consultamos la tabla ASCII (https://elcodigoascii.com.ar/), observamos que las mayúsculas tienen un valor de 65-90, mientras que las minúsculas tienen uno de 97-122. Al hacer la comparación con los valores ASCII, se notaría la diferencia lexicográfica entre mayúsculas y minúsculas, y el problema estipula que no la hay. 

Si queremos buscar letras distintas, primero tenemos que normalizar los dos strings para que tengan todas sus letras ya sea en minúsculas o mayúsculas. Afortunadamente, los lenguajes de programación tienen funciones para convertir caracteres en mayúsculas y minúsculas.

Python - upper() o lower() \
C++ - toupper() o tolower()

Una vez solucionado el tema de las mayúsculas y minúsculas, podemos plantear un algoritmo para sacar el resultado.

## Algoritmo
1) Convertir ambos strings a mayúsculas o minúsculas (a elección)
2) Recorrer los strings a la par letra por letra
3) Comparar las letras
4) Si un par de letras es distinta, sacas sus ASCIIs
5) Determina cuál string tiene la letra con el valor ASCII más grande e imprime el valor correspondiente