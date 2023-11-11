# 155A - I Love Username
# https://codeforces.com/problemset/problem/155/A

# Input
# 1) Número de concursos
# 2) Puntuación de cada concurso
concursos = int(input())
puntuaciones = list(map(int, input().split()))

# Puntuación máxima y mínima del programador a lo largo de los concursos
puntuacion_maxima = puntuaciones[0]
puntuacion_minima = puntuaciones[0]

# Número de concursos asombrosos del programador
concursos_asombrosos = 0

# Itera sobre las puntuaciones
for puntuacion_actual in puntuaciones:

    # Si la puntuación actual es mayor a la máxima actual, entonces se actualiza la puntuación máxima y suma +1 a número de concursos asombrosos
    if puntuacion_actual > puntuacion_maxima:
        puntuacion_maxima = puntuacion_actual
        concursos_asombrosos += 1
    
    # Si la puntuación actual es menor a la mínima actual, entonces se actualiza la puntuación mínima y suma +1 a número de concursos asombrosos
    if puntuacion_actual < puntuacion_minima:
        puntuacion_minima = puntuacion_actual
        concursos_asombrosos += 1

# Imprime el número de concursos asombrosos
print(concursos_asombrosos)