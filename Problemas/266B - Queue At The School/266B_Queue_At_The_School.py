# 266B - Queue At The School
# https://codeforces.com/problemset/problem/266/A

# Inputs
# 1) Número de chicos en la fila
# 2) Segundos a transcurrir
# 3) Alineación de la fila (B = Boy, G = Girl)
chicos, segundos = map(int, input().split())
fila = input()

# Tamaño de la fila
tamano_fila = len(fila)

# Itera sobre la fila
for tiempo in range(0,segundos):

    # Cuando hay un chico enfrente de la chica (BG), se invierten los lugares (GB)
    # Reemplaza todas las instancias en las que sucede esta condición
    fila = fila.replace('BG', 'GB')

# Imprime el orden final de la fila
print(fila)
    

