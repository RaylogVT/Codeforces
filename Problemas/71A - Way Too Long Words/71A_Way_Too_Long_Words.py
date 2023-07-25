# 71A - Way Too Long Words
# https://codeforces.com/problemset/problem/71/A

# Numero de palabras a abreviar
palabras = int(input())

# Procesa cada palabra
for i in range(0, palabras):

    # Palabra a abreviar
    palabra_abreviar = input()

    # Si la palabra tiene más de 10 letras, se abrevia
    if len(palabra_abreviar) > 10:

        # Abreviacion = Primera letra + (Longitud de palabra - 2) + Última palabra
        abreviacion = palabra_abreviar[0] + str(len(palabra_abreviar) - 2) + palabra_abreviar[-1]
    else:
        abreviacion = palabra_abreviar

    # Imprimir abreviacion
    print(abreviacion)