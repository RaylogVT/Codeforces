# 263A - Beautiful Matrix
# https://codeforces.com/problemset/problem/263/A

# Itera sobre las 5 filas de la matriz
for fila in range(0,5): 

    # Input:
    # 1) columna = Columna de matriz
    columna = input().split() 

    # Si la fila tiene el 1, extrae su índice
    if '1' in columna:
        x = fila

        # Extrae el índice de la columna donde está el 1
        y = columna.index('1')

# Calcula el número de movimientos
movimientos = abs(x-2) + abs(y-2)

# Imprime el número de movimientos
print(movimientos)




