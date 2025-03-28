# 1624A - Plus One on the Subset
# https://codeforces.com/problemset/problem/1624/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre los casos de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) tamano = Número de elementos en el arreglo
    # 3) arreglo = Arreglo de números a igualar
    tamano = int(input())
    arreglo = list(map(int, input().split()))

    # Calcula el número de iteraciones +1 que debemos hacer
    # Se resume en restar el número más grande del arreglo menos el número más pequeño
    iteraciones = max(arreglo) - min(arreglo)

    # Imprime el número de iteraciones
    print(iteraciones)