# 1426A - Floor Number
# https://codeforces.com/problemset/problem/1426/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) departamento_petya = Número de departamento donde vive Petya
    # 3) departamentos_por_piso = Número de departamentos por piso
    departamento_petya, departamentos_por_piso = map(int, input().split())

    # Piso actual
    piso = 1

    # Número del departamento recorrido actualmente (a partir del 2° piso)
    departamento_actual = 3

    # Número del departamento recorrido con respecto al piso actual
    departamento_piso_actual = 0

    # Si Petya vive en el departamento 1 o 2, entonces vive en el 1° piso
    if departamento_petya < 3:
        piso = 1
    else:

        # Empieza a recorrer los departamentos a partir del 2° piso
        piso = 2

        # Recorre los departamentos uno a uno hasta encontrar el de Petya
        # Recorre los departamentos vistos en el piso uno a uno hasta llegar al final de este
        while departamento_actual != departamento_petya:

            departamento_actual += 1
            departamento_piso_actual += 1

            # Si llegamos al final del piso, entonces reinicia desde 1 el número de departamentos vistos en el piso actual
            # Suma +1 al piso para representar que se va al siguiente piso
            if departamento_piso_actual == departamentos_por_piso:
                departamento_piso_actual = 0
                piso += 1

    # Imprime el número de piso donde se encuentra el departamento de Petya
    print(piso)
