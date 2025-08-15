# 1903A - Halloumi Boxes 
# https://codeforces.com/problemset/problem/1903/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) cajas = Cantidad de cajas
    # 3) longitud_reversion = Longitud máxima del subarreglo de cajas a invertir
    cajas, longitud_reversion = map(int, input().split())

    # Input:
    # 4) halloumis = Cantidad de halloumis por caja
    halloumis = list(map(int, input().split()))

    # Si la longitud de reversión es mayor a 1, entonces se pueden ordenar las cajas
    # Si las cajas ya están ordenadas de mayor a menor, entonces no se necesita invertir nada
    if halloumis == sorted(halloumis) or longitud_reversion > 1:
        print("YES")
    else:
        print("NO")