# 1560A - Dislike of Threes
# https://codeforces.com/problemset/problem/1560/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Número natural a revisar
    numero_actual = 0

    # Input:
    # 2) kesimo_numero = K-ésimo número que no es multiplo de 3 ni termina en 3
    kesimo_numero = int(input())

    # Itera sobre los números natural
    while kesimo_numero > 0:

        # Avanza al siguiente número
        numero_actual += 1

        # Determina si el número actual no es múltiplo de 3 ni termina en 3
        if numero_actual % 3 != 0 and numero_actual % 10 != 3:

            # Si lo es, entonces avanza al siguiente i-ésimo número
            kesimo_numero -= 1

    # Imprime el k-ésimo número que no es múltiplo de 3 ni termina en 3
    print(numero_actual)