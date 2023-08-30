# 734A - Anton or Danik
# https://codeforces.com/problemset/problem/734/A

# Input:
# 1) Número de partidas de ajedrez jugadas
# 2) Quién ganó cada partida
partidas = int(input())
victorias = input()

# Contador de victorias de Anton y Danik
victorias_anton = 0
victorias_danik = 0

# Cuenta cuántas victorias tuvo cada uno
for partida in victorias:

    # Si la letra es igual a 'A', entonces ganó Anton la partida
    if partida == 'A':
        victorias_anton += 1

    # Si la letra es igual a 'D', entonces ganó Anton la partida
    if partida == 'D':
        victorias_danik += 1

# Si Anton ganó más partidas que Danik, entonces imprime 'Anton'
if victorias_anton > victorias_danik:
    print('Anton')

# Si Danik ganó más partidas que Anton, entonces imprime 'Danik'
elif victorias_anton < victorias_danik:
    print('Danik')

# Si ambos ganaron el mismo número de partidas, entonces imprime 'Friendship'
elif victorias_anton == victorias_danik:
    print('Friendship')


