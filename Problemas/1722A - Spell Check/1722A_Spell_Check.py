# 1722A - Spell Check
# https://codeforces.com/problemset/problem/1722/A

# Input:
# 1) pruebas = Número de caso de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) longitud = Número de letras en el string
    # 3) palabra = String a deletrear
    longitud = int(input())
    palabra = input()

    # Si la palabra tiene 5 letras, procede a revisar las letras, de lo contrario imprime NO
    if longitud != 5:
        print('NO')
    else:  

        # Si las letras de la palabra 'Timur' están en la palabra, entonces imprime 'YES', de lo contrario, imprime 'NO'
        if 'T' in palabra and 'i' in palabra and 'm' in palabra and 'u' in palabra and 'r' in palabra:
            print('YES')
        else:
            print('NO')