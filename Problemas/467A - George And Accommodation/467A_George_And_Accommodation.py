# 467A - George And Accommodation
# https://codeforces.com/problemset/problem/467/A

# Input:
# 1) Número de cuartos
num_cuartos = int(input())

# Contador de cuartos disponibles en los que George y Alex pueden mudarse
cuartos_disponibles = 0

# Revisa la capacidad de cada cuarto
for cuarto in range(0, num_cuartos):

    # Input:
    # 1) Número de personas viviendo en el cuarto
    # 2) Número de personas que puede albergar el cuarto
    personas_viviendo, capacidad_cuarto = map(int, input().split())

    # Si el número de personas viviendo en el cuarto + 2 (George y Alex) es menor o igual a la capacidad del cuarto,
    # entonces pueden mudarse ahí, suma +1 al contador de cuartos disponibles
    if personas_viviendo + 2 <= capacidad_cuarto:
        cuartos_disponibles += 1

print(cuartos_disponibles)