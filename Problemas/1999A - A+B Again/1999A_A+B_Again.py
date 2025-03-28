# 1999A - A + B Again 
# https://codeforces.com/problemset/problem/1999/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Número a sumar
    N = int(input())

    # Extrae el 1° dígito con división entera
    # Extrae el 2° dígito con módulo
    # Suma los dígitos
    suma_digitos = (N // 10) + (N % 10) 

    # Imprime la suma de los digitos
    print(suma_digitos)