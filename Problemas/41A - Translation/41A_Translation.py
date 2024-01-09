# 41A - Translation
# https://codeforces.com/problemset/problem/41/A

# Inputs
# 1) berland = Palabra en Berland
# 2) birland = Palabra en Birland
berland = input()
birland = input()

# Palabra en Berland traducida a Birland (invertida)
traduccion_berland_birland = ""

# Tamaño de la palabra en Berland
tamano = len(berland)

# Lee la palabra en Berland de derecha a izquierda, añade letra por letra a la traducción 
for letra in range(tamano-1, -1, -1):
    traduccion_berland_birland = traduccion_berland_birland + berland[letra]

# Si la traducción es igual a la palabra en Birland, entonces imprime YES, de lo contrario, imprime NO
if traduccion_berland_birland == birland:
    print('YES')
else:
    print('NO')
