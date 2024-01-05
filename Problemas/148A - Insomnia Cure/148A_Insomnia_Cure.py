# 148A - Insomnia Cure
# https://codeforces.com/problemset/problem/148/A

# Inputs:
# 1) k = k-ésimo dragón atacado con sartén 
# 2) l = l-ésimo dragón arrojado al balcón 
# 3) m = m-ésimo dragón aplastado con tacón 
# 4) n = n-ésimo dragón que huyó
# 5) dragones = Número de dragones
k = int(input())
l = int(input())
m = int(input())
n = int(input())
dragones = int(input())

# Lista de dragones atacados con sartén (k)
dragones_k = []

# Saca los dragones atacados con sartén (k)
for d in range(k,dragones+1,k):
    dragones_k.append(d)

# Lista de dragones arrojados al balcón (l)
dragones_l = []

# Saca los dragones arrojados al balcón (l)
for d in range(l,dragones+1,l):
    dragones_l.append(d)

# Lista de dragones aplastados con tacón (m)
dragones_m = []

# Saca los dragones aplastados con tacón (m)
for d in range(m,dragones+1,m):
    dragones_m.append(d)

# Lista de dragones que huyeron (n)
dragones_n = []

# Saca los dragones que huyeron (n)
for d in range(n,dragones+1,n):
    dragones_n.append(d)

# Saca la unión de las 4 listas 
# La unión (U) eliminará los duplicados
# Cuenta cuántos dragones fueron atacados
dragones_atacados = len(list(set(dragones_k) | set(dragones_l) | set(dragones_m) | set(dragones_n)))

# Imprime el número de dragones atacados
print(dragones_atacados)

