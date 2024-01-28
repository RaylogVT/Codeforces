# 758A - Holiday of Equality
# https://codeforces.com/problemset/problem/758/A

# Input:
# 1) ciudadanos = Cantidad de ciudadanos en el reino
# 2) rublos_por_ciudadano = Cantidad de rublos que tiene cada ciudadano
ciudadanos = int(input())
rublos_por_ciudadano = list(map(int, input().split()))

# Saca la cantidad de rublos que tiene el ciudadano más rico
ciudadano_mas_rico = max(rublos_por_ciudadano)

# Dinero a entregar
rublos_a_entregar = 0

# Itera sobre los rublos de cada ciudadano
for ciudadano_actual in range(0,ciudadanos):
    rublos_a_entregar = rublos_a_entregar + (ciudadano_mas_rico - rublos_por_ciudadano[ciudadano_actual])

# Imprime el total de rublos a entregar
print(rublos_a_entregar)