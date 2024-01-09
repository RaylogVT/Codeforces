# 281A - Word Capitalization
# https://codeforces.com/problemset/problem/281/A

# Input:
# 1) palabra - Palabra a capitalizar
palabra = input()

# Convierte la primera letra a mayúsculas
primera_letra = palabra[0].upper()

# Imprime la palabra capitalizada
# palabra[1:] = Resto que letras que no fueron capitalizadas
print(primera_letra + palabra[1:])
