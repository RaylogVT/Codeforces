# 271A - Beautiful Year 
# https://codeforces.com/problemset/problem/271/A

# Input:
# 1) anio = Año inicial
anio = int(input())

# Empieza a buscar a partir del próximo año
anio += 1

# Mientras el año no tenga 4 dígitos, suma 1 al año hasta encontrarlo
while(len(set(str(anio))) < 4):
    anio += 1

# Imprime el año con dígitos distintos
print(anio)
