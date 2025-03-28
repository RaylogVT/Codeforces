# 1873B - Good Kid
# https://codeforces.com/problemset/problem/1873/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) numero_digitos = Número de dígitos a multiplicar
    numero_digitos = int(input())

    # Input:
    # 3) lista_digitos = Dígitos a multiplicar
    lista_digitos = list(map(int, input().split()))

    # Sortea la lista de dígitos de menor a mayor
    lista_digitos_ordenados = sorted(lista_digitos)

    # Sumar +1 al dígito más pequeño
    lista_digitos_ordenados[0] += 1

    # Multiplicación máxima de dígitos
    multiplicacion_maxima = 1

    # Itera sobre la lista de dígitos para multiplicar cada uno de ellos
    for digito in lista_digitos_ordenados:
        multiplicacion_maxima = multiplicacion_maxima * digito

    # Imprime la multiplicación máxima
    print(multiplicacion_maxima)
