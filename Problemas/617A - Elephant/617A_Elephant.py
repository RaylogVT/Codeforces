# 617A - Elephant
# https://codeforces.com/problemset/problem/617/A

import math

# Posición del amigo
posicion_amigo = int(input())

# Avanza en posiciones de 5 en 5
# Redondea hacia arriba para contemplar el último paso (si en este avanzar menos de 5 posiciones)
pasos = math.ceil(posicion_amigo / 5)
print(pasos)