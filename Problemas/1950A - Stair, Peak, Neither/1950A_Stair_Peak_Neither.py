# 1950A - Stair, Peak or Neither
# https://codeforces.com/problemset/problem/1950/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) a,b,c = Dígitos a comparar
    a,b,c = map(int, input().split())

    # Compara los dígitos entre sí
    # Si a < b < c, entonces es una escalera (STAIR)
    # Si a < b > c, entonces es un pico/cumbre (PEAK)
    if a < b and b < c:
        print("STAIR")
    elif a < b and b > c:
        print("PEAK")
    else:
        print("NONE")

