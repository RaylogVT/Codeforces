# 1941A - Rudolf And The Ticket
# https://codeforces.com/problemset/problem/1941/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) monedas_izquierda = Cantidad de monedas en el bolsillo izquierdo
    # 3) monedas_derecha = Cantidad de monedas en el bolsillo derecho
    # 4) limite = Límite de suma a superar con las monedas
    monedas_izquierda, monedas_derecha, limite = map(int, input().split())

    # Input:
    # 5) denominaciones_izquierda = Denominaciones de las monedas en el bolsillo izquierdo
    # 6) denominaciones_derecha = Denominaciones de las monedas en el bolsillo derecho
    denominaciones_izquierda = list(map(int, input().split()))
    denominaciones_derecha = list(map(int, input().split()))

    # Contador de pares de monedas que no superan el límite
    contador_pares_validos = 0

    # Itera sobre las combinaciones de pares de monedas:
    for moneda_actual_izquierda in denominaciones_izquierda:
        for moneda_actual_derecha in denominaciones_derecha:

            # Si la suma de las dos monedas actuales no excede el límite, entonces se suma +1 al contador
            if moneda_actual_izquierda + moneda_actual_derecha <= limite:
                contador_pares_validos += 1

    # Imprime la cantidad de pares válidos
    print(contador_pares_validos)