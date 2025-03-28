# 1985B - Maximum Multiple Sum
# https://codeforces.com/problemset/problem/1985/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Límite
    N = int(input())

    # Si N es 3, entonces X = 3
    # Si N es cualquier otro número, entonces X = 2
    if N == 3:
        print(3)
    else:
        print(2)