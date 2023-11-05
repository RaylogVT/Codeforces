# 141A - Amusing Joke 
# https://codeforces.com/problemset/problem/141/A

# Inputs:
# 1) Nombre del invitado
# 2) Nombre del huesped
# 3) Pila de letras
letras_invitado = input()
letras_huesped = input()
pila_letras = input()

# Suma las letras del invitado y huésped
suma_letras = letras_invitado + letras_huesped

# Ordena la suma y pila de letras alfabéticamente
suma_letras_ordenado = ''.join(sorted(suma_letras))
print(suma_letras_ordenado)
pila_letras_ordenado = ''.join(sorted(pila_letras))
print(pila_letras_ordenado)

# Si ambos strings tienen las mismas letras, entonces imprime 'YES', de lo contrario, imprime 'NO'
if suma_letras_ordenado == pila_letras_ordenado:
    print('YES')
else:
    print('NO')