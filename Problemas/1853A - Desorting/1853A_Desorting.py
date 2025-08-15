# 1853A - Desorting 
# https://codeforces.com/problemset/problem/1853/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Cantidad de números
    N = int(input())

    # Input:
    # 3) arreglo = Arreglo de números
    arreglo = list(map(int, input().split()))

    # Ordena el arreglo
    arreglo_ordenado = sorted(arreglo)

    # Si el arreglo está de-sorteado, entonces imprime 0
    if arreglo != arreglo_ordenado:
        print(0)

    else:

        # Arreglo con restas entre números contiguos
        restas = []
        for numero in range(1,N):
            restas.append(arreglo[numero] - arreglo[numero-1])
        
        # Extrae la resta más chica del arreglo de restas
        resta_minima = min(restas)

        # Calcula la cantidad de operaciones para de-sorteear el arreglo
        operaciones = (resta_minima // 2) + 1

        # Imprime la cantidad de operaciones para de-sorteear el arreglo
        print(operaciones)