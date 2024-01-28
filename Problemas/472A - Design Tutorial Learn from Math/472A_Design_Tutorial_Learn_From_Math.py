# 472A - Design Tutorial: Learn from Math
# https://codeforces.com/problemset/problem/472/A

# Input:
# 1) N = Número a descomponer
n = int(input())

# Si N es par, entonces los dos números compuestos pueden ser 8 y N-8 
if n % 2 == 0:
    print('{} {}'.format(8,n-8))

# Si N es impar, entonces los dos números compuestos pueden ser 9 y N-9 
if n % 2 == 1:
    print('{} {}'.format(9,n-9))