# 1619A - Square String? 
# https://codeforces.com/problemset/problem/1619/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) square_string = String a evaluar
    square_string = input()

    # Si el string es de longitud impar, entonces NO es cuadrado
    if len(square_string) % 2 == 1:
        print('NO')
    
    # Si el string es de longitud par, entonces PUEDE ser cuadrado
    else:

        # Calcula el punto medio del string
        mitad = len(square_string) // 2

        # Revisa si la 1° mitad de string es igual a la 2° mitad
        # Imprime 'YES' si las dos mitades son iguales, de lo contrario, imprime 'NO'
        if square_string[:mitad] == square_string[mitad:]:
            print('YES')
        else:
            print('NO')
