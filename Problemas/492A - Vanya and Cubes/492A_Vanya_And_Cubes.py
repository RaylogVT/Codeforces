# 492A - Vanya and Cubes 
# https://codeforces.com/problemset/problem/492/A

# Input:
# 1) cubos = Cantidad de cubos de Vanya
cubos = int(input())

# La pirámide inicia en el nivel 0 (sin niveles)
nivel = 0

# Revisa si aún quedan cubos
while cubos >= 0:

    # Pasa al siguiente nivel
    nivel += 1

    # Resta de la cantidad de cubos sobrante los necesarios para construir el nivel actual
    cubos = cubos - (nivel * (nivel + 1) // 2)

# Imprime el nivel anterior (cuando todavía sobraban cubos)
print(nivel - 1)