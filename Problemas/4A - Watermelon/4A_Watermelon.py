# 4A - Watermelon
# https://codeforces.com/problemset/problem/4/A

# Peso de sandía (w)
w = int(input())

# Si el peso de la sandia es par y mayor a 2, entonces se puede partir en dos trozos pares
if w % 2 == 0 and w > 2:
    print("YES")
else:
    print("NO")

