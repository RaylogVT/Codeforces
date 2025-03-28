# 2009B - OsuMania
# https://codeforces.com/problemset/problem/2009/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) filas = Número de filas del beatmap
    filas = int(input())

    # Beatmap = Lista de filas
    beatmap = []

    # Itera sobre cada fila del beatmap
    for indice_fila in range(0,filas):

        # Input:
        # 3) fila_actual = Fila actual del beatmap
        fila_actual = input()

        # Inserta la fila en el beatmap
        beatmap.append(fila_actual)

    # String con la ubicación de cada nota en cada fila
    notas = ""

    # Itera sobre cada fila del beatmap de abajo a arriba
    for indice_fila in range(filas-1,-1,-1):

        # Extrae el número de columna donde se encuentra la nota
        columna = beatmap[indice_fila].find('#') + 1

        # Escribe las notas de cada columna en una sola línea
        notas += str(columna) + " "

    # Imprime la ubicación de las notas de abajo a arriba
    print(notas)