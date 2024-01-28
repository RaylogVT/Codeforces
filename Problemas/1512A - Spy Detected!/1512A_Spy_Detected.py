# 1512A - Spy Detected!
# https://codeforces.com/problemset/problem/1512/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for prueba_actual in range(0, pruebas):

    # Input:
    # 2) númoero = Cantidad de números en el arreglo
    # 3) arreglo = Arreglo de números
    numeros = int(input())
    arreglo = list(map(int, input().split()))

    # Itera sobre los números del arreglo
    for numero in arreglo:

        # Si la frecuencia del número actual es igual a 1, entonces es el número distinto
        if arreglo.count(numero) == 1:

            # Imprime el índice del número distinto
            print(arreglo.index(numero) + 1)