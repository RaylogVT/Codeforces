# 1030A - In Search of an Easy Problem
# https://codeforces.com/problemset/problem/1030/A

# Input:
# 1) Número de respuestas
# 2) Respuestas ede cada persona
num_respuestas = int(input())
respuestas = list(map(int, input().split()))

# Si hay un 1 en las respuestas, entonces imprime HARD, de lo contrario, imprime EASY
if 1 in respuestas:
    print('HARD')
else:
    print('EASY')