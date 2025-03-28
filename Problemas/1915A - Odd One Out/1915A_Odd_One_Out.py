# 1915A - Odd One Out 
# https://codeforces.com/problemset/problem/1915/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) a,b,c = Dígitos
    a, b, c = map(int, input().split())

    # Meter los dígitos en una lista
    lista_digitos = [a,b,c]
    
    # Diccionario de frecuencias de dígitos
    instancias_digitos = {}

    # Cuenta cuántas veces aparece cada dígito
    for digito in lista_digitos:
        if digito in instancias_digitos:
            instancias_digitos[digito] += 1
        else:
            instancias_digitos[digito] = 1

    # Extrae las llaves y valores del diccionario de frecuencias
    instancias_digitos_llaves = list(instancias_digitos.keys())
    instancias_digitos_frecuencia = list(instancias_digitos.values())

    # Extrae el número distinto (cuya frecuencia es igual a 1)
    numero_distinto = instancias_digitos_frecuencia.index(1)

    # Imprime el número distinto
    print(instancias_digitos_llaves[numero_distinto])
