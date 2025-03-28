# 1971A - My First Sorting Problem
# https://codeforces.com/problemset/problem/1971/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) x, y = Números a comparar
    x, y = map(int, input().split())

    # Imprime el número más chico, luego el número más grande
    print("{} {}".format(min(x,y), max(x,y)))