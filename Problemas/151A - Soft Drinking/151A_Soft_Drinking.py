# 151A - Soft Drinking
# https://codeforces.com/problemset/problem/151/A

# Input:
# 1) amigos = Número de amigos
# 2) botellas = Número de botellas
# 3) mililitros = Mililitros por botella
# 4) limones = Número de limones
# 5) trozos = Número de trozos de limones
# 6) gramos_sal = Gramos de sal
# 7) minimo_mililitros = Mínimo de mililitros para brindas
# 8) minimo_sal ) Mínimo de sal para brindas
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