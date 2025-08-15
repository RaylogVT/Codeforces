# 1980A - Problem Generator 
# https://codeforces.com/problemset/problem/1980/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) problemas = Cantidad de problemas en el banco
    # 3) rondas = Número de rondas a realizar
    problemas, rondas = map(int, input().split())

    # Input:
    # 4) problemas = Cantidad de problemas en el banco
    banco = input()

    # Número de problemas a agregar al banco 
    problemasAgregar = 0

    # Dificultad del problema actual
    dificultades = 'ABCEDFG'

    # Itera sobre las dificultades de los problemas
    for letra in dificultades:

        # Cuenta cuántos problemas hay de la dificultad actual
        problemasDificultadActual = banco.count(letra)

        # Si tienes menos problemas de una dificultad de las que necesitas, entonces agrégalas al banco
        if problemasDificultadActual < rondas:

            # Suma la cantidad de problemas a agregar
            problemasAgregar += (rondas - problemasDificultadActual)

    # Imprime la cantidad del problemas a agregar al banco
    print(problemasAgregar)
