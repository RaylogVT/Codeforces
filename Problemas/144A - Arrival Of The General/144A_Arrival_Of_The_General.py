# 144A - Arrival Of The General
# https://codeforces.com/problemset/problem/144/A

# Inputs:
# 1) soldados = Número de soldados
# 2) alturas = Altura de soldados
soldados = int(input())
alturas = list(map(int, input().split()))

# Altura del soldado más alto
altura_alto = max(alturas)

# Altura del soldado más bajo
altura_bajo = min(alturas)

# Posición del soldado más alto
# Se asume que la peor posición posible es al final
posicion_alto = len(alturas)-1

# Posición del soldado más bajo
# Se asume que la peor posición posible es al inicio
posicion_bajo = 0

# Itera sobre la fila de soldados de derecha a izquierda
for posicion_soldado in range(len(alturas)-1, -1, -1):

    # ¿El soldado actual tiene la altura máxima?
    if alturas[posicion_soldado] == altura_alto:

        # ¿El soldado está más cerca del inicio?
        if posicion_soldado < posicion_alto:

            # Actualiza la posición del soldado con la altura más alta más cercana al inicio
            posicion_alto = posicion_soldado

# Itera sobre la fila de soldados de izquierda a derecha
for posicion_soldado in range(0,len(alturas)):

    # ¿El soldado actual tiene la altura mínima?
    if alturas[posicion_soldado] == altura_bajo:

        # ¿El soldado está más cerca del inicio?
        if posicion_soldado > posicion_bajo:

            # Actualiza la posición del soldado con la altura más alta más cercana al inicio
            posicion_bajo = posicion_soldado

# Durante los intercambios, ¿el soldado más alto y más bajo cambian de lugar entre si?
# Si cambian de lugar, entonces el intercambio le ahorrará 1 segundo a alguno de los dos
cruce_alto_bajo = 0

# Si el soldado más alto está a la derecha del soldado más bajo, entonces intercambiarán lugares entre sí
if posicion_alto > posicion_bajo:
    cruce_alto_bajo = 1

# Calcula el número de segundos para mover al soldado más alto al inicio y al más bajo al final
segundos = posicion_alto + (len(alturas) - 1 - posicion_bajo) - cruce_alto_bajo

# Imprime los segundos transcurridos
print(segundos)
