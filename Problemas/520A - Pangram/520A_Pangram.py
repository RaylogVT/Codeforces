# 520A - Pangram
# https://codeforces.com/problemset/problem/520/A

# Inputs:
# 1) Longitud del string
# 2) String a revisar
longitud = int(input())
frase = input()

# String en minúsculas
pangram = frase.lower()

# Diccionario de letras del alfabeto
# {Letra: Contador de apariciones}
alfabeto = {}

# Itera sobre las letras del string
for letra in pangram:

    # Si la letra no está en el diccionario, añádelo con un contador de veces que ha aparecido igual a 1
    if letra not in alfabeto:
        alfabeto[letra] = 1

    # Si la letra ya está en el diccionario, entonces suma 1 al contador de veces que ha aparecido
    else:
        alfabeto[letra] += 1

# Si el diccionario del alfabeto tiene 26 letras, entonces el string es un pangrama
if len(alfabeto) == 26:
    print('YES')

# Si el diccionario del alfabeto tiene menos de 26 letras, entonces el string no es un pangrama
else:
    print('NO')