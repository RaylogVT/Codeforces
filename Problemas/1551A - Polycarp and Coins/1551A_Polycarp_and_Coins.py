# 1551A - Polycarp and Coins 
# https://codeforces.com/problemset/problem/1551/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) rublos = Total de rublos a pagar
    rublos = int(input())

    # Si la cantidad de rublos es múltplo de 3, entonces se entregan N/3 monedas de 1 y 2 rublos
    if rublos % 3 == 0:
        monedas_1_rublos = rublos // 3
        monedas_2_rublos = rublos // 3

    # Si la cantidad de rublos al dividirla entre 3 deja 1 rublo como residuo, entonces se entregan N/3 + 1 monedas de 1 rublo y N/3 monedas de 2 rublos
    elif rublos % 3 == 1:
        monedas_1_rublos = rublos // 3 + 1
        monedas_2_rublos = rublos // 3

    # Si la cantidad de rublos al dividirla entre 3 deja 2 rublos como residuo, entonces se entregan N/3 monedas de 1 rublo y N/3 + 1 monedas de 2 rublos
    elif rublos % 3 == 2:
        monedas_1_rublos = rublos // 3
        monedas_2_rublos = rublos // 3 + 1

    # Imprime la cantidad de monedas de 1 y 2 rublos a entregar
    print("{} {}".format(monedas_1_rublos, monedas_2_rublos))