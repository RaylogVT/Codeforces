# 1837A - Grasshopper On A Line 
# https://codeforces.com/problemset/problem/1837/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) destino = Punto de destino 
    # 3) restriccion = Múltiplo por el cual los saltos no se pueden realizar
    destino, restriccion = map(int, input().split())

    # Si el punto de destino es múltiplo de la restricción, entonces se necesitan 2 saltos: (X-1, 1)
    if destino % restriccion == 0:
        print(2)
        print("{} {}".format(destino-1, 1))
    
    # Si el punto de destino no es múltiplo de la restricción, entonces se necesitan 1 salto: X
    else:
        print(1)
        print(destino)

