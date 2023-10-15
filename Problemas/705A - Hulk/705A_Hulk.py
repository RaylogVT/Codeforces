# 705A - Hulk
# https://codeforces.com/problemset/problem/705/A

# Inputs:
# 1) N - Número de capas
n = int(input())

# Frase de Hulk
frase = ''

# Construye la frase
for capa in range(1,n+1):

    # Si la capa es impar, entonces añade 'I hate'
    if capa % 2 == 1:
        frase += 'I hate '
    
    # Si la capa es par, entonces añade 'I love'
    if capa % 2 == 0:
        frase += 'I love '

    # Si es la última capa, entonces termina la frase con 'it'
    if capa == n:
        frase += 'it'
        break

    # Entre capas, escribe 'that'
    frase += 'that '

# Imprime la frase resultante
print(frase)