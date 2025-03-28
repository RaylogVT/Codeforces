# 1807A - Plus or Minus
# https://codeforces.com/problemset/problem/1807/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) a,b,c = Variables de la ecuación
    a, b, c = map(int, input().split()) 

    # Imprime + o - dependiendo de si las 3 variables forman una suma o resta
    if a + b == c:
        print('+')
    if a - b == c:
        print('-')