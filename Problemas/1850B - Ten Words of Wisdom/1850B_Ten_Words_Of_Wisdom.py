# 1850B - Ten Words of Wisdom 
# https://codeforces.com/problemset/problem/1850/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) respuestas = Número de respuestas
    respuestas = int(input())

    # Calidad máxima de las respuestas válidas
    calidad_maxima = 0

    # Índice del participante con la calidad máxima
    indice_calidad = 0 

    # Itera sobre cada respuesta de los participantes
    for indice_respuesta in range(0,respuestas):

        # Input:
        # 3) palabras = Número de palabras en la respuesta
        # 4) Calidad = Calidad numérica de la respuesta
        palabras, calidad = map(int, input().split())

        # Si la respuesta tiene 10 o menos palabras, entonces se considera válida
        if palabras <= 10:

            # Si la respuesta tiene más calidad que el máximo actual, entonces se actualiza la calidad máxima
            if calidad > calidad_maxima:

                # Actualiza la calidad máxima
                calidad_maxima = calidad

                # Guarda el índice del participante
                indice_calidad = indice_respuesta + 1
        
    # Imprime el índice del participante con la respuesta con la mayor calidad
    print(indice_calidad)
