# 432A - Choosing Teams
# https://codeforces.com/problemset/problem/432/A

# Input:
# 1) personas = Número de personas/miembros (n)
# 2) participaciones_requeridas = Cantidad de veces que una persona debe participar en los campeonatos (k)
# 3) participaciones_previas = Cantidad de veces que una persona ha participado antes en un campeonato (y)
personas, participaciones_requeridas = map(int, input().split())
participaciones_previas = list(map(int, input().split()))

# Número de personas que pueden participar K veces en los campeonatos
personas_disponibles = 0

# Itera sobre las participaciones previas de las personas
for participaciones_persona in participaciones_previas:

    # ¿La persona puede participar K veces en los campeonatos dadas su participaciones previas?
    if (5 - participaciones_persona) >= participaciones_requeridas:

        # Si la persona puede participar K veces, entonces suma +1 al número de personas disponibles
        personas_disponibles += 1

# ¿Cuántos equipos se pueden formar?
cantidad_equipos = personas_disponibles // 3

# Imprime la cantidad de equipos que se formaron
print(cantidad_equipos)