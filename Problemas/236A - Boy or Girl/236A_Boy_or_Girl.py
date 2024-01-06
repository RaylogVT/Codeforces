# 236A - Boy or Girl
# https://codeforces.com/problemset/problem/236/A

# Input:
# 1) username = Username a evaluar
username = input()

# Cuenta el número de letras únicas en el username
# El set() guarda las letras únicas
letras_unicas = set(username)

# Si el número de letras distintas es par, entonces el usuario es hombre, de lo contrario, es mujer
if len(letras_unicas) % 2 == 1:
    print("IGNORE HIM!")
else:
    print("CHAT WITH HER!")
