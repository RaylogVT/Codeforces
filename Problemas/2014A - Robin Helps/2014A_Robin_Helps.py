# 2014A - Robin Helps
# https://codeforces.com/problemset/problem/2014/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) personas = Número de personas
    # 3) threshold = Oro mínimo que debe tener una persona para que Robin Hood se lo robe
    personas, threshold = map(int, input().split())

    # Input:
    # 4) oroPersonas = Cantidad de oro que tiene cada persona
    oroPersonas = list(map(int, input().split()))

    robin = 0               # Oro que tiene Robin robado
    personasDonadas = 0     # Cantidad de personas que recibieron oro de Robin Hood

    # Itera sobre el oro de cada persona
    for indicePersona in range(0, len(oroPersonas)):

        # Si la persona tiene más oro que el threshold, entonces Robin Hood se lo roba
        if oroPersonas[indicePersona] >= threshold:
            robin += oroPersonas[indicePersona]

        # Si la persona no tiene oro, entonces se revisa si Robin Hood le puede donar
        if oroPersonas[indicePersona] == 0:

            # Por cada persona que reciba oro de Robin Hood, se suma +1 al contador
            if robin > 0:
                robin -= 1
                personasDonadas += 1
    
    # Imprime la cantidad de personas que recibieron Robin Hood
    print(personasDonadas)


