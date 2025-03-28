# 1760B - Atilla's Favorite Problem
# https://codeforces.com/problemset/problem/1760/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Longitud del string
    N = int(input())

    # Input:
    # 3) mensaje = String a escribir
    mensaje = input()

    # Valor ASCII máximo encontrado en las letras del mensaje
    ascii_maximo = 0

    # Itera sobre las letras del mensaje
    for letra in mensaje:

        # Compara el ASCII de la letra actual contra el máximo encontrado hasta el momento
        ascii_maximo = max(ascii_maximo, ord(letra))

    # Calcula el tamaño mínimo del abecedario necesario para escribir el mensaje
    abecedario_minimo = ascii_maximo - 96

    # Imprime el tamaño mínimo del abecedario
    print(abecedario_minimo)
