# 41A - Translation
# https://codeforces.com/problemset/problem/41/A

# Inputs
# 1) Palabra en Berland
# 2) Palabra en Birland
berland_s = input()
birland_t = input()

# Palabra en Berland traducida a Birland (invertida)
traduccion = ""

# Tamaño de la palabra en Berland
tamano = len(berland_s)

# Lee la palabra en Berland de derecha a izquierda, añade letra por letra a la traducción
for letra in range(tamano-1, -1, -1):
    traduccion = traduccion + berland_s[letra]

# Si la traducción es igual a la palabra en Birland, entonces imprime YES, de lo contrario, imprime NO
if traduccion == birland_t:
    print('YES')
else:
    print('NO')