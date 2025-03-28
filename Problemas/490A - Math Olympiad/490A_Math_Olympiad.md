https://codeforces.com/problemset/problem/490/A

# 490A - Math Olympiad

## Resumen del problema
La Escuela de Berland tiene N alumnos, cada uno experto en una materia Ti: \
a) Si Ti = 1, entonces el alumno es bueno en Programación \
b) Si Ti = 2, entonces el alumno es bueno en Matemáticas \
c) Si Ti = 3, entonces el alumno es bueno en Deportes \

Para el Decatlón Olímpico se necesita un alumno bueno en cada materia (Programación, Matemáticas, Deportes) para formar un equipo. Conociendo la materia experta de cada alumno, ¿cuál es el número máximo de equipos que se pueden formar?

## Input
La 1° línea contiene un número entero N (1 <= N <= 5000) -- El número de alumnos en la Escuela de Berland \
La 2° línea contiene N números enteros T1,T2,...,TN (1 <= Ti <= 3) -- La materia experta del i-ésimo alumno 

## Output
En la 1° línea, imprime un número entero W -- El número máximo de equipos que se pueden formar \
En las siguientes W líneas, imprime 3 números enteros -- Los índices de los alumnos que conforman el equipo \
Los índices de los alumnos están numerados de 1 a N \
Si hay más de una respuesta, entonces imprime cualquiera de ellas \
Si no se pueden formar equipos, entonces imprime 0

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 7 <br> 1 3 1 3 2 1 2 | 3 (1s) = 3 alumnos son buenos en Programación <br> 2 (2s) = 2 alumnos son buenos en Matemáticas <br> 2 (3s) = 2 alumnos son buenos en Deportes <br> min(3,2,2) = 2 <br> 1 3 1 3 2 1 2 <br> 1 1 2 2 1 - 2 <br> 1 5 2 <br> 3 7 4 | **2 <br> 1 5 2 <br> 3 7 4** |
| 5 <br> 2 2 3 1 3     | 1 (1s) = 1 alumno son buenos en Programación <br> 2 (2s) = 2 alumnos son buenos en Matemáticas <br> 2 (3s) = 2 alumnos son buenos en Deportes <br> min(1,2,2) = 1 <br> 2 2 3 1 3 <br> 1 - 1 1 - <br> 4 1 3 | **1 <br> 4 1 3** |

## Forma de resolverlo
Para resolver este problema, primero debemos clasificar a los alumnos dependiendo de su materia experta. Podemos usar **3 arreglos, uno por materia**, para guardar los índices de los alumnos buenos en determinada materia. \
Una vez clasificados, podemos calcular el máximo de equipos se pueden armar. Puesto que el número de equipos está determinado por la **materia con menos alumnos expertos**, entonces simplemente debemos contar cuántos alumnos hay por materia y extraer el valor mínimo. El conteo se puede realizar con una función **len()** o **size()**, mientras que el mínimo se realiza con una función **min()**. \
Después, para asignar a los alumnos, simplemente podemos ir **extrayendo un índice de cada arreglo** para formar un equipo, y repetir el proceso hasta tener todos los equipos definidos en el paso anterior.

## Algoritmo
1) Crea 3 arreglos vacíos (P,M,D)
2) Itera sobre las materias de los alumnos \
a) Si materia = 1, entonces añade el índice del alumno a P \
b) Si materia = 2, entonces añade el índice del alumno a M \
c) Si materia = 3, entonces añade el índice del alumno a D
3) Calcula el número de alumnos por materia 
- nP = len(P), nM = len(M), nD = len(D)
4) Calcula el número máximo de equipos a realizar
- Equipos = min(nP,nM,nD)
5) Extrae un índice de P,M,D para formar un equipo
6) Repite el Paso 5 hasta formar la cantidad de equipos calculada en el Paso 4