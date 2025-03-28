# 2009A - Minimize!
# https://codeforces.com/problemset/problem/2009/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) a,b = Rango de números
    a,b = map(int, input().split())

    # Calcula (c-a) + (b-c) = b-a
    # Imprime el resultado
    print(b - a)