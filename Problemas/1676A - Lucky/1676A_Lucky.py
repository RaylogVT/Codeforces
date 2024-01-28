# 1676A - Lucky?
# https://codeforces.com/problemset/problem/1676/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0, pruebas):

    # Input:
    # 2) ticket = String del número de ticket
    ticket = input()

    # Si la suma de los primeros 3 dígitos es igual a la de los últimos 3 dígitos, entonces imprime 'YES', de lo contrario, imprime 'NO'
    if int(ticket[0]) + int(ticket[1]) + int(ticket[2]) == int(ticket[3]) + int(ticket[4]) + int(ticket[5]):
        print('YES')
    else:
        print('NO')