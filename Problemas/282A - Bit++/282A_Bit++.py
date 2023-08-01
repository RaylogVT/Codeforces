# 282A - Bit++
# https://codeforces.com/problemset/problem/282/A

# Número de statements
statements = int(input())
x = 0

for i in range(0, statements):
    line = input() # X++, X--, ++X, --X
    if('++' in line):
        x += 1
    if('--' in line):
        x -= 1

print(x)