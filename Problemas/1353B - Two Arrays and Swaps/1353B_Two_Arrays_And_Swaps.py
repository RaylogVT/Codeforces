# 1353B - Two Arrays And Swaps
# https://codeforces.com/problemset/problem/1353/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) n = Número de elementos en los arreglos
    # 2) k_swaps = Número de intercambios a realizar
    n, k_swaps = map(int, input().split())

    # Input:
    # 3) a = Arreglo a maximizar su suma
    # 4) b = Arreglo a intercambiar
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    # Ordena A de menor a mayor
    # Ordena B de mayor a menor
    min_a = sorted(a)
    max_b = sorted(b, reverse=True)

    # Itera sobre el arreglo A
    for numero in range(0,len(min_a)):

        # Revisa cuántos movimientos aún puedes hacer
        if k_swaps > 0:

            # ¿El número más chico en A es más chico que el número más grande en B?
            # Si lo es, entonces realiza el intercambio, de lo contrario, no se hace nada
            if min_a[numero] <= max_b[numero]:

                # Intercambia el número más chico de A con el número más grande de B
                min_a[numero] = max_b[numero]
                k_swaps -= 1

    # Calcula la suma de los elementos de A
    maxsum_a = sum(min_a)

    # Imprime la suma de los elementos de A
    print(maxsum_a)