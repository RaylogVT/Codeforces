# 1328A - Divisibility Problem
# https://codeforces.com/problemset/problem/1328/A

# Inputs:
# 1) Número de casos
casos = int(input())

# Resuelve cada caso
for caso in range(0,casos): 
    # Inputs:
    # 2) a, b - Números a dividir
    a, b = map(int, input().split())

    # Si a y b son inicialmente divisibles, entonces imprime 0 (no necesitas sumar +1)
    if a % b == 0:
        print('0')

    # Si a y b no son inicialmente divisibles, entonces calcula cuántos +1 debes sumar para anular el residuo de A/B
    else:
        sumas = b - (a % b)

        # Imprime el resultado
        print(sumas)
