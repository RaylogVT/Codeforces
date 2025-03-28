# 1520B - Ordinary Numbers
# https://codeforces.com/problemset/problem/1520/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Límite superior
    N = int(input())

    # Contador de números ordinarios
    numeros_ordinarios = 0

    # Itera sobre cada par (Dígito, Cantidad)
    for digito in range(1,10):
        for cantidad in range(1,10):
            
            # Si el número ordinario es menor a N, entonces se suma al contador
            if (digito * (10 ** cantidad - 1) // 9) <= N:
                numeros_ordinarios += 1
    
    # Imprime la cantidad de números ordinarios encontrados
    print(numeros_ordinarios)
