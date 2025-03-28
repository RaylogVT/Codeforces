# 1985A - Creating Words
# https://codeforces.com/problemset/problem/1985/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) a, b = Strings cuyas letras se intercambiarán
    a, b = map(str, input().split())

    # Intercambia la primera letra de los dos strings entre sí
    new_a = b[0] + a[1:]
    new_b = a[0] + b[1:]

    # Imprime los nuewvos dos strings
    print("{} {}".format(new_a, new_b))