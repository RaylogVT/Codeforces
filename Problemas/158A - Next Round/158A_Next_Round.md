https://codeforces.com/problemset/problem/158/A

# 158A - Next Round

## Resumen del problema
Dado una lista de N concursantes, determina cuántos tienen una puntuación positiva y mayor o igual a la del k-ésimo concursante.

## Input
La primera línea tiene dos números enteros N y K (1 <= N <= K <= 50) -- El número de concursantes, El número del K-ésimo participante \
La segunda línea tiene N números enteros A1, A2, ..., An (0 <= Ai <= 100) -- Las puntuaciones de cada participante (de mayor a menor)

## Output
Imprime el número de participantes cuya puntuación es mayor o igual a la del k-ésimo participante

## Ejemplos
Input
8 5 \
10 9 8 7 7 7 5 5

Tenemos 8 concursantes, el 5° participante tiene una puntuación de 7 (10 9 8 7 **7** 7 5 5) \
Por lo tanto, pasan a la siguiente ronda aquellos concursantes cuya puntuación sea positiva y mayor o igual a 7 \
De la lista, hay 6 participantes con una puntuación mayor a 0 y mayor o igual a 7 (**10 9 8 7 7 7** 5 5) \
Output = **6**

## Algoritmo
1) Guarda las puntuaciones en una lista/arreglo
2) Extrae la puntuación del k-ésimo participante
3) Compara las puntuaciones de cada participante contra la del k-ésimo participante, asegúrate de que sean igualmente mayores a 0.
