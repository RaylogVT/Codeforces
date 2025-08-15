# 233A - Perfect Permutation
# https://codeforces.com/problemset/problem/233/A

# Input:
# 1) N = Tamaño de la permutación
N = int(input())

# Si N es par, entonces no se puede generar una permutación perfecta
if N % 2 == 0:

    # Índice de la permutación
    indice = 0

    # Genera números hasta llegar a N
    while indice < N:

        # Si el índice es par, el número en la permutación es índice + 2
        if indice % 2 == 0:
            print(indice + 2, end="")
        
        # Si el índice es impar, el número en la permutación es igual al indice
        else:
            print(indice, end="")
            
        print(" ", end="")
        indice += 1

# Si N es impar, entonces no se puede generar una permutación perfecta
else:
    print(-1)