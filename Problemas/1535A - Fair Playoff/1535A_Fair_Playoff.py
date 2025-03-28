# 1535A - Fair Playoff 
# https://codeforces.com/problemset/problem/1535/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) p1,p2,p3,p4 = Nivel de habilidad de los 4 jugadores
    p1, p2, p3, p4 = map(int, input().split())

    # Arreglo de niveles de habilidad
    niveles_habilidad = [p1, p2, p3, p4]

    # Arreglo de niveles de habilidad ordenados
    niveles_habilidad_ordenados = sorted(niveles_habilidad)

    # Extrae al 1° y 2° jugador más hábil
    jugador_primero_mas_habil = niveles_habilidad_ordenados[3]
    jugador_segundo_mas_habil = niveles_habilidad_ordenados[2]

    # Modela los dos partidos
    # Extrae quién tiene mayor nivel de habilidad: P1 vs. P2 y P3 vs. P4
    ganador_partido_12 = max(p1,p2)
    ganador_partido_34 = max(p3,p4)

    # Arreglo con los dos jugadores más hábiles
    jugadores_mas_habiles = [jugador_primero_mas_habil, jugador_segundo_mas_habil]

    # ¿Los dos ganadores de los partidos son los jugadores más hábiles?
    # Imprime 'YES' si lo son, de lo contrario, imprime 'NO'
    if ganador_partido_12 in jugadores_mas_habiles and ganador_partido_34 in jugadores_mas_habiles:
        print('YES')
    else:
        print('NO')
