https://codeforces.com/problemset/problem/432/A

# 432A - Choosing Teams

## Resumen del problema
La universidad de Saratov tiene N estudiantes. De cada uno sabes la cantidad de veces que ha participado en el campeonato internacional de ACM ICPC. Según las reglas del ACM ICPC, una persona sólo puede participar hasta 5 veces en el campeonato.

El director de la universidad desea armar equipos para el campeonato. Cada equipo debe estar conformado por 3 personas, y una persona no puede estar en 2 equipos a la vez. ¿Cuál es la cantidad máxima de equipos que se pueden formar de tal manera que cada equipo participe en el campeonato K veces?

## Input
La 1° línea contiene 2 números enteros N y K (1 <= N <= 2000, 1 <= K <= 5) -- El número de estudiantes y el número de veces que un equipo debe participar, respectivamente \
La 2° línea contiene N números enteros Y (0 <= Y <= 5) -- El número de veces que el i-ésimo estudiante ha participado en el campeonato internacional anteriormente

## Output
Imprime un número entero -- El número de equipos que se pueden formar

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 5 2 <br> 0 4 5 1 0  | 0 4 5 1 0 = Campeonatos ya participados <br> 5 1 0 4 5 = Campeonatos restantes <br> Y N N Y Y = ¿Puede participar 2 veces más? <br> 3 personas pueden participar <br> 3 / 3 = 1 equipo  | **1** |
| 6 5 <br> 0 0 0 0 0 0  | 0 0 0 0 0 0 = Campeonatos ya participados <br> 5 5 5 5 5 5 = Campeonatos restantes <br> Y Y Y Y Y Y = ¿Puede participar 5 veces más? <br> 6 personas pueden participar <br> 6 / 3 = 2 equipos  | **2** |

## Forma de resolverlo
Para resolver este problema, primero debemos contar **cuántas personas pueden participar K veces en el campeonato** internacional. Como cada persona sólo puede participar **5 veces**, entonces podemos restar **5 - Y** (veces que ya han participado) para saber **cuántas veces le quedan**. Sabiendo esto, podemos revisar si las **veces restantes son suficientes** para que pueda participar K veces en el campeonato. Si la resta es **mayor o igual a K**, entonces **sí puede participar**, de lo contrario, no puede. Hacemos esta revisión con cada persona, y al final contamos cuántas personas pueden participar K veces.

Con el número de personas disponibles para participar en el campeonato obtenido, ahora podemos calcular **cuántos equipos podemos crear** para este. Como cada equipo deber tener **3 personas**, y estas no pueden participar en dos equipos diferentes, simplemente podemos **dividir el número de personas entre 3** para obtener la cantidad de equipos.

## Algoritmo
1) Itera sobre las participaciones previas (Y) de cada estudiante
2) Declara un contador de personas disponibles para participar en el campeonato
3) Compara (5 - Y) contra el número de participaciones requeridas (K) \
a) Si (5 - Y) >= K, entonces suma +1 al contador de personas disponibles
4) Calcula el número de equipos a formar \
Cantidad de equipos = Número de personas disoponibles / 3
