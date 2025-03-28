# 1807B - Grab The Candies
# https://codeforces.com/problemset/problem/1807/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) bolsas = Cantidad de bolsas de dulces
    bolsas = int(input())

    # Input:
    # 3) dulces = Cantidad de dulces por bolsa
    dulces = list(map(int, input().split()))

    # Suma de dulces en bolsas de cantidad par e impar
    suma_pares = 0
    suma_impares = 0

    # Itera sobre la lista de dulces por bolsa
    for dulce in dulces:

        # Suma los dulces a los contadores dependiendo de si su cantidad es par o impar
        if dulce % 2 == 0:
            suma_pares += dulce
        else:
            suma_impares += dulce
    
    # Si la suma de bolsas con dulces es pares es mayor a la de los impares, entonces Mihai siempre tendrá más dulces que Bianca
    # Si la suma de bolsas con dulces es pares menor o igual a la de los impares, entonces Bianca tendrá más dulces que Mihai en algún turno
    if suma_pares > suma_impares:
        print('YES')
    else: 
        print('NO')
