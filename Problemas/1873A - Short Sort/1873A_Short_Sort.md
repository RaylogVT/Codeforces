https://codeforces.com/problemset/problem/1873/A

# 1873A - Short Sort

## Resumen del problema
Tienes 3 cartas A,B,C. Puedes intercambiar dos cartas de lugar una sola vez. Después de este movimiento, ¿es posible acomodar las cartas de tal forma que queden en el orden 'ABC'?

## Input
La 1° línea contiene un número entero T (1 <= T <= 6) -- El número de casos de prueba \
Las siguientes T líneas contienen un string con los 3 caracteres A,B,C una vez

## Output
Imprime 'YES' si se pueden reordenar las cartas de tal forma que queden en el orden 'ABC', de lo contrario, imprime 'NO'

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 6 <br> abc <br> acb <br> bac <br> bca <br> cab <br> cba  | <br> abc = Sí <br> acb = c <--> b = abc = Sí <br> bac = a <--> b = abc = Sí <br> bca = a <--> c = bac = No <br> cab = a <--> c = acb = No <br> cba = a <--> c = abc = Sí              | <br> **YES** <br> **YES** <br> **YES** <br> **NO** <br> **NO** <br> **YES**          |

## Forma de resolverlo
Para resolver este problema, simplemente desarrolla una función que permita intercambiar dos caracteres de lugar en un string, y revisa si cualquier **combinación de intercambio** genera el string 'ABC'. El string puede ser 'ABC' **desde el inicio**, en este caso no hace falta hacer intercambio.

### C++
C++ ya tiene una función **swap()** para intercambiar caracteres, por lo que no se necesita desarrollar una desde cero. 

### Python
Para Python necesitarás desarrollar el intercambio desde cero. Implementaciones en línea separan los caracteres en una **lista**, luego seleccionan las **localidades** de los dos caracteres a intercambiar y al final reúnen todo de nuevo con un **join()**. \
Puedes consultar un ejemplo en la siguiente página: <a>https://www.javatpoint.com/how-to-swap-two-characters-in-a-string-in-python</a>. \
Solamente recuerda que la función debe recibir las **localidades de los dos caracteres a intercambiar como parámetro** para que puedas seleccionar libremente cuáles intercambiar (puesto que tienes que realizar esta operación 3 veces).

## Algoritmo
1) Itera sobre los casos de prueba
2) Genera una función swap(a,b)
3) Revisa si el string ya tiene la forma 'ABC' \
a) Si la tiene, entonces imprime 'YES' \
b) Si no la tiene, entonces procede al siguiente paso 
4) Revisa si una combinación de intercambio de caracteres genera 'ABC' \
a) Si swap(0,1) == 'ABC' o swap(0,1) == 'ABC' o swap(0,1) == 'ABC', entonces imprime 'YES' \
b) Si ningún intercambio generó 'ABC', entonces imprime 'NO'