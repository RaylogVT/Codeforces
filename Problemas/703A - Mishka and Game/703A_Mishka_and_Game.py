# 703A - Mishka and Game
# https://codeforces.com/problemset/problem/703/A

# Input:
# 1) rondas = Número de rondas a jugar
rondas = int(input())

# Contadores de rondas ganadas de Mishka y Chris
rondas_ganadas_mishka = 0
rondas_ganadas_chris = 0

# Itera sobre cada ronda
for ronda in range(0,rondas):

    # Input:
    # 2) dado_mishka = Resultado del dado de Mishka
    # 3) dado_chris = Resultado del dado de Chris
    dado_mishka, dado_chris = map(int, input().split())

    # Suma +1 al contador de Mishka si su dado da un número mayor al de Chris
    if dado_mishka > dado_chris:
        rondas_ganadas_mishka += 1

    # Suma +1 al contador de Chris si su dado da un número mayor al de Mishka
    elif dado_mishka < dado_chris:
        rondas_ganadas_chris += 1

# Compara el número de rondas ganadas de Mishka y Chris
# Imprime Mishka si gana Mishka, Chris si gana Chris, Friendship si es empate
if rondas_ganadas_mishka > rondas_ganadas_chris:
    print('Mishka')
elif rondas_ganadas_mishka < rondas_ganadas_chris:
    print('Chris')
elif rondas_ganadas_mishka == rondas_ganadas_chris:
    print('Friendship is magic!^^')
