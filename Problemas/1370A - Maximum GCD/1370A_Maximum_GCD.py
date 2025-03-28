# 1370A - Maximum GCD
# https://codeforces.com/problemset/problem/1370/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre casa caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Límite del rango 1-N
    N = int(input())

    # Calcula el MCD más grande de los pares entre 1 a N
    print(N // 2)