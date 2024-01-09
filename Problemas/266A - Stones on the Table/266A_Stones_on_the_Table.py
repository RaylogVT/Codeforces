# 266A - Stones on the Table
# https://codeforces.com/problemset/problem/266/A

# Input:
# 1) num_piedras = Número de piedras
# 2) RGB = Colores de piedras
num_piedras = int(input())
RGB = input()

# Número de piedras nuevas a añadir
piedras_nuevas = 0

# Itera sobre las piedras
for piedra in range(1,num_piedras):
    
    # Compara dos piedras vecinas
    # Si son iguales, añade una nueva piedra, suma +1 al contador de piedras nuevas
    if RGB[piedra] == RGB[piedra-1]:
        piedras_nuevas += 1

# Imprime el número de piedras nuevas a añadir
print(piedras_nuevas)
