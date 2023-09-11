# 4A - Watermelon
# https://codeforces.com/problemset/problem/4/A

# Inputs
# 1) Peso de sandía (w)
peso_sandia = int(input())

# Revisa si la sandía se puede partir en partes pares
# Si el peso de la sandia es par y mayor a 2, entonces imprime 'YES', de lo contrario, imprime 'NO'
if peso_sandia % 2 == 0 and peso_sandia > 2:
    print("YES")
else:
    print("NO")

