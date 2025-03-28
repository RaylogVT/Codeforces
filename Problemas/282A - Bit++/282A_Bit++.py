# 282A - Bit++
# https://codeforces.com/problemset/problem/282/A

# Inputs:
# 1) Número de statements
statements = int(input())

# Variable X
x = 0

for indice_statement in range(0, statements):
    
    # Inputs:
    # 2) Statement (X++, X--, ++X, --X)
    line = input()

    # Si el statement tiene ++, suma 1 a x
    # Si el statement tiene --, resta 1 a x
    if('++' in line):
        x += 1
    if('--' in line):
        x -= 1

# Imprime el valor final de x
print(x)
