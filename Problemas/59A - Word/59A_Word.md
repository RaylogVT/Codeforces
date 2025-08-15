https://codeforces.com/problemset/problem/59/A

# 59A - Word

## Resumen del problema
Tienes una palabra que quieres normalizar con base al número de letras mayúsculas y minúsculas. \
Si la palabra tiene más letras mayúsculas que minúsculas, entonces convierte la palabra entera a mayúscula. \
Si la palabra tiene menos o el mismo número de letras mayúsculas que minúsculas, entonces convierte la palabra entera a minúscula.

## Input
La única línea contiene un string de longitud `N` (`1 <= N <= 1000`) con mayúsculas y minúsculas -- La palabra a normalizar

## Output
Imprime la palabra normalizada

## Ejemplos
| Input     | Razonamiento                                                                | Output      |
| :----     | :-------------------------------------------------------------------------  | ---------   |
| HoUse     | 2 letras mayúsculas <br> 3 letras mayúsculas <br> Convierte a **minúscula** | **house**   |
| RAYLog    | 4 letras mayúsculas <br> 2 letras mayúsculas <br> Convierte a **mayúscula** | **RAYLOG**  |
| maTRIx    | 3 letras mayúsculas <br> 3 letras mayúsculas <br> Convierte a **minúscula** | **matrix**  |

## Forma de resolverlo
La forma más sencilla de resolver este problema es checando si las letras de la palabra son mayúsculas o minúsculas. \
Pero, ¿cómo hacemos eso? \
Dependiendo del lenguaje, podemos usar funciones integradas dentro del mismo o usar las propiedades de los caracteres.

Python tiene dos funciones llamadas **isupper()** e **islower()**, las cuales detectan si un caracter está en mayúsculas o minúsculas, respectivamente. Si las usamos, entonces podemos checar las letras y realizar el conteo para la normalización

C++ no tiene funciones isupper() o islower() como Python, así que aquí tenemos que usar el valor **ASCII** de las letras. \
Si consultamos la tabla ASCII (https://elcodigoascii.com.ar/), observamos que las **mayúsculas tienen un valor de 65-90**, mientras que las **minúsculas tienen uno de 97-122**. Si la letra está en alguno de estos dos rangos, entonces podemos saber si es mayúscula o minúscula y de ahí hacer el conteo para la normalización.

## Algoritmo
1) Cuenta el número de letras mayúsculas y minúsculas en la palabra
2) Revisa la cantidad de letras mayúsculas vs. minúsculas
   - Mayúsculas > Minúsculas --> Convertir a mayúscula
   - Mayúsculas <= Minúsculas --> Convertir a minúscula
3) Imprime la palabra normalizada