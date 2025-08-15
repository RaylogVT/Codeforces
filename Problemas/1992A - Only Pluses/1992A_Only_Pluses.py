# 1992A - Only Pluses 
# https://codeforces.com/problemset/problem/1992/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) a,b,c = Números a multiplicar
    a,b,c = map(int, input().split())

    # Realiza 5 sumas +1
    for i in range(0,5):
        
        # Suma +1 sobre el número más chico hasta el momento
        if a <= b and a <= c:
            a += 1
        elif b <= a and b <= c:
            b += 1
        elif c <= a and c <= b:
            c += 1

    # Multiplica a,b,c para calcular el número de plátanos  
    platanos = a * b * c

    # Imprime el número total de plátanos
    print(platanos)
