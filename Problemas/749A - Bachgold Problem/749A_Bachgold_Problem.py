# 749A - Bachgold Problem
# https://codeforces.com/problemset/problem/749/A

# Input:
# 1) N = Número a descomponer
N = int(input())

# Calcula la cantidad de números primos a utilizar
numeros_primos = N // 2

# Imprime la cantidad de números primos a utilizar
print(numeros_primos)

# Números primos
string_primos = ""

# Itera mientras N sea mayor o igual a 0
while N > 0:

    # Si N es impar, entonces resta -3 para convertirlo a par
    if N % 2 == 1:
        string_primos += "3 "
        N -= 3

    # Si N es par, entonces resta -2 hasta llegar a 0
    else:
        string_primos += "2 "
        N -= 2

# Imprimer los números primos que suman N
print(string_primos)
