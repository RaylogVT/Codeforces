# 1669A - Division?
# https://codeforces.com/problemset/problem/1669/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) rating = Puntuación del usuario
    rating = int(input())

    # Asigna la división correspondiente dependiendo del rating
    if rating >= 1900:
        print('Division 1')
    elif rating >= 1600 and rating <= 1899:
        print('Division 2') 
    elif rating >= 1400 and rating <= 1599:
        print('Division 3') 
    elif rating <= 1399:
        print('Division 4') 