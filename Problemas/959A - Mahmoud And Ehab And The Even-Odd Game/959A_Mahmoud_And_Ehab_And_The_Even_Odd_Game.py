# 959A - Mahmoud And Ehab And The Even-Odd Game
# https://codeforces.com/problemset/problem/959/A

# Input:
# 1) N = Número inicial del juego
N = int(input())

# Si N es par, entonces gana Mahmoud, de lo contrario, gana Ehab
if N % 2 == 0:
    print("Mahmoud")
else:
    print("Ehab")
