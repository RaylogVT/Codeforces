# 50A - Domino Piling
# https://codeforces.com/problemset/problem/50/A

# m = Ancho, n = Alto
m, n = [int(x) for x in input().split()]

dominos = (m*n)//2
print(dominos)