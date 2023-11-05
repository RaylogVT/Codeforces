# 1335A - Candies and Two Sisters
# https://codeforces.com/problemset/problem/1335/A

# Input:
# 1) Número de casos
casos = int(input())

# Itera sobre cada caso
for caso in range(0,casos):

    # Input:
    # 2) Número de dulces
    dulces = int(input())

    # Si el número de dulces es par, entonces hay (N/2) - 1 formas de repartirlos
    if dulces % 2 == 0:
        print(int((dulces / 2) - 1))
    
    # Si el número de dulces es impar, entonces hay (N-1) / 2 formas de repartirlos
    else:  
        print(int((dulces - 1) / 2))