# 427A - Police Recruits
# https://codeforces.com/problemset/problem/427/A

# Inputs:
# 1) eventos = Número de eventos
# 2) lista_eventos = Lista de eventos
eventos = int(input())
lista_eventos = list(map(int, input().split()))

# Número de policías en servicio
policias_disponibles = 0

# Número de crímenes no tratados
crimenes_sin_tratar = 0

# Itera sobre los eventos
for evento in lista_eventos:

    # Si el evento es un número positivo, entonces es una contratación de policías
    # Añade los policías al número de policías
    if evento > 0:
        policias_disponibles += evento

    # Si el evento es igual a -1, entonces es un crimen
    if evento == -1:

        # Si no hay policias disponibles, entonces suma +1 al número de crímenes sin tratar
        if policias_disponibles == 0:
            crimenes_sin_tratar += 1
        
        # Si hay policias disponibles, resta -1 al número de policías disponibles
        elif policias_disponibles > 0:
            policias_disponibles -= 1

# Imprime el número de crímenes sin tratar
print(crimenes_sin_tratar)
