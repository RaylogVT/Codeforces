# 1154A - Restoring Three Numbers
# https://codeforces.com/problemset/problem/1154/A

# Input:
# 1) x1, x2, x3, x4 = Resultados de sumas
x1, x2, x3, x4 = map(int, input().split())

# Pon las sumas en una lista
x = [x1, x2, x3, x4]

# Ordena la lista de menor a mayor
x = sorted(x)

# Calcula a,b,c
a = x[3] - x[0]   # a = x4 - x1
b = x[3] - x[1]   # b = x4 - x2
c = x[3] - x[2]   # c = x4 - x3

# Imprime a,b,c
print('{} {} {}'.format(a,b,c))
