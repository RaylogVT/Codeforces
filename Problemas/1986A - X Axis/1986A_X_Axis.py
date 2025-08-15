# 1986A - X Axis 
# https://codeforces.com/problemset/problem/1986/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) x1,x2,x3 = Coordenadas de los puntos
    x1,x2,x3 = map(int, input().split())

    # Lista de puntos
    coordenadas = [x1,x2,x3]

    # Ordena los puntos de menor a mayor
    coordenadas_ordenadas = sorted(coordenadas)

    # Distancia = Punto mayor - Punto menor
    distancia = coordenadas_ordenadas[2] - coordenadas_ordenadas[0]

    # Imprime la distancia mínima a recorrer
    print(distancia)