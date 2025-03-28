# 1791B - Following Directions
# https://codeforces.com/problemset/problem/1791/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Número de indicaciones
    N = int(input())

    # Input:
    # 3) indicaciones = String de movimientos
    indicaciones = input()

    # Coordenadas
    x = 0
    y = 0

    # ¿Alperen llegó a estar sobre el dulce?
    sobre_dulce = False

    # Itera sobre las indicaciones
    for letra in indicaciones:

        # Actualiza las coordenadas del Alperen
        if letra == 'L':
            x -= 1
        if letra == 'R':
            x += 1
        if letra == 'U':
            y += 1
        if letra == 'D':
            y -= 1
        
        # ¿Alperen está sobre el dulce?
        if x == 1 and y == 1:
            sobre_dulce = True

    # Si Alperen estuvo sobre el dulce, entonces imprime "YES", de lo contrario, imprime "NO"
    if sobre_dulce == True:
        print("YES")
    else:
        print("NO")


