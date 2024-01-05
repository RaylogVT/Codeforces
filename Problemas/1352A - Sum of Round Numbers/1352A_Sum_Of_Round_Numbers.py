# 1352A - Sum of Round Numbers
# https://codeforces.com/problemset/problem/1352/A

# Input:
# 1) pruebas = Número de pruebas
pruebas = int(input())

# Realiza cada prueba
for prueba_actual in range(0,pruebas):

    # Input:
    # 2) numero = Número a descomponer
    numero = int(input())

    # Dígito actual (derecha a izquierda)
    digitos = 1

    # Lista de números redondos
    numeros_redondos_lista = []

    # Revisa que el número sea distinto a 0
    while numero != 0:

        # Saca el número módulo 10 ^ dígitos para extraer el número redondo (menor a mayor)
        numero_redondo_actual = numero % (10 ** digitos)

        # Si el número redondo actual es distinto de 0, entonces se tiene que incluir en la lista y restar del número 
        if numero_redondo_actual != 0:

            # Añade el número redondo a la lista de números redondos
            numeros_redondos_lista.append(numero_redondo_actual)

            # Resta el número redondo del número original
            numero = numero - numero_redondo_actual

        # Avanza al siguiente dígito
        digitos += 1

    # Imprime el número de números redondos encontrados
    print(len(numeros_redondos_lista))

    # Imprime los números redondos
    for numero_redondo in numeros_redondos_lista:
        print(numero_redondo, end=" ")
    
    # Imprime un espacio de línea para la siguiente prueba
    print()
