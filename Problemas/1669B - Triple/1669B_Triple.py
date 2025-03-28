# 1669B - Triple
# https://codeforces.com/problemset/problem/1669/B

from collections import defaultdict

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Números de elementos en el arreglo
    N = int(input())

    # Input:
    # 3) arreglo = Arreglo de números
    arreglo = list(map(int, input().split()))

    # Número que aparece 3 veces en el arreglo
    # Se asume que no existe de primeras (-1)
    triplete = -1

    # Diccionario con el número de instancias de cada elemento
    instancias = defaultdict(int)

    # Itera sobre los números del arreglo
    for numero in arreglo:
        
        # Añade los números y sus ocurrencias al diccionario
        instancias[numero] += 1

        # Si algún número tiene 3 ocurrencias en el arreglo, entonces se actualiza la variable de búsqueda
        if instancias[numero] >= 3:
            triplete = numero
            break

    # Imprime el número que aparece 3 veces en el arreglo
    print(triplete)

