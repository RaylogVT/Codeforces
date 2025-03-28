# 1878A - How Much Does Daytona Cost
# https://codeforces.com/problemset/problem/1878/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Número de elementos en el arreglo
    # 3) K = Número a encontrar
    N, K = map(int, input().split())

    # Input:
    # 4) arreglo = Arreglo de números
    arreglo = list(map(int, input().split()))

    # ¿K está en el arreglo? Si está, imprime "YES", de lo contrario, imprimer "NO"
    if K in arreglo:
        print("YES")
    else:
        print("NO")