# 110A - Nearly Lucky Number
# https://codeforces.com/problemset/problem/110/A

# Número a checar los dígitos
numero = int(input())

# Convierte el número a string
numero_string = str(numero)

# Contador de dígitos de la suerte
contador_suerte = 0

# Checa cada dígito del número
for digito in numero_string:

    # Si el dígito es 4 o 7, añade 1 al contador
    if digito == '4' or digito == '7':
        contador_suerte += 1

# Si el número tiene 4 o 7 dígitos de la suerte, entonces imprime 'YES', de lo contrario, imprime 'NO'
if contador_suerte == 4 or contador_suerte == 7:
    print('YES')
else:
    print('NO')

