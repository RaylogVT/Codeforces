# 32B - Borze!
# https://codeforces.com/problemset/problem/32/B

# Input:
# 1) borze = Código Borze
borze = input()

# Convierte '--' a 2
borze_decodificado_2 = borze.replace('--', '2')

# Convierte '-.' a 1 sobre el Borze decodificado con el 2
borze_decodificado_1 = borze_decodificado_2.replace('-.', '1')

# Convierte '.' a 0 sobre el Borze decodificado con el 1
# Esta último conversión devolverá el Borze decodificado final
borze_decodificado = borze_decodificado_1.replace('.', '0')

# Imprime el código Borze decodificado
print(borze_decodificado)