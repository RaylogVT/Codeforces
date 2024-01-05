# 151A - Soft Drinking
# https://codeforces.com/problemset/problem/151/A

# Input:
# 1) Número de amigos
# 2) Número de botellas
# 3) Mililitros por botella
# 4) Número de limones
# 5) Número de trozos de limones
# 6) Gramos de sal
# 7) Mínimo de mililitros para brindas
# 8) Mínimo de sal para brindas
amigos, botellas, mililitros, limones, trozos, sal, minimo_mililitros, minimo_sal = map(int, input().split())

# Calcula el número de brindis que se pueden realizar con los mililitros de bebida disponibles
brindis_alcohol = (botellas * mililitros) // minimo_mililitros

# Calcula el número de brindis que se pueden realizar con los trozos de limones disponibles
brindis_limones = limones * trozos

# Calcula el número de brindis que se pueden realizar con los gramos de sal disponibles
brindis_sal = sal // minimo_sal

# Calcula el número de brindis que se pueden realizar
# El número de brindis está determinado por el valor mínimo de bebidas, limones y sal disponible
numero_brindis = min(brindis_alcohol, brindis_limones, brindis_sal) // amigos

# Imprime el número de brindis que se pueden realizar
print(numero_brindis)