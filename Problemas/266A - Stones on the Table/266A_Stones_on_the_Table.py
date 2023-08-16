# 266A - Stones on the Table
# https://codeforces.com/problemset/problem/266/A

# Input - Número de piedras
piedras = int(input())

# Input - Colores de las piedras
RGB = input()

# Output - Número de piedras nuevas a añadir
piedras_nuevas = 0

# Compara dos piedras vecinas
for i in range(1,piedras):

    # Si son iguales, añadirás una nueva piedra
    if RGB[i] == RGB[i-1]:
        piedras_nuevas += 1

# Imprime el número de piedras nuevas a añadir
print(piedras_nuevas)