# 581A - Vasya The Hipster
# https://codeforces.com/problemset/problem/581/A

# Inputs:
# 1) Número de calcetines rojos
# 2) Número de calcetines azules
calcetines_rojos, calcetines_azules = map(int, input().split())

# Calcula el número de días en los que Vasya usará calcetines distintos
# El valor está en de qué color de calcetines Vasya tiene menos
dias_calcetines_distintos = min(calcetines_rojos, calcetines_azules)

# Calcula el número de días en los que Vasya usará calcetines iguales
# El valor está en de qué color de calcetines Vasya tiene más entre 2
dias_calcetines_iguales = max((calcetines_rojos - min(calcetines_rojos, calcetines_azules)) // 2, (calcetines_azules - min(calcetines_rojos, calcetines_azules)) // 2)

# Imprime el número de días en los que Vasya usará calcetines del mismo y distinto color
print('{} {}'.format(dias_calcetines_distintos, dias_calcetines_iguales))