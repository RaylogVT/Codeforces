# 443A - Anton And Letters
# https://codeforces.com/problemset/problem/443/A

# Inputs:
# 1) String de letras escritas
set_letras = input()

# Elimina las comas (,), llaves ({}) y espacios en blanco del string
set_letras_limpio = set_letras.replace('{', '').replace('}', '').replace(' ', '').split(',')

# Elimina letras duplicadas en el string
letras = list(dict.fromkeys(set_letras_limpio))

# Imprime el número de letras insertadas en el set de letras
print(len(letras)) 
