https://codeforces.com/problemset/problem/427/A

# 427A - Police Recruits

## Resumen del problema
El departamento ha empezado a contratar policías para investigar crímenes. Un policía puede investigar un solo crimen en su vida. Si un crimen ocurre y no hay policías disponibles para investigarlo, entonces el crimen pasa sin tratarse. Dado el orden cronológico de los crímenes y contrataciones de policías, determina cuántos crímenes fueron no tratados.

## Input
La 1° línea contiene un número entero N (1 <= N <= 10000) -- El número de eventos \
La 2° línea contiene N números enteros An (1 <= Ai <= 10) -- El evento ocurrido \
Si el evento Ai es igual a -1, entonces es un crimen \
Si el evento Ai es mayor a 0, entonces significa que se contrataron Ai policías 

## Output
Imprime un número entero -- El número de crímenes que quedaron sin tratar

## Ejemplos
| Input                                     | Razonamiento   | Output    |
| ------                                    | :------------  | --------- |
| 3 <br> -1 -1 1                            | ![image](https://github.com/RaylogVT/Codeforces/assets/129716395/1a210e44-349f-485b-a562-256f6efdb75a)  | **2**     |
| 8 <br> 1 -1 1 -1 -1 1 1 1                 | ![image](https://github.com/RaylogVT/Codeforces/assets/129716395/9f6ccd8c-9d4b-4138-8ead-734ecf33f4b5)  | **1**     |
| 11 <br> -1 -1 2 -1 -1 -1 -1 -1 -1 -1 -1   | ![image](https://github.com/RaylogVT/Codeforces/assets/129716395/dbeac468-e578-47b4-b859-ef385319ca84)  | **8**     |

## Forma de resolverlo
Para resolver este problema, debemos monitorear la cantidad de **policías disponibles (P)** por cada evento que pasa. Por cada **evento (E)**. \
Si este es **positivo**, entonces añadimos policías a nuestra cantidad. \
Si el evento es **igual a -1**, entonces es un **crimen (C)**, y debemos ver si tenemos policías disponibles. Si los tenemos, entonces **restamos -1** a estos. En cambio, si no tenemos, entonces nadie atiende el crimen y pasa a no ser tratado, por lo que **sumamos +1** a nuestro número de crímenes sin tratar.

## Algoritmo
1) Inserta los eventos en una lista
2) Itera sobre la lista de eventos
3) Revisa el evento \
a) Si el evento es mayor a 0, entonces suma la cantidad del evento a los policías disponibles \
b) Si el evento es igual a -1, entonces checa la cantidad de policías disponibles \
    b.1) Si hay policías disponibles (mayor a 0), entonces resta -1 \
    b.2) Si no hay policías disponibles (igual a 0), entonces suma +1 a los crímenes sin tratar 
4) Devuelve el número de crímenes sin tratar
