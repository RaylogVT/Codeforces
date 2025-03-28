# 707A - Brain Photos 
# https://codeforces.com/problemset/problem/707/A

# Input:
# 1) N, M = Dimensiones de la foto
N, M = map(int, input().split())

# Itera sobre las filas de la foto
for fila in range(0,N):

    # Input:
    # 2) pixeles_fila = Color de cada pixel en la fila actual
    pixeles_fila = list(map(str, input().split()))

    # Variable bandera
    # Asume que la foto es Blanco y Negro
    photoIsBlackAndWhite = True

    # Si algún pixel es igual a C,Y,M (Cyan, Magenta, Yellow), entonces la foto es Color
    # Si ninguún pixel es igual a C,Y,M (Cyan, Magenta, Yellow), entonces la foto es Blanco y Negro
    if 'C' in pixeles_fila or 'Y' in pixeles_fila or 'M' in pixeles_fila:
        photoIsBlackAndWhite = False
    
# Revisa la variable bandera para determinar si la foto es Blanco y negro o Color
if photoIsBlackAndWhite == True:
    print('#Black&White')
else:
    print('#Color')