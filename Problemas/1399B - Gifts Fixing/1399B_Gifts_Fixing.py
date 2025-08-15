# 1399B - Gifts Fixing 
# https://codeforces.com/problemset/problem/1399/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) regalos = Cantidad de regalos
    regalos = int(input())

    # Input:
    # 3) dulces = Cantidad de dulces por regalo
    dulces = list(map(int, input().split()))

    # Input:
    # 4) naranjas = Cantidad de naranjas por regalo
    naranjas = list(map(int, input().split()))

    # Calcula la cantidad mínima de dulces y naranjas a dejar en cada regalo
    minimo_dulces = min(dulces)
    minimo_naranjas = min(naranjas)

    # Contador de movimimentos
    movimientos = 0

    # Itera sobre cada regalo
    for indice_regalo in range(0,regalos):

        # Calcula la cantidad mínima de movimientos a realizar por cada regalo
        movimientos += max(dulces[indice_regalo] - minimo_dulces, naranjas[indice_regalo] - minimo_naranjas)

    # Imprime la cantidad de movimientos realizados
    print(movimientos)


