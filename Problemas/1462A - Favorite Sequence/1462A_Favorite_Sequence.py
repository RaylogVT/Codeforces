# 1462A - Favorite Sequence
# https://codeforces.com/problemset/problem/1462/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) tamano = Longitud de la secuencia 
    tamano = int(input())

    # Input:
    # 3) secuencia = Secuencia perfecta de números
    secuencia = list(map(int, input().split()))

    # Orden de números en secuencia de Policarpio
    indices = []

    # Insertar los índices impares de la secuencia
    impar = 1
    while impar <= tamano:
        indices.append(impar)
        impar += 2
    
    # Calcula el número par más grande del índice
    if tamano % 2 == 1:
        par = tamano - 1
    else:
        par = tamano
    
    # Insertar los índices impares de la secuencia
    while par > 0:
        indices.append(par)
        par -= 2

    # Secuencia original de números (previa al acomodo de Policarpio)
    secuencia_original = []

    # Itera sobre el valor de los índices
    for indice_actual in range(1, tamano + 1):

        # Encuentra el índice donde se encuentra el índice de Policarpio actual
        posicion_indice = indices.index(indice_actual)

        # Encuentra el número asociado al índice de Policarpio actual
        numero_original = secuencia[posicion_indice]

        # Construye la secuencia original de números
        secuencia_original.append(numero_original)
    
    # Imprime la secuencia original de números
    for numero in secuencia_original:
        print(numero, end=' ')



