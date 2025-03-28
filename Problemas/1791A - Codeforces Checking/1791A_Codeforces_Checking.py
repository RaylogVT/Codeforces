# 1791A - Codeforces Checking
# https://codeforces.com/problemset/problem/1791/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre los casos de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) letra = Letra a buscar
    letra = input()

    # Lista de letras en la palabra 'codeforces'
    codeforces = list('codeforces')

    # ¿La letra está en la lista de letras de la palabra 'codeforces'?
    # Imprime YES si lo está, de lo contrario, imprime 'NO'
    if letra in codeforces:
        print('YES')
    else:
        print('NO')
