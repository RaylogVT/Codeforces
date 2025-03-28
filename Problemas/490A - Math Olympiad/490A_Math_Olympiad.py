# 490A - Math Olympiad
# https://codeforces.com/problemset/problem/490/A

# Input:
# 1) ninos = Número de niños en la escuela
# 2) habilidades = Habilidad de cada niño
ninos = int(input())
habilidades = list(map(int, input().split()))

# Listas de índices de los niños buenos en cada materias
indices_ninos_programación = []
indices_ninos_matematicas = []
indices_ninos_deportes = []

# Itera sobre las habilidades de los niños
for indice_habilidad in range(0,ninos):

    # Si el niño actual es bueno en programación (1), entonces añade su índice a la lista de índices de niños buenos en programación
    if habilidades[indice_habilidad] == 1:
        indices_ninos_programación.append(indice_habilidad + 1)
    
    # Si el niño actual es bueno en matemáticas (2), entonces añade su índice a la lista de índices de niños buenos en matemáticas
    if habilidades[indice_habilidad] == 2:
        indices_ninos_matematicas.append(indice_habilidad + 1)

    # Si el niño actual es bueno en deportes (3), entonces añade su índice a la lista de índices de niños buenos en deportes
    if habilidades[indice_habilidad] == 3:
        indices_ninos_deportes.append(indice_habilidad + 1)

# Calcula el número máximo de equipos que se pueden formar
# El resultado estará dictado por la materia con la menor cantidad de niños prodigio
equipos = min(len(indices_ninos_programación), len(indices_ninos_matematicas), len(indices_ninos_deportes))

# Imprime la cantidad de equipos a realizar
print(equipos)

# Itera sobre los equipos a realizar
for equipo_actual in range(0,equipos):

    # Extrae el índice en un niño bueno en cada materia para formar un equipo
    print('{} {} {}'.format(indices_ninos_programación[equipo_actual], indices_ninos_matematicas[equipo_actual], indices_ninos_deportes[equipo_actual]))