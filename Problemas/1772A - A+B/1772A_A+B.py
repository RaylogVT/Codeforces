# 1772A - A+B
# https://codeforces.com/problemset/problem/1772/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) suma = Suma a evaluar
    suma = input()

    # Realiza la suma
    # Castea los dígitos a enteros para sumarlos
    resultado = int(suma[0]) + int(suma[2])

    # Imprime el resultado de la suma
    print(resultado)