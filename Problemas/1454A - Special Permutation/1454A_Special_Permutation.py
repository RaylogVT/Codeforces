# 1454A - Special Permutation
# https://codeforces.com/problemset/problem/1454/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Lonitud de la permutación
    N = int(input())

    # Imprime los número del 2 a N, luego 1
    for num in range(2, N+1):
        print(num, end=" ")
    print(1)
