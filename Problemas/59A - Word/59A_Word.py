# 59A - Word
# https://codeforces.com/problemset/problem/59/A

# Input:
# 1) palabra = Palabra a normalizar
palabra = input()

# Contadores de letras de mayúsculas y minúsculas
mayusculas = 0
minusculas = 0

# Itera sobre cada letra para saber si es mayúsucula o minúscula
# Añade la letra al contador correspondiente
for letra in palabra:
    if letra.isupper():
        mayusculas += 1
    if letra.islower():
        minusculas += 1

# Si hay más mayúsculas que minúsculas, convierte a mayúsculas e imprime
# Si hay menos o el mismo número de mayúsculas que minúsculas, convierte a minúsculas e imprime
if mayusculas > minusculas:
    print(palabra.upper())
elif mayusculas <= minusculas:
    print(palabra.lower())
