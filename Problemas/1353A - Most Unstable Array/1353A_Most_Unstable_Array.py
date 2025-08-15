# 1353A - Most Unstable Array 
# https://codeforces.com/problemset/problem/1353/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Cantidad de números
    # 3) M = Suma de números
    N, M = map(int, input().split())

    # Imprime la suma de diferencia de números contiguos 
    if N == 1:
        print(0)
    elif N == 2:
        print(M)
    elif N > 2:
        print(2*M)