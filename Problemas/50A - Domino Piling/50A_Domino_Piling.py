# 50A - Domino Piling
# https://codeforces.com/problemset/problem/50/A

# Input:
# 1) m = Ancho
# 2) n = Alto
m, n = [int(x) for x in input().split()]

# Calcula el número de dominós 
dominos = (m*n)//2

# Imprime el número de dominós
print(dominos)
