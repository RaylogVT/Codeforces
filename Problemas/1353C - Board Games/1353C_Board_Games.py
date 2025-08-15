# 1353C - Board Games 
# https://codeforces.com/problemset/problem/1353/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Tamaño del tablero
    N = int(input())

    # Calcula la distancia máxima que recorre una figura para llegar al centro
    D = (N - 1) // 2

    # Calcula el total de movimDentos a realizar por todas las figuras para llevarlas al centro del tablero
    movimientos = 8 * (D * (D+1) * (2*D + 1)) // 6

    # Imprime el total de movimientos a realizar
    print(movimientos)