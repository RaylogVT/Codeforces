# 61A - Ultra-Fast Mathematician
# https://codeforces.com/problemset/problem/61/A

# Inputs:
# 1) numero1 = Número 1
# 2) numero2 = Número 2
numero1 = input()
numero2 = input()

# Resultado de la operación
resultado = ''

# Itera sobre los dígitos de los dos números
for digito in range(0,len(numero1)):

    # Si los dígitos son iguales, entonces la respuesta es 0
    if numero1[digito] == numero2[digito]:
        resultado += '0'

    # Si los dígitos son distintos, entonces la respuesta es 1
    else:
        resultado += '1'

# Imprime el resultado de la operación
print(resultado)
