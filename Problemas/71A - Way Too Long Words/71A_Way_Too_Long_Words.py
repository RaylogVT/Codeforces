# 71A - Way Too Long Words
# https://codeforces.com/problemset/problem/71/A

# Input:
# 1) palabras = Numero de palabras a abreviar
palabras = int(input())

# Itera cada palabra
for palabra in range(0,palabras):

    # Input:
    # 2) palabra_abreviar = Palabra a abreviar
    palabra_abreviar = input()

    # Si la palabra tiene más de 10 letras, entonces se abrevia
    if len(palabra_abreviar) > 10:

        # Abreviacion = Primera letra + (Longitud de palabra - 2) + Última palabra
        abreviacion = palabra_abreviar[0] + str(len(palabra_abreviar) - 2) + palabra_abreviar[-1]
        
    else:

        # Si la palabra tiene menos de 10 letras, entonces no se abrevia
        abreviacion = palabra_abreviar

    # Imprime la palabra abreviada
    print(abreviacion)
