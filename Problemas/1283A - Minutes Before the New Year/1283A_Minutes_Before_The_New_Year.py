# 1283A - Minutes Before The New Year
# https://codeforces.com/problemset/problem/1283/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) hora = Hora actual
    # 3) minuto = Minuto actual
    hora, minuto = map(int, input().split())

    # Calcula la cantidad de minutos faltantes para Año Nuevo
    minutos_faltantes = (23 - hora) * 60 + (60 - minuto)

    # Imprime la cantidad de minutos faltantes para Año Nuevo
    print(minutos_faltantes)