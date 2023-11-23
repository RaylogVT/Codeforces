https://codeforces.com/problemset/problem/723/A

# 723A - New Year Meeting Friends

## Resumen del problema
Tres amigos viven en la línea Ox de Lineland: El 1° amigo vive en x1, el 2° amigo vive en x2, el 3° amigo vive en x3. Piensan reunirse para Año Nuevo. ¿Cuál es la distancia mínima total que necesitan recorrer los 3 amigos para reunirse?

## Input
Una sola línea con 3 números enteros x1, x2, x3 (1 <= x1, x2, x3 <= 100) - La coordenada de cada uno de los amigos

## Output
Imprime la distancia mínima que los amigos necesitan recorrer para juntarse.

## Ejemplos
| Input       | Razonamiento  | Output    |
| ----------- | :------------ | --------- |
| 7 1 4       | a) 1 = (7-1) + (1-1) + (4-1) = 9 <br> b) 2 = (7-2) + (2-1) + (4-2) = 8 <br> c) 3 = (7-3) + (3-1) + (4-3) = 7 <br> c) 4 = (7-4) + (4-1) + (4-4) = 6  | **6**      |
| 30 20 10    | a) 19 = (30-19) + (20-19) + (19-10) = 21 <br> b) 20 = (30-20) + (20-20) + (20-10) = 20 <br> c) 21 = (30-21) + (21-20) + (21-10) = 21      | **20**          |

## Forma de resolverlo
Para resolver este problema, primero debemos buscar la coordenada ideal para que se reúnan los amigos. La mejor opción sería aquella en la que uno de los tres amigos **no tenga que moverse**, de esa manera la suma de distancias se limitará a los otros dos. Bajo esta lógica, tenemos que elegir la alguna de las 3 coordenadas de los amigos.

Usemos el ejemplo #1: \
a) 1 = (7-1) + (1-1) + (4-1) = 9 \
b) 4 = (7-4) + (4-1) + (4-4) = **6** \
c) 7 = (7-7) + (7-1) + (7-4) = 9 

Como podemos ver, de las 3 coordenadas, la mejor es la del amigo que vive **en medio**. Para demostrarlo, definamos N como la distancia entre la coordenada del amigo que vive en el extremo izquierdo y el extremo derecho **(N = Izquierda - Derecha (o viceversa))**. Si elegimos a cualquiera de los dos amigos que vive en uno de los extremos de la línea (izquierda o derecha), entonces aquél que vive en el extremo opuesto debe recorrer N, mientras que el de en medio debe recorrer entre **1 a N/2**, lo cual suma una distancia total entre **N+1 a N+(N/2)**. 

Por el otro lado, si elegimos al amigo de en medio, entonces un amigo recorre una distancia **A** y el otro una distancia **N-A**, lo cual suma una distancia total de **N**. Como **(N = Izquierda - Derecha (o viceversa))**, entonces podemos generalizar la respuesta como **N = (Coordenada máxima - Coordenada mínima)**.

## Algoritmo
1) Ordena las coordenadas de los 3 amigos de menor a mayor (izquierda, medio, derecha)
2) Calcula MAX(x1,x2,x3) - MIN(x1,x2,x3)