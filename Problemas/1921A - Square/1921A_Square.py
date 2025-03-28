# 1921A - Square 
# https://codeforces.com/problemset/problem/1921/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) esquina1234xy = Coordenadas (x,y) de las 4 esquinas del cuadrado
    esquina1x, esquina1y = map(int, input().split())
    esquina2x, esquina2y = map(int, input().split())
    esquina3x, esquina3y = map(int, input().split())
    esquina4x, esquina4y = map(int, input().split())

    # Compara las primeras dos esquinas del cuadrado
    # Si tienen la misma X, entonces se restan las Ys para encontrar la longitud
    # Si tienen la misma Y, entonces se restan las Xs para encontrar la longitud
    longitud = 0
    if esquina1x == esquina2x:
        longitud = abs(esquina1y - esquina2y)
    elif esquina1y == esquina2y:
        longitud = abs(esquina1x - esquina2x)
    else: 
        longitud = abs(esquina1y - esquina2y)

    # Calcula el área del cuadrado
    area = longitud ** 2

    # Imprime el área del cuadrado
    print(area)