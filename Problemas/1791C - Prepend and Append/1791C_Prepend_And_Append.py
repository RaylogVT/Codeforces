# 1791C - Prepend and Append
# https://codeforces.com/problemset/problem/1791/C

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Tamaño del string
    N = int(input())

    # Input
    # binario = String de 0s y 1s
    binario = input()
    
    # Variables apuntadoras
    izquierda = 0
    derecha = N - 1

    # Si las dos variables tienen vadlores distintos, entonces se recorren en direcciones opuestas
    while binario[izquierda] != binario[derecha] and derecha > izquierda:
        izquierda += 1
        derecha -= 1

    # Si el string original es vacío, entonces imprime 0
    if derecha < izquierda:
        print(0)

    # Si el sring original no está vacío, calcula la distancia entre las variables apuntadoras + 1
    else:
        longitud_original = derecha - izquierda + 1
        print(longitud_original)

