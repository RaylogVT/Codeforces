# 1360A - Minimal Square
# https://codeforces.com/problemset/problem/1360/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) a,b = Dimensiones de los rectángulos
    a,b = map(int, input().split())

    # Calcula el área mínima del terreno cuadrado
    area = (min(max(2*a, b), max(a, 2*b))) ** 2

    # Imprime el área del terreno cuadrado
    print(area)