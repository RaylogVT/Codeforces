# 1676B - Equal Candies 
# https://codeforces.com/problemset/problem/1676/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) cajas = Número de cajas
    cajas = int(input())

    # Input:
    # 3) dulces_caja = Número de dulces por caja
    dulces_caja = list(map(int, input().split()))

    # Encuentra la cantidad mínima de dulces que deben las cajas
    minimo_dulces = min(dulces_caja)

    # Número mínimo de dulces a comer
    dulces_comer = 0

    # Itera sobre cada caso de prueba
    for caja in dulces_caja:
        dulces_comer += (caja - minimo_dulces)

    # Imprime la cantidad mínima de dulces a comer
    print(dulces_comer)
