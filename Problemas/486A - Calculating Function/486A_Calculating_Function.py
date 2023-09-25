# 486A - Calculating Function
# https://codeforces.com/problemset/problem/486/A

# Inputs:
# 1) Número (N)
n = int(input())

# Si N es par, entonces la respuesta es N/2
if(n % 2 == 0):
    print(n // 2)

# Si N es impar, entonces la respuesta es -((N+1)/2)
else:
    print(-((n+1)//2))