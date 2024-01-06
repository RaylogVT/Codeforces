# 200B - Drinks
# https://codeforces.com/problemset/problem/200/B

# Inputs:
# 1) bebidas = Número de bebidas
# 2) porcentaje_jugo_bebidas = % de jugo de naranja en cada bebida
bebidas = int(input())
porcentaje_jugo_bebidas = list(map(int, input().split()))

# Saca el promedio de los porcentajes de jugo de naranja de las bebidas
porcentaje_jugo_mezcla = sum(porcentaje_jugo_bebidas)/len(porcentaje_jugo_bebidas)

# Imprime el promedio de porcentaje de jugo
print(porcentaje_jugo_mezcla)
