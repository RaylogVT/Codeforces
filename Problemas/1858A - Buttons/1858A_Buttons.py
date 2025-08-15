# 1858A - Buttons
# https://codeforces.com/problemset/problem/1858/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) anna = Número de botones exclusivos de Anna
    # 3) katie = Número de botones exclusivos de Katie
    # 4) ambas = Número de botones compartidos
    anna, katie, ambas = map(int, input().split())

    # Si la cantidad de botones compartidos es par, entonces Anna empieza presionando los suyos primero
    if ambas % 2 == 0:

        # Si Anna tiene más botones que Katie, entonces Anna gana, de lo contrario, gana Katie
        if anna > katie:
            print("First")
        else:
            print("Second")

    # Si la cantidad de botones compartidos es impar, entonces Katie empieza presionando los suyos primero
    if ambas % 2 == 1:

        # Si Anna tiene más o la misma cantidad de botones que Katie, entonces Anna gana, de lo contrario, gana Katie
        if anna >= katie:
            print("First")
        else:
            print("Second")