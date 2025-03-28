# 1850C - Word On The Paper
# https://codeforces.com/problemset/problem/1850/C

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) filas = Columnas de cuadricula
    filas = []

    # Genera la cuadrícula leyendo los caracteres por fila
    for fila in range(0,8):

        # Input:
        # 3) caracteres = Caracteres de cada fila
        columnas = input()
        filas.append(columnas)

    # Palabra a extraer
    palabra = ""

    # Itera sobre las filas de la cuadricula
    for fila in range(0,8):
        
        # Extrae los caracteres de la fila actual
        caracteres = filas[fila]

        # Itera sobre los caracteres de la fila actual
        for letra in caracteres:

            # Añade los caracteres distintos de punto (.) a la palabra
            if letra != '.':
                palabra += letra

    # Imprime la palabra extraída
    print(palabra)