# 1950C - Clock Conversion 
# https://codeforces.com/problemset/problem/1950/C

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) horario24 = Hora en formato de 24 horas
    horario24 = input()

    # Hora en formato de 12 horas
    horario12 = ""

    # Extrae las horas
    hora = int(horario24[0:2])

    # Calcula la hora en formato de 12 horas
    # Las 00:XX y 12:XX se mantienen como 12
    if(hora == 0 or hora == 12):
        hora12 = 12
    else:
        hora12 = hora % 12

    # Añade el 0 inicial al formato de 12 horas si es necesario
    if hora12 < 10:
        horario12 += "0"

    # Añade las horas y minutos al horario
    horario12 += str(hora12) + horario24[2:5]

    # Si la hora es mayor a 12, entonces se convierte a PM, de lo contario, se convierte a AM
    if hora >= 12:
        horario12 += " PM"
    else:
        horario12 += " AM"

    # Imprime el horario en formato de 12 horas    
    print(horario12)

