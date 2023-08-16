# 791A - Bear and Big Brother
# https://codeforces.com/problemset/problem/791/A

# Input - Peso de Limak (a) y Bob (b)
limak, bob = map(int, input().split())

# Numero de años pasados
anios = 0

# Mientras Limak pese menos que Bob:
# Suma 1 año, multiplica x3 el peso de Limak y x2 el de Bob
while limak <= bob:
    anios += 1
    limak = limak * 3
    bob = bob * 2

# Imprime el número de años que pasaron para que Limak pesara más que Bob
print(anios)