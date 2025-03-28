# 1360B - Honest Coach 
# https://codeforces.com/problemset/problem/1360/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) atletas = Número de atletas
    atletas = int(input())

    # Input:
    # 3) fuerzas = Fuerzas de los atletas
    fuerzas = list(map(int, input().split()))

    fuerzas_ordenadas = sorted(fuerzas)

    # Diferencia de fuerzas mínima encontrada hasta el momento
    diferencia_fuerzas_minima = fuerzas_ordenadas[-1] - fuerzas_ordenadas[0]

    # Compara todas las parejas de atletas posibles
    for indice_atleta1 in range(0,atletas):
        for indice_atleta2 in range(indice_atleta1 + 1,atletas):

            # Compara la diferencia de fuerzas mínima encontrada hasta el momento contra la actual entre atleta 1 y 2
            diferencia_fuerzas_minima = min(diferencia_fuerzas_minima, fuerzas_ordenadas[indice_atleta2] - fuerzas_ordenadas[indice_atleta1])

    # Imprime la diferencia de fuerzas mínima encontrada
    print(diferencia_fuerzas_minima)