# 1472A - Cards for Friends
# https://codeforces.com/problemset/problem/1472/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) ancho = Ancho de la hoja
    # 3) alto = Alto de la hoja
    # 4) amigos = Número de amigos de Policarpio
    ancho, alto, amigos = map(int, input().split())
    
    # Cantidad de postales generadas
    postales = 1

    # Duplica la cantidad de postales por corte a lo ancho
    while ancho % 2 == 0 and ancho > 0:		
        postales *= 2
        ancho = ancho // 2

    # Duplica la cantidad de postales por corte a lo alto
    while alto % 2 == 0 and alto > 0:
        postales *= 2
        alto = alto // 2

    # ¿Policarpio tiene suficientes postales?
    if postales >= amigos:
        print("YES")
    else:
        print("NO")


