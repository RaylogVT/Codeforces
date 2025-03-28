# 1343B - Balanced Array 
# https://codeforces.com/problemset/problem/1343/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for prueba in range(0,pruebas):

    # Input:
    # 2) N = Longitud del arreglo
    n = int(input())

    # Si N es divisible entre 4, entonces se puede generar el arreglo, de lo contrario, no se puede generar
    if n % 4 == 0:
        print("YES")

        # Itera de 1 a n/2
        for numero in range(1,(n//2)+1):

            # Genera la 1° mitad del arreglo
            print(numero * 2, end = " ")

        # Itera de 1 a n/2
        for numero in range(1,(n//2)+1):

            # Detecta si es el último número de la 2° mitad
            if numero == n//2:

                 # Genera el último número del arreglo
                print(numero * 3 - 1)

            else:
                # Genera la 2° mitad del arreglo
                print(numero * 2 - 1, end = " ")
    else:
        print("NO")