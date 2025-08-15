# 1881A - Don't Try to Count 
# https://codeforces.com/problemset/problem/1881/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) n, m = Longitud de strings x y s
    n, m = map(int, input().split())

    # Input:
    # 3) x = String inicial
    # 4) s = Substring a encontrar
    x = input()
    s = input()

    # Contador de auto-appends
    autoAppends = 0

    # Detector de substring
    substringFound = False

    # Realiza auto-appends sobre x
    while(len(x) < 50):

        # Detecta si x tiene el substring s
        if s in x:
            substringFound = True
            break

        # Realiza el auto-append
        x += x
        autoAppends += 1

    # Si el substring se encontró, imprime la cantidad de auto-appenda realizados, de los contrario, imprime -1
    if substringFound:
        print(autoAppends)
    else:
        print(-1)