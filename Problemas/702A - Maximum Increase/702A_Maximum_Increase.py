# 702A - Maximum Increase
# https://codeforces.com/problemset/problem/702/A

# Input:
# 1) N = Cantidad de números
N = int(input())

# Input:
# 2) arreglo = Arreglo de números
arreglo = list(map(int, input().split()))

# Longitud máxima actual
longitud_maxima = 1

# El subarreglo creciente empieza con una longitud igual a 1
longitud_subarreglo = 1

# Itera sobre los números del arreglo
for i in range(1,len(arreglo)):

    # ¿El número actual es más grande que el anterior?
    if arreglo[i] > arreglo[i-1]:

        # Si lo es, entonces suma +1 a la longitud del subarreglo creciente
        longitud_subarreglo += 1

        # Compara las longitudes del subarreglo actual y el máximo hasta el momento para actualizar la longitud máxima    
        longitud_maxima = max(longitud_maxima, longitud_subarreglo)

    else:

        # Si no lo es, entonces resetea la longitud del subarreglo creciente a 1
        longitud_subarreglo = 1

# Imprime la longitud del subarreglo creciente más largo identificado
print(longitud_maxima)

