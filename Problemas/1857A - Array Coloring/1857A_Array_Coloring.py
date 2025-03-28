# 1857A - Array Coloring
# https://codeforces.com/problemset/problem/1857/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) tamano = Número de elementos en el arreglo
    tamano = int(input())

    # Input:
    # 3) arreglo = Número de elementos en el arreglo
    arreglo = list(map(int, input().split()))

    # Suma los elementos del arreglo
    suma = sum(arreglo)

    # ¿La suma es par o impar?
    # Si la suma es par, entonces el arreglo se puede descomponer en dos grupos de tal manera que la suma de ambos tenga la misma paridad
    # Imprime "YES" si la suma es par, de lo contrario, imprime "NO"
    if suma % 2 == 0:
        print("YES")
    else:
        print("NO")

