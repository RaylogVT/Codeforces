# 996A - Hit The Lottery
# https://codeforces.com/problemset/problem/996/A

# Inputs:
# 1) Dinero a sacar
dinero = int(input())

# Denominaciones de billetes
denominaciones = [1,5,10,20,100]

# Cantidad total de billetes a sacar
billetes_total = 0

for denom_indice in range(len(denominaciones)-1, -1, -1):

    # Cantidad de billetes a sacar con la denominación actual
    billetes_actual = int(dinero / denominaciones[denom_indice])

    # Añade los nuevos billetes a tu cantidad final
    billetes_total = billetes_total + billetes_actual

    # Calcula el dinero que te queda por sacar con otras denominaciones
    dinero = dinero - (denominaciones[denom_indice] * billetes_actual)

# Imprime la cantidad de billetes total que necesitas para sacar el dinero
print(billetes_total)

