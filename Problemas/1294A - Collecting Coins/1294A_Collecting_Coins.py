# 1294A - Collecting Coins 
# https://codeforces.com/problemset/problem/1294/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) Alice, Barbara, Cerene, Polycarp = Monedas iniciales de cada persona
    alice, barbara, cerene, polycarp = map(int, input().split())

    # Si la suma de las monedas, no es divisible entre 3, entonces se imprime "NO"
    if (alice + barbara + cerene + polycarp) % 3 == 0:

        # Si el promedio de las monedas es menor al máximo de monedas que tiene Alice, Barbara o Cerene, entonces se imprime "NO", de lo contrario, imprime "YES"
        if (alice + barbara + cerene + polycarp) // 3 < max(alice, barbara, cerene):
            print("NO")
        else:
            print("YES")
    else:
        print("NO")