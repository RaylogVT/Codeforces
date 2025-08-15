# 1729A - Two Elevators
# https://codeforces.com/problemset/problem/1729/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 1) a = Piso del Elevador #1
    # 2) b = Piso del Elevador #2
    # 3) c = Piso intermedio hacia el cual se dirige primero el Elevador #2
    a,b,c = map(int, input().split())

    # Calcula los segundos que toma cada elevador en llegar al Piso #1
    segundosElevador1 = a - 1
    segundosElevador2 = abs(b - c) + abs(c - 1)

    # Compara la duración de ambos elevadores
    if segundosElevador1 < segundosElevador2:
        print(1)
    elif segundosElevador1 > segundosElevador2:
        print(2)
    elif segundosElevador1 == segundosElevador2:
        print(3)