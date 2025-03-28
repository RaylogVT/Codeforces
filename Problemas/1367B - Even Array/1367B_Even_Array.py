# 1367B - Even Array
# https://codeforces.com/problemset/problem/1367/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) numeros = Número de elementos en el arreglo
    numeros = int(input())

    # Input:
    # 3) arreglo = Arreglo con los números
    arreglo = list(map(int, input().split()))

    # Contadores de disparidades
    disparidad_indice1_elemento0 = 0
    disparidad_indice0_elemento1 = 0

    # Itera sobre los números del arreglo
    for indice_arreglo in range(0,numeros):
        
        # Detecta si el índice y número mod 2 son dispares
        # Suma +1 al contador correspondiente dependiendo del tipo de disparidad
        if indice_arreglo % 2 == 1 and arreglo[indice_arreglo] % 2 == 0:
            disparidad_indice1_elemento0 += 1

        if indice_arreglo % 2 == 0 and arreglo[indice_arreglo] % 2 == 1:
            disparidad_indice0_elemento1 += 1 
    
    # Si tienes la misma cantidad de disparidades de los dos tipos, entonces puedes swappearlos entre sí para que el arreglo sea bueno
    # Imprime cualquiera de los dos contadores
    if disparidad_indice1_elemento0 == disparidad_indice0_elemento1:
        print(disparidad_indice1_elemento0)
    
    # Si tienes una cantidad distinta de disparidades de los dos tipos, entonces no puede swappear para que el arreglosea bueno, imprime -1
    else:
        print("-1")