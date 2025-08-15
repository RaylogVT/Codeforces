# 2065A - Skibidus and Amongus
# https://codeforces.com/problemset/problem/2065/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) singular = Sustantivo en singular
    singular = input()

    # Extrae el sustantivo de la palabra   
    sustantivo = singular[0:len(singular)-2]

    # Convierte el sustativo a plural
    plural = sustantivo + 'i'

    # Imprime el sustantivo plural
    print(plural)