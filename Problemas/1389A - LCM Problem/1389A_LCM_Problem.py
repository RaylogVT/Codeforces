# 1389A - LCM Problem 
# https://codeforces.com/problemset/problem/1389/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) L, R = Límite inferior y superior
    L, R = map(int, input().split())

    # Si 2L > R, entonces el mcm siempre será mayor a R, imprime (-1,-1)
    if 2*L > R:
        print(-1, -1)

    # Si 2L <= R, entonces el mcm más pequeño dentro del rango es (L,2L)
    else:
        print(L, 2*L)
