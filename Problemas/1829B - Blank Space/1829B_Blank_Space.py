# 1829B - Blank Space
# https://codeforces.com/problemset/problem/1829/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = longitud del arreglo binario
    N = int(input())

    # Input:
    # 3) binario = Arreglo de 0s y 1s
    binario = list(map(int, input().split()))

    # Longitud del segmento de ceros más largo encontrado hasta ahora
    segmento_maximo = 0

    # Longitud del segmento de ceros encontrado actualmente
    segmento_actual = 0

    # Itera sobre los digitos del arreglo binario
    for digito in binario:

        # Si detectas un 0, entonces empieza a contar la longitud del nuevo segmento de 0s
        if digito == 0:
            segmento_actual += 1

        # Si detectas un 1, entonces compara la longitud del segemento de 0s actual vs. máximo encontrado hasta ahora
        # Reinicia el contador del longitud del segmento actual
        else:
            segmento_maximo = max(segmento_maximo, segmento_actual)
            segmento_actual = 0

    # Compara la longitud del último segemento de 0s del arreglo vs. el máximo encontrado hasta ahora
    segmento_maximo = max(segmento_maximo, segmento_actual)

    # Imprime la longitud del segmento de 0s más largo encontrado en el arreglo
    print(segmento_maximo)