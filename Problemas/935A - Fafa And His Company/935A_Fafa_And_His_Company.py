# 935A - Fafa and his Company 
# https://codeforces.com/problemset/problem/935/A

# Input:
# 1) empleados = Número de empleados 
empleados = int(input())

# Contador de combinaciones de repartición TL-Empleado
reparticion = 0

# Itera sobre las posibles cantidades de Team Leader
for TL in range(1, empleados // 2 + 1):

    # Si se pueden repartir equitativamente los empleados entre los Team Leaders, entonces suma +1 al contador de reparticiones
    if (empleados - TL) % TL == 0:
        reparticion += 1

# Imprime la cantidad de combinaciones de repartición TL-Empleado
print(reparticion)
