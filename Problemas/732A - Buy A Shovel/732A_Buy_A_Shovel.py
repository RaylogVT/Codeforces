# 732A - Buy A Shovel
# https://codeforces.com/problemset/problem/732/A

# Input:
# 1) Precio de pala
# 2) Denominacion de moneda de R pesos
precio_pala, r_moneda = map(int, input().split())

# Itera sobre la cantidad de palas a comprar
for palas_compradas in range(1,10):

    # Multiplica el precio de una pala x cantidad actual de palas a comprar
    # Si la multiplicación módulo 10 da 0, entonces no se necesita la r_moneda para pagar
    # Si la multiplicación módulo 10 da la denominación de la r-moneda, entonces se necesita la r_moneda para pagar
    if (precio_pala * palas_compradas) % 10 == r_moneda or (precio_pala * palas_compradas) % 10 == 0:

        # Imprime el número de palas compradas
        print(palas_compradas)
        break