# 1760A - Medium Number
# https://codeforces.com/problemset/problem/1760/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) arreglo = Arreglo de 3 números (a,b,c)
    arreglo = list(map(int, input().split()))
    
    # Ordena a,b,c de menor a mayor
    arreglo_ordenado = sorted(arreglo)
    
    # Extrae la mediana del arreglo
    mediana = arreglo_ordenado[1]

    # Imprime la mediana
    print(mediana)
