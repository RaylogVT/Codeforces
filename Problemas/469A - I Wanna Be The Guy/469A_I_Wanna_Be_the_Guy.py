# 469A - I Wanna Be the Guy
# https://codeforces.com/problemset/problem/469/A

# Inputs:
# 1) N - Número de niveles
# 2) X - Niveles que X puede pasarse
# 3) Y - Niveles que Y puede pasarse

num_niveles = int(input())
nivelesX = list(map(int, input().split()))
nivelesY = list(map(int, input().split()))

# Elimina el 1° número de ambas listas, representa el número de niveles que se puede pasar X y Y
nivelesX.pop(0)
nivelesY.pop(0)

# Itera sobre cada nivel
for nivel in range(1, num_niveles+1):

    # Si X y Y no se pueden pasar el nivel actual, entonces termina el juego, imprime 'Oh, my keyboard!'
    if not(nivel in nivelesX or nivel in nivelesY):
        print('Oh, my keyboard!')
        break
    
    # Si X o Y se pasaron todos los niveles, entonces imprime 'I become the guy.'
    if nivel == num_niveles:
        print('I become the guy.')

