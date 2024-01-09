# 344A - Magnets
# https://codeforces.com/problemset/problem/344/A

# Input:
# 1) imanes = Número de imanes
imanes = int(input())

# Fila generada después de unir todos los imanes
fila_imanes = ''

# Itera sobre los imanes
for iman in range(0, imanes):
    
    # Input:
    # 2) iman_actual = Imán (10 = -+, 01 = +-)
    iman_actual = input()

    # Construye la fila de imanes
    fila_imanes = fila_imanes + iman_actual

# ¿Cuántas veces hay '00' o '11' en la fila de imanes?
# Esto nos indica cuándo los polos (negativos o positivos) se repelen y forman un nuevo grupo de imanes
repele00 = fila_imanes.count('00')
repele11 = fila_imanes.count('11')

# Grupos totales = Grupo inicial + Grupos nuevos por repele de ++ (00) + Grupos nuevos por repele de -- (11)
grupos = repele00 + repele11 + 1

# Imprime el número de grupos de imanes
print(grupos)
