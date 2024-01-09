# 723A - New Year: Meeting Friends
# https://codeforces.com/problemset/problem/723/A

# Input:
# 1) coordenadas_amigos = Coordenadas de las casas de los amigos
coordenadas_amigos = list(map(int, input().split()))

# Resta la coordenada más alta y baja de las 3 para calcular la distancia mínima
distancia = max(coordenadas_amigos) - min(coordenadas_amigos)

# Imprime la distancia mínima recorrida
print(distancia)
