# 1703B - ICPC Ballons
# https://codeforces.com/problemset/problem/1703/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) N = Longitud del string
    N = int(input())

    # Input:
    # 3) problemas_resueltos = Problemas resueltos en el concurso
    problemas_resueltos = input()

    # Calcula cuántos globos se entregaron en el concurso
    # Globos = Cantidad de letras del string +  Cantidad de letras únicas en el string
    globos = len(problemas_resueltos) + len(set(problemas_resueltos))

    # Imprime la cantidad de globos entregados
    print(globos)