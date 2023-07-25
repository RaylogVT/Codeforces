# 231A - Team
# https://codeforces.com/problemset/problem/231/A

# Número de problemas
problemas = int(input())

# Número de problemas que los amigos implementaran
problemas_implementados = 0

# Procesa cada problema
for i in range(0,problemas):

    # El amigo sabe o sabe el problema? (1 = Sí sabe, 0 = No sabe)
    vasya, petya, tonya = input().split()

    # Cuantos amigos saben el problema?
    saben = int(vasya) + int(petya) + int(tonya)

    # Si 2 o más amigos saben el problema, entonces lo implementan
    if saben >= 2:
        problemas_implementados += 1

# Imprimir numero de problemas implementados
print(problemas_implementados)
    