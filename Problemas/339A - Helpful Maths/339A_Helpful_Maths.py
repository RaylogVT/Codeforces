# 339A - Helpful Maths
# https://codeforces.com/problemset/problem/339/A

# Inputs:
# 1) suma = Suma a ordenar
suma = input()

# Lista de sumandos (números)
numeros = []

# Extrae los números de la suma, ignora los '+'
for elemento in suma:
    if elemento != '+':
        numeros.append(int(elemento))

# Ordena los números de menor a mayor
numeros_ordenados = sorted(numeros)

# Itera sobre la lista de números de la suma
for numero in range(0, len(numeros_ordenados)):

    # Imprime el número 
    print(numeros_ordenados[numero], end = "")

    # Si el número no es el último de la lista, imprime un '+'
    if numero != len(numeros_ordenados) - 1:
        print('+', end = "")
