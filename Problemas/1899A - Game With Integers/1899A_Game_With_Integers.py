# 1899A - Game With Integers 
# https://codeforces.com/problemset/problem/1899/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Número
    N = int(input())

    # Si N no es inicialmente divisible entre 3, entonces gana Vanya, imprime "First"
    # Si N es inicialmente divisible entre 3, entonces gana Vova, imprime "Second"
    if N % 3 == 0:
        print("Second")
    else:
        print("First")