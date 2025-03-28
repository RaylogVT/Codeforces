# 1926A - Vlad And The Best Of Fives 
# https://codeforces.com/problemset/problem/1926/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) stringAB = String de longitud 5 con As y Bs
    stringAB = input()

    # Contadores de caracteres
    A = 0
    B = 0

    # Itera sobre el string
    for letra in stringAB:

        # Suma +1 al contador respectivo de cada letra
        if letra == 'A':
            A += 1
        if letra == 'B':
            B += 1

    # Si A aparece más veces en el string que B, entonces imprime 'A', de lo contrario, imprime 'B'
    if A > B:
        print('A')
    else:
        print('B')