https://codeforces.com/problemset/problem/785/A

# 785A - Anton and Polyhedrons

## Resumen del problema
Anton tiene varios poliedros. Estos se clasifican en:
1) Tetradros (Tetrahedron) = 4 caras
2) Cubo (Cube) = 6 caras
3) Octaedro (Octahedron) = 8 caras
4) Dodecaedro (Dodecahedron) = 12 caras
5) Icosaedro (Icosahedron) = 20 caras
   
Anton quiere saber cuántas caras tienen sus poliedros en total. ¿Cuántas caras tiene?

## Input
La primera línea contiene un número entero N (1 <= N <= 200000) -- El número de poliedros que Anton tiene \
Las siguientes N líneas contienen un string -- El nombre del i-ésimo poliedro de Anton

## Output
Imprime un número entero - El total de caras que tienen los poliedros de Anton

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 4 <br> Icosahedron <br> Cube <br> Tetrahedron <br> Dodecahedron | 20 + 6 + 4 + 12 = **42** <br> Icosahedron = 20 <br> Cube = 6 <br> Tetrahedron = 4 <br> Dodecahedron = 12 | **42**          |
| 3 <br> Dodecahedron <br> Octahedron <br> Octahedron | 12 + 8 + 8 = **28** <br> Dodecahedron = 12 <br> Octahedron = 8 <br> Octahedron = 8 | **28**          |

## Forma de resolverlo
Para resolver este problema, simplemente debemos establecer un contador de caras en 0, iterar sobre cada poliedro, detectar el tipo de poliedro que estamos revisando y sumar sus caras al contador. 

## Algoritmo
1) Settea un contador de caras en 0
2) Itera sobre los poliedros
3) Detecta el tipo de poliedro
4) Suma las caras del poliedro al contador
5) Imprime el contador de caras
