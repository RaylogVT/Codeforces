https://codeforces.com/problemset/problem/136/A

# 136A - Presents

## Resumen del problema
Petya observa cómo sus amigos se dan regalos entre sí. Para monitorearlos, decide asignarle un número a cada amigo. Sabiendo quién le dió a quién, encuentra de qué amigo cada quién recibió regalo

## Input
La 1° línea contiene un número entero N (1 <= N <= 100) - El número de amigos de Petya \
La 2° línea contiene N números enteros P (1 <= P <= N) - El número del amigo que recibió regalo del amigo cuyo número es el del índice de números de la línea

## Output
Imprime N números - El número del amigo que le dió regalo al amigo cuyo número es el del índice de números de la línea

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 4 <br> 2 3 4 1     | Número del amigo P (quien recibió de amigo I) = 2 3 4 1 <br> Número del amigo I (quien entregó a amigo p) = 1 2 3 4 <br> Amigo 1 dió a 2 <br> Amigo 2 dió a 3 <br> Amigo 3 dió a 4 <br> Amigo 4 dió a 1 <br> ¿Quién le dió regalo a Amigo I? <br> Amigo 1 recibió de **4** <br> Amigo 2 recibió de **1** <br> Amigo 3 recibió de **2** <br> Amigo 4 recibió de **3** <br> Resultado = 4 1 2 3  | **4 1 2 3** |
| 3 <br> 1 3 2       | Número del amigo P (quien recibió de amigo I) 1 3 2 <br> Número del amigo I (quien entregó a amigo p) 1 2 3 <br> Amigo 1 dió a 1 <br> Amigo 2 dió a 3 <br> Amigo 3 dió a 2 <br> ¿Quién le dió regalo a Amigo I? <br> Amigo 1 recibió de **1** <br> Amigo 2 recibió de **3** <br> Amigo 3 recibió de **2** <br> Resultado = 1 3 2  | **1 3 2** |          

## Forma de resolverlo
(Este problema fue un reto, el manejo de índices en un arreglo siempre lo es XD)

Para resolver este problema, debemos conocer el **valor (P) e índice (I)** de cada uno de los números de los amigos en el input. \
El amigo P recibió regalo de amigo I, ahora debemos saber **quién le dio regalo a amigo I**. Para ello, podemos buscar quién está en el **índice (P)** para realizar dicho backtracking (puedes inferirlo a partir de los dos ejemplos de arriba).

## Algoritmo
1) Extrae el valor del amigo P
2) Busca en el arreglo qué amigo está en el índice P-1
3) En un nuevo arreglo, escribe el número del amigo P en el índice I-1
4) Imprime el arreglo resultante
