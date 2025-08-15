# 1097A - Gennady and a Card Game
# https://codeforces.com/problemset/problem/1097/A

# Input:
# 1) carta_mesa = Carta en la mesa
carta_mesa = input()

# Input:
# 2) carta_mano = Cartas en la mano
cartas_mano = map(str, input().split())

# Extrae los números y tipos de las cartas en tu mano
cartas_numeros = []
cartas_tipos = []
for carta in cartas_mano:
    cartas_numeros.append(carta[0])
    cartas_tipos.append(carta[1])

# Revisa si tienes alguna carta para bajar
if carta_mesa[0] in cartas_numeros or carta_mesa[1] in cartas_tipos:
    print("YES")
else:
    print("NO")
