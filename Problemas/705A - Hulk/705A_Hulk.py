# 705A - Hulk
# https://codeforces.com/problemset/problem/705/A

# Input:
# 1) capas = Número de capas
capas = int(input())

# Frase de Hulk
frase = ''

# Itera sobre cada capa
for capa_actual in range(1, capas+1):

    # Si la capa es impar, entonces añade 'I hate' a la frase
    if capa_actual % 2 == 1:
        frase += 'I hate '
    
    # Si la capa es par, entonces añade 'I love' a la frase
    if capa_actual % 2 == 0:
        frase += 'I love '

    # Si es la última capa, entonces termina la frase con 'it'
    if capa_actual == n:
        frase += 'it'
        break

    # Entre capas, añade 'that' a la frase
    frase += 'that '

# Imprime la frase resultante
print(frase)
