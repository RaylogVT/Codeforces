# 1409A - Yet Another Two Integer Problems
# https://codeforces.com/problemset/problem/1409/A

# Input:
# 1) pruebas = Número de pruebas
pruebas = int(input())

# Itera sobre cada prueba
for indice_prueba in range(0, pruebas):

    # Input:
    # a = Valor a convertir
    # b = Valor de referencia
    a, b = map(int, input().split())

    # Diferencia entre A y B 
    diferencia = abs(a-b)

    # Se necesita sumar/restar un valor K al final?
    # 0 = No, 1 = Sí
    operacion_extra = 0

    # Si abs(a-b) mod 10 es mayor a 0, entonces suma +1 movimiento
    if diferencia % 10 > 0:
        operacion_extra = 1

    # Calcula el número de veces que debes sumar/restar 10
    # Suma (o no) +1 movimiento de la operación extra
    movimientos = (diferencia // 10) + operacion_extra

    # Imprime el número de movimientos a realizar
    print(movimientos)
