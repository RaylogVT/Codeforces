# 268A - Games 
# https://codeforces.com/problemset/problem/268/A

# Input:
# 1) Número de equipos
equipos = int(input())

# Colores de casa y visitante de los equipos
colores_casa = []
colores_visitante = []

# Input:
# 2) Colores de uniformes de casa y visitante de los equipos
for equipo_actual in range(0, equipos):
    casa, visitante = map(int, input().split())
    colores_casa.append(casa)
    colores_visitante.append(visitante)

# Número de veces que dos equipos al enfrentarse tienen colores de uniforme iguales
colores_repetidos = 0

# Prueba todas las combinaciones de partidos entre equipos
for equipo_casa in range(0, equipos):
    for equipo_visitante in range(0, equipos):

        # Si al enfrentarse, el equipo de casa y visitante tienen el mismo color de uniforme, suma +1 al contador
        if colores_casa[equipo_casa] == colores_visitante[equipo_visitante]:
            colores_repetidos += 1

# Imprime el número de veces que los colores se repitieron en un partido
print(colores_repetidos)