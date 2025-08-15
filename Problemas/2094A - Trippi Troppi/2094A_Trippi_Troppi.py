# 2094A - Trippi Troppi 
# https://codeforces.com/problemset/problem/2094/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) pais = Nombre completo del país
    pais = input()

    # Separa las palabras
    palabras = pais.split()

    # Siglas del país
    siglas = ""

    # Extrae la 1° letra de cada palabra
    for palabra in palabras:
        siglas += palabra[0]

    # Imprime las siglas del país
    print(siglas)
    