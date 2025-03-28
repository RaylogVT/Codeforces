# 1371A - Magical Sticks
# https://codeforces.com/problemset/problem/1371/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Número de palos
    N = int(input())

    # Se pueden generar N/2 palos de misma longitud
    # Se combina el palo más corto y 2° más largo
    # El palo más largo se queda solo
    palos_iguales =  (N // 2) + (N % 2)

    # Imprime la cantidad de palos iguales
    print(palos_iguales)
