# 677A - Vanya And Fence
# https://codeforces.com/problemset/problem/677/A

# Inputs:
# 1) Número de amigos
# 2) Altura de la valla
amigos, altura_valla = map(int, input().split())

# Largo de la fila a crear para recorrer la valla sin ser visto
largo_fila = 0

# Altura de cada uno de los amigos
altura_amigo = list(map(int, input().split()))

# Si el amigo mide más que la valla, entonces suma +2 al ancho de la fila, de lo contrario, suma +1
for altura_amigo_actual in altura_amigo:
    if altura_amigo_actual / altura_valla > 1.0:
        largo_fila += 2
    else:
        largo_fila += 1

# Imprime el largo final de la fila
print(largo_fila)