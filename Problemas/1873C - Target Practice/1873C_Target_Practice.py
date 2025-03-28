# 1873C - Square 
# https://codeforces.com/problemset/problem/1873/C

# Diana con puntos
diana = [[1,1,1,1,1,1,1,1,1,1],
         [1,2,2,2,2,2,2,2,2,1],
         [1,2,3,3,3,3,3,3,2,1],
         [1,2,3,4,4,4,4,3,2,1],
         [1,2,3,4,5,5,4,3,2,1], 
         [1,2,3,4,5,5,4,3,2,1],
         [1,2,3,4,4,4,4,3,2,1],
         [1,2,3,3,3,3,3,3,2,1],
         [1,2,2,2,2,2,2,2,2,1],
         [1,1,1,1,1,1,1,1,1,1]]

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) flechas = Matriz con los disparos de las flechas
    flechas = []
    for fila in range(0,10):
        disparos = list(input())
        flechas.append(disparos)

    # Puntuación de Vlad
    puntuacion = 0

    # Itera sobre el mapa de flechas
    for fila in range(0,10):
        for columna in range(0,10):

            # Donde una flecha haya caído, suma los puntos correspondientes de acuerdo a la diana
            if flechas[fila][columna] == 'X':
                puntuacion += diana[fila][columna]

    # Imprime la puntuación final de Vlad
    print(puntuacion)
