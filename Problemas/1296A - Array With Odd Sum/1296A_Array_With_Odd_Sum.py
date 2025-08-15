# 1296A - Array With Odd Sum
# https://codeforces.com/problemset/problem/1296/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Cantidad de elementos en el arreglo
    N = int(input())

    # Input:
    # 3) arreglo = Arreglo de números
    arreglo = list(map(int, input().split()))

    # ¿El arreglo tiene al menos un número par?
    hay_par = False

    # Contador de numeros impares
    conteo_impares = 0

    # Itera sobre el arreglo para determinar si hay un número impar
    for numero in arreglo:
        if numero % 2 == 1:
            conteo_impares += 1
        else:
            hay_par = True
    
    # Si no hay números impares, entonces no se puede obtener una suma impar
    if conteo_impares == 0:
        print("NO")

    # Si sólo hay números impares, entonces checa la cantidad que hay
    elif conteo_impares == N:
        if N % 2 == 0:
            print("NO")
        else: 
            print("YES")
    
    # Si hay al menos un número impar, entonces se puede obtener una suma impar
    elif hay_par == True and conteo_impares > 0:
        print("YES")
    else:
        print("NO")