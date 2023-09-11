# 263A - Beautiful Matrix
# https://codeforces.com/problemset/problem/263/A

for i in range(0,5): 

    # Inputs:
    # 1) Matriz de 0s y 1
    # Rellena cada fila
    fila = input().split() 

    # Si la fila tiene el 1, extrae su índice
    if '1' in fila:
        x = i

        # Extrae el índice de la columna donde está el 1
        y = fila.index('1')

# Calcula el número de movimientos
movimientos = abs(x-2) + abs(y-2)

# Imprime el número de movimientos
print(movimientos)




