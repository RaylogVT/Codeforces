# 381A - Sereja and Dima
# https://codeforces.com/problemset/problem/381/A

# Input:
# 1) Número de cartas
# 2) Valor de cada carta
numero_cartas = int(input())
valor_cartas = list(map(int, input().split()))

# Puntos de Sereja y Dima
puntos_sereja = 0
puntos_dima = 0

# Revisa si todavía hay cartas en la mesa
for turno in range(0,numero_cartas):

    # ¿Cuál es el número mayor entre la carta más a la izquierda y derecha?
    numero_mayor = max(valor_cartas[0], valor_cartas[-1])

    # Sereja tiene turnos pares
    if turno % 2 == 0:

        # Suma la carta con número más grande a la puntuación de Sereja
        puntos_sereja = puntos_sereja + numero_mayor

        # Elimina la carta de la lista de cartas en la mesa
        valor_cartas.remove(numero_mayor)

    # Dima tiene turnos impares
    if turno % 2 == 1:

        # Suma la carta con número más grande a la puntuación de Dima
        puntos_dima = puntos_dima + numero_mayor

        # Elimina la carta de la lista de cartas en la mesa
        valor_cartas.remove(numero_mayor)

# Imprime la puntuación de Sereja y Dima
print('{} {}'.format(puntos_sereja, puntos_dima))