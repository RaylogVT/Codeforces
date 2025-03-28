# 1915B - Not Quite Latin Square
# https://codeforces.com/problemset/problem/1915/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Diccionario de conteo de letras
    conteo = {}

    # Itera sobre las 3 filas del cuadrado latino
    for fila in range(0,3):

        # Input:
        # 2) fila_actual = Fila actual del cuadrado latino
        fila_actual = input()

        # Itera sobre las letras de la fila
        for letra in fila_actual: 

            # Si la letra ya estaba registrada, entonces suma +1 al contador
            if letra in conteo: 
                conteo[letra] += 1

            # Si la letra no estaba registrada, entonces declara el contador igual a 1
            else: 
                conteo[letra] = 1
    
    # Itera sobre el diccionario de contador
    for letra, total in conteo.items():

        # Devuelve la letra que tenga un contador igual a 2
        if total == 2:
            print(letra)

    