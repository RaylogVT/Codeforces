# 1542A - Odd Set
# https://codeforces.com/problemset/problem/1542/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Número de elementos
    N = int(input())

    # Input:
    # 3) multiset = Números a emparejar
    multiset = list(map(int, input().split()))

    # Contador de números impares
    impares = 0

    # Itera sobre los números del multiset
    for numero in multiset:

        # Si el número es impar, entonces suma +1 al contador de impares
        if numero % 2 == 1:
            impares += 1

    # Si el contador de números impares es igual a N, entonces se pueden generar parejas de sumas impares
    # Imprime "YES" si se pueden formar parejas de sumas impares, de lo contrario, imprime "NO"
    if impares == N:
        print("YES")
    else:
        print("NO")

