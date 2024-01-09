# 785A - Anton and Polyhedrons
# https://codeforces.com/problemset/problem/785/A

# Input:
# 1) poliedros = Número de poliedros a revisar
poliedros = int(input())

# Número de caras entre todos los poliedros
caras = 0

for poliedro in range(0,poliedros):

    # Inputs:
    # 2) poliedro_actual = Poliedro actual a revisar
    poliedro_actual = input()

    # Detecta el tipo de poliedro
    # Suma las caras del poliedro al contador
    if poliedro_actual == "Tetrahedron":
        caras += 4
    elif poliedro_actual == "Cube":
        caras += 6 
    elif poliedro_actual == "Octahedron":
        caras += 8 
    elif poliedro_actual == "Dodecahedron":
        caras += 12 
    elif poliedro_actual == "Icosahedron":
        caras += 20 

# Imprime el número de caras totales contadas
print(caras)
