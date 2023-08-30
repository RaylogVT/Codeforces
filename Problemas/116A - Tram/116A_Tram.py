# 116A - Tram
# https://codeforces.com/problemset/problem/116/A

# Input - Número de estaciones
estaciones = int(input())

# Número máximo de pasajeros que el tren ha tenido hasta el momento
maximo_pasajeros = 0

# Número de pasajeros que el tren tiene actualmente
pasajeros_actuales = 0

# Recorre cada estación
for estacion in range(0,estaciones):

    # Input - Número de pasajeros que salen y entran del tren
    pasajeros_salientes, pasajeros_entrantes = map(int, input().split())

    # Calcula cuántos pasajeros tiene el tren después de que salieran y entraran los correspondientes
    pasajeros_actuales = pasajeros_actuales - pasajeros_salientes + pasajeros_entrantes

    # ¿El tren tiene más pasajeros del máximo que se ha registrado hasta el momento?
    # Si sí, acutaliza el valor del máximo registrado, de lo contrario, no se actualiza nada
    if pasajeros_actuales > maximo_pasajeros:
        maximo_pasajeros = pasajeros_actuales

print(maximo_pasajeros)