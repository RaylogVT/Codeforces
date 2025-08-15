# 1311 - Add Odd or Substract Even
# https://codeforces.com/problemset/problem/1311/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) a,b = Números a utilizar
    a,b = map(int, input().split())

    # Si A y B son iguales, no se usan movimientos
    if a == b:
        print(0)

    # Si A es menor a B, checa la igualdad de paridad
    elif a < b:

        # Si A y B son pares o impares, entonces se usan 2 movimientos
        if (a % 2 == 0 and b % 2 == 0) or (a % 2 == 1 and b % 2 == 1):
            print(2)

        # Si A y B es par-impar, entonces se usa 1 movimiento
        elif (a % 2 == 0 and b % 2 == 1) or (a % 2 == 1 and b % 2 == 0):
            print(1)

    # Si A es mayor a B, checa la diferencia de paridad
    elif a > b:

        # Si A y B son pares o impares, entonces se usa 1 movimiento
        if (a % 2 == 0 and b % 2 == 0) or (a % 2 == 1 and b % 2 == 1):
            print(1)

        # Si A y B es par-impar, entonces se usa 2 movimientos
        elif (a % 2 == 0 and b % 2 == 1) or (a % 2 == 1 and b % 2 == 0):
            print(2)
