# 977A - Wrong Substraction
# https://codeforces.com/problemset/problem/977/A

# Input:
# 1) numero = Número a restar
# 2) cantidad_restas = Números de restas a realizar
numero, cantidad_restas = map(int, input().split())

# Calcula el resultado de cada resta
for resta in range(0, cantidad_restas):

    # Si el último dígito es distinto de 0, resta -1
    if numero % 10 != 0:
        numero = numero - 1
    
    # Si el último dígito es igual a 0, divide entre 10
    elif numero % 10 == 0:
        numero = numero / 10

# Imprime el número resultante
print(int(numero))
