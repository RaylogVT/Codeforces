# 266A - Stones on the Table
# https://codeforces.com/problemset/problem/266/A

# Inputs:
# 1) Número de piedras
# 2) Colores de piedras
num_piedras = int(input())
RGB = input()

# Número de piedras nuevas a añadir
piedras_nuevas = 0

# Compara dos piedras vecinas
for piedra in range(1,num_piedras):

    # Si son iguales, añade una nueva piedra
    if RGB[piedra] == RGB[piedra-1]:
        piedras_nuevas += 1

# Imprime el número de piedras nuevas a añadir
print(piedras_nuevas)