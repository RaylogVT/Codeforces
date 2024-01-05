# 1335A - Candies and Two Sisters
# https://codeforces.com/problemset/problem/1335/A

# Input:
# 1) pruebas = Número de casos de pruebas
pruebas = int(input())

# Itera sobre cada caso de prueba
for prueba in range(0,pruebas):

    # Input:
    # 2) dulces = Número de dulces
    dulces = int(input())

    # Si el número de dulces es par, entonces hay (N/2) - 1 formas de repartirlos
    if dulces % 2 == 0:
        print(int((dulces / 2) - 1))
    
    # Si el número de dulces es impar, entonces hay (N-1) / 2 formas de repartirlos
    else:  
        print(int((dulces - 1) / 2))
