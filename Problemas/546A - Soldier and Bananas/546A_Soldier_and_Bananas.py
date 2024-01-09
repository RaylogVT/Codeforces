# 564A - Soldier and Bananas
# https://codeforces.com/problemset/problem/564/A

# Inputs:
# 1) precio_banana = Precio de la 1° banana
# 2) dolares_actuales = Dólares que el soldado tiene
# 3) numero_bananas = Número de bananas a comprar
precio_banana, dolares_actuales, numero_bananas = map(int, input().split())

# Monto total a pagar por las bananas
monto_total = 0

# Suma al monto total el precio individual de cada banana
for banana in range(1,numero_bananas+1):
    monto_total = monto_total + (precio_banana * banana)

# Calcula cuántos dólares debe el soldado predir prestado
dolares_prestados = monto_total - dolares_actuales

# Si el número de dólares prestados es negativo, entonces imprime 0 (no necesita pedir prestado para pagar)
if dolares_prestados > 0:
    print(dolares_prestados)
else:
    print('0')
