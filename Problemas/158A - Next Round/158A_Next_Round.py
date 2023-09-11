# 158A - Next Round
# https://codeforces.com/problemset/problem/158/A

# Inputs:
# 1) Número de participantes
# 2) K-esimo participante
num_participantes, k_participante = input().split()
num_participantes = int(num_participantes)
k_participante = int(k_participante)

# Lista de puntuaciones
lista_puntuaciones = input().split()

# Puntuacion del k-esimo participante
k_puntuacion = int(lista_puntuaciones[k_participante - 1])

# Numero de participantes que pasan a la siguiente ronda
ronda_participantes = 0

# Compara todas las puntuaciones contra la del k-esimo participante
for i in range(0, num_participantes):
    if(int(lista_puntuaciones[i]) >= k_puntuacion and int(lista_puntuaciones[i]) > 0):
        ronda_participantes += 1

# Imprime el número de participantes que pasan a la siguiente ronda
print(ronda_participantes)
