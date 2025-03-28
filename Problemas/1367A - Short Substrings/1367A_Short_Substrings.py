# 1367A - Short Substrings
# https://codeforces.com/problemset/problem/1367/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0, pruebas):

    # Input:
    # 2) string_construido = String generado por Bob a partir del original
    string_construido = input()

    # Separa las letras del string construido en una lista
    letras_string = list(string_construido)

    # Construye el string original
    # El string original tiene las primeras 2 letras del string construido
    string_original = letras_string[0] + letras_string[1]

    # Itera sobre las letras del string construido en localidades impares a partir de la 3° letra
    for letra_subsecuente in range(3,len(letras_string),2):

        # Suma cada letra en localidad impar en el string original
        string_original += letras_string[letra_subsecuente]

    # Imprime el string original ideado por Bob
    print(string_original)

