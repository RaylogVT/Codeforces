# 1827A - Love Story
# https://codeforces.com/problemset/problem/1827/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# String 'codeforces'
target = 'codeforces'

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) palabra = String a comparar
    palabra = input()

    # Número de letras distintas
    letras_distintas = 0

    # Itera sobre las letras del string y la palabra 'codeforces'
    for indice_letras in range(0,10):

        # Compara si la letra del string y la palabra 'codeforces' son distintas
        if target[indice_letras] != palabra[indice_letras]:
            
            # Si lo son, entonces suma +1 al contador de letras distintas
            letras_distintas += 1

    # Imprime la cantidad de letras distintas entre los dos strings
    print(letras_distintas)