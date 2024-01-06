# 228A - Is your horseshoe on the other hoof? 
# https://codeforces.com/problemset/problem/228/A

# Inputs:
# 1) colores = Índices de color de las herraduras 
colores = list(map(int, input().split()))

# ¿Cuántos colores poseo actualmente?
# Usa un set() para saber los índices de los colores sin repeticiones
# ¿Cuántos colores me faltan para tener de 4 tipos?
colores_faltantes = 4 - len(set(colores))

# Imprime el número de herraduras de distinto color que debo comprar
print(colores_faltantes)
