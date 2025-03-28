# 1722B - Colourblindness 
# https://codeforces.com/problemset/problem/1722/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) columnas = Número de celdas por fila
    columnas = int(input())

    # Input:
    # 3) filas = Dos filas de colores
    fila1 = input()
    fila2 = input()

    # Fila 1 percibida por Vasya
    fila1_vasya = ""

    # Itera sobre las columnas de ambas filas
    for celda in range(0,columnas):

        if fila1[celda] == fila2[celda]:
            fila1_vasya += fila1[celda]
        
        # Si la columna en ambas filas no es igual, entonces se checan sus colores
        if fila1[celda] != fila2[celda]:

            # Si la columna en la fila 1 es verde (G) y en la fila 2 es azul (B), entonces se actualiza el de la fila 1 a azul (B)    
            if fila1[celda] == 'G' and fila2[celda] == 'B':
                fila1_vasya += 'B'

            # Si la columna en la fila 1 es azul (B) y en la fila 2 es verde (G), entonces se actualiza el de la fila 1 a verde (G)    
            if fila1[celda] == 'B' and fila2[celda] == 'G':
                fila1_vasya += 'G'

    # Si Vasya ve las dos filas iguales (tras el cambio de color en la fila 1), entonces imprime "YES", de lo contrario, imprime "NO"
    if fila1_vasya == fila2:
        print("YES")
    else:
        print("NO")



