# 1433A - Boring Apartments
# https://codeforces.com/problemset/problem/XXX/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) departamento = Número de departamento que contestó
    departamento = int(input())

    # Extrae el dígito del departamento
    digito = departamento % 10

    # Calcula el número de dígitos presionados
    # 10 * (digito - 1) = Número de dígitos presionados antes de llegar al dígito que compone el departamento
    # N * (N + 1) / 2 = Número de dígitos presionados sobre el dígito del departamento
    digitos_presionados = int(10 * (digito - 1) + (len(str(departamento)) * (len(str(departamento)) + 1) / 2))

    # Imprime el número de dígitos presionados
    print(digitos_presionados)