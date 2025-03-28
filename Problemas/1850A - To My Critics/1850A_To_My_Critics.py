# 1850A - To My Critics
# https://codeforces.com/problemset/problem/1850/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) a, b, c = Dígitos a sumar
    a, b, c = map(int, input().split())

    # Revisa si alguna combinación de pares ((a,b), (b,c), (a,c)) da una suma mayor o igual a 10
    # Si algún par da una suma mayor o igual a 10, entonces imprime "YES", de lo contrario, imprime "NO"
    if a + b >= 10 or b + c >= 10 or a + c >= 10:
        print("YES")
    else:
        print("NO")