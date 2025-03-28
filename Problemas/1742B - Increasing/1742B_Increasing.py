# 1742B - Increasing
# https://codeforces.com/problemset/problem/1742/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Número de elementos en el arreglo
    N = int(input())

    # Input:
    # 3) arreglo = Números del arreglo
    arreglo = list(map(int, input().split()))

    # Recupera los números del arreglo
    numeros_unicos = set(arreglo)
    
    # Si el número de elementos en el arreglo es igual a la cantidad de números únicos en el mismo, entonces el arreglo se puede ordenar de manera ascendente estrictamente.
    # Imprime "YES" si las cantidades son iguales, de lo contrario, imprime "NO"
    if len(numeros_unicos) == len(arreglo):
        print("YES")
    else:
        print("NO")