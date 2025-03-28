# 431A - Black Square
# https://codeforces.com/problemset/problem/431/A

# Input:
# 1) calorias_tira1 = Número de calorías a usar para presionar un cuadrado negro en la 1° tira
# 2) calorias_tira2 = Número de calorías a usar para presionar un cuadrado negro en la 2° tira
# 3) calorias_tira3 = Número de calorías a usar para presionar un cuadrado negro en la 3° tira
# 4) calorias_tira4 = Número de calorías a usar para presionar un cuadrado negro en la 4° tira
calorias_tira1, calorias_tira2, calorias_tira3, calorias_tira4 = map(int, input().split())

# Input:
# 1) tiras = Orden en el que se presionaron cuadrados negros sobre las tiras
tiras = input()

# Cantidad de calorías utilizadas
calorias = 0

# Itera sobre cada cuadrado presionado en el juego
for indice_tira in tiras:

    # Si se presionó un cuadrado negro en una tira determinada, suma la cantidad de calorías respectivas a utilizar sobre el total
    if indice_tira == '1':
        calorias += calorias_tira1
    elif indice_tira == '2':
        calorias += calorias_tira2
    elif indice_tira == '3':
        calorias += calorias_tira3
    elif indice_tira == '4':
        calorias += calorias_tira4

# Imprime la cantidad de calorías utilizadas
print(calorias)
