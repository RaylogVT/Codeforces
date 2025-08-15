# 1927A - Make It White
# https://codeforces.com/problemset/problem/1927/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Longitud de la fila
    N = int(input())

    # Input:
    # 3) celdas = Celdas a pintas
    celdas = input()

    primera_celda_negra = 0
    ultima_celda_negra = 0

    # Itera sobre la fila para encontrar la 1° celda negra
    for indice_celda in range(0,N):
        if celdas[indice_celda] == 'B':
            primera_celda_negra = indice_celda
            break

    # Itera sobre la fila para encontrar la última celda negra
    for indice_celda in range(N-1,-1,-1):
        if celdas[indice_celda] == 'B':
            ultima_celda_negra = indice_celda
            break

    # Calcula la longitud del segmento a pintar
    longitud_segmento = ultima_celda_negra - primera_celda_negra + 1

    # Imprime la longitud del segmento a pintar
    print(longitud_segmento)


