# 339A - Helpful Maths
# https://codeforces.com/problemset/problem/339/A

# Suma a ordenar
suma = input()

# Lista de sumandos (números)
numeros = []

# Extrae los números de la suma, ignora los '+'
for i in suma:
    if i != '+':
        numeros.append(int(i))

# Ordena los números de menor a mayor
numeros_ordenados = sorted(numeros)

# Recorre la lista de números de la suma
for i in range(0, len(numeros_ordenados)):

    # Imprime el número 
    print(numeros_ordenados[i], end = "")

    # Si el número no es el último de la lista, imprime un '+'
    if i != len(numeros_ordenados) - 1:
        print('+', end = "")
