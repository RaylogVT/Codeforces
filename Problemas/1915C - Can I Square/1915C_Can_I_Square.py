# 1915C - Can I Square
# https://codeforces.com/problemset/problem/1915/C

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) cubetas = Número de cubetas con tablones
    cubetas = int(input())

    # Input:
    # 3) tablones = Número de tablones por cubeta
    tablones = list(map(int, input().split()))

    # Calcula la suma total de tablones
    total_tablones = sum(tablones)

    # Saca la raíz cuadrada del total de tablones
    cuadrado = int(total_tablones ** 0.5)

    # Si el número es cuadrado, entonces imprime 'YES', de lo contrario, imprime 'NO'
    if int(cuadrado ** 2) == total_tablones:
        print('YES')
    else:
        print('NO')

