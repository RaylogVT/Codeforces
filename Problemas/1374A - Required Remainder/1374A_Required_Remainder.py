# 1374A - Required Remainder
# https://codeforces.com/problemset/problem/1374/A

# Input:
# 1) prueba = Número de casos de prueba
pruebas = int(input())

# Itera sobre los casos de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) x = Número divisor
    # 3) y = Residuo a obtener
    # 4) n = Número máximo posible
    x, y, n = map(int, input().split())

    # n - (n % x) --> Elimina el residuo de N, representa el número máximo divisible por X y menor a N
    # n - (n % x) + y --> Número próximo (k) al máximo divisible por X que permite que k mod = y
    # n - (n % x) - (x - y) --> Número previo (k) al máximo divisible por X que permite que k mod = y
    # Detecta si el número próximo (k) es menor a n. Si lo es, entonces devuélvelo, de lo contrario, devuelve el número previo (k)
    if n - (n % x) + y <= n:
        print(n - (n % x) + y)
    elif n - (n % x) + y > n:
        print(n - (n % x) - (x - y))