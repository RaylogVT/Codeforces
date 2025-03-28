# 1996A - Legs 
# https://codeforces.com/problemset/problem/1996/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) piernas = Número de piernas contadas
    piernas = int(input())

    # Si el número de piernas es múltiplo de 4, entonces todos los animales son vacas
    # Si el número de piernas no es múltiplo de 4, entonces hay puras vacas y 1 gallina
    if piernas % 4 == 0:
        animales = piernas // 4
    else:
        animales = (piernas // 4) + 1

    # Imprime el número mínimo de animales
    print(animales)