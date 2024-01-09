# 791A - Bear and Big Brother
# https://codeforces.com/problemset/problem/791/A

# Input:
# 1) peso_limak = Peso de Limak
# 2) peso_bob = Peso de Bob 
peso_limak, peso_bob = map(int, input().split())

# Numero de años transcurridos
anios = 0

# Mientras Limak pese menos que Bob:
# Suma 1 año, multiplica x3 el peso de Limak y x2 el de Bob
while peso_limak <= peso_bob:
    anios += 1
    peso_limak = peso_limak * 3
    peso_bob = peso_bob * 2

# Imprime el número de años que pasaron para que Limak pesara más que Bob
print(anios)
