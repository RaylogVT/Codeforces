# 1399A - Remove Smallest
# https://codeforces.com/problemset/problem/1399/A

# Input:
# 1) Número de pruebas
pruebas = int(input())

# Itera sobre cada prueba
for prueba in range(0, pruebas):

    # Input:
    # 2) Número de elementos en el arreglo
    elementos = int(input())

    # Input:
    # 3) Elementos del arreglo
    numeros = list(map(int, input().split()))

    # Ordena los números de menor a mayor
    numeros = sorted(numeros)
    
    # Asume inicialmente que la respuesta a la prueba es "YES"
    respuesta = 'YES'

    # Itera sobre los pares de numeros
    for indice in range(1,len(numeros)):

        # Si una resta es mayor a 1, entonces NO se puede reducir el arreglo a 1 elementos
        # Settea la respuesta como "NO"
        if numeros[indice] - numeros[indice-1] > 1:
            respuesta = 'NO'
            break
        
    # Imprime el resultado de la prueba
    print(respuesta)
    