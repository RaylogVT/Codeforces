# 1692A - Marathon
# https://codeforces.com/problemset/problem/1692/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for prueba_actual in range(0, pruebas):

    # Input:
    # distancia_timur (a) = Distancia de Timur
    # distancia_b, distancia_c, distancia_d = Distancia de los otros 3 participantes
    distancia_timur, distancia_b, distancia_c, distancia_d = map(int, input().split())

    # Número que personas por delante de Timur
    personas_delante_Timur = 0

    # Si B está delante de Timur, suma +1 al número de personas por delante de Timur
    if distancia_timur < distancia_b: 
        personas_delante_Timur += 1

    # Si C está delante de Timur, suma +1 al número de personas por delante de Timur    
    if distancia_timur < distancia_c: 
        personas_delante_Timur += 1

    # Si D está delante de Timur, suma +1 al número de personas por delante de Timur    
    if distancia_timur < distancia_d: 
        personas_delante_Timur += 1
    
    # Imprime el número total de personas por delante de Timur
    print(personas_delante_Timur)
