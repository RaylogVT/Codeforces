# 731A - Night At The Museum
# https://codeforces.com/problemset/problem/731/A

# Input:
# 1) palabra = Palabra a generar
palabra = input()

# Número de movimientos entre letras
movimientos = 0

# Empieza la rueda desde 'a'
palabra = 'a' + palabra

# Itera sobre las letras de la palabra
for letra in range(0, len(palabra)-1):

    # Determina la distancia más corta entre letras: Izquierda o derecha 
    # Suma la cantidad de movimientos al contador final
    movimientos += min(abs(ord(palabra[letra]) - ord(palabra[letra+1])), 26 - abs(ord(palabra[letra]) - ord(palabra[letra+1])))

# Imprime la cantidad de movimientos
print(movimientos)
