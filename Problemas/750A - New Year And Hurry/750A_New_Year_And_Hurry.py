# 750A - New Year and Hurry
# https://codeforces.com/problemset/problem/750/A

# Input:
# 1) problemas = Número de problemas
# 2) minutos_viaje = Tiempo de viaje a la fiesta
problemas, minutos_viaje = map(int, input().split())

# ¿Cuánto tiempo queda para resolver los problemas del concurso?
tiempo_concurso = 240 - minutos_viaje

# ¿Cuántos problemas del concurso has resuelto?
problemas_resueltos = 0

# Itera sobre los problemas
for numero_problema_actual in range(1, problemas+1):

    # Si al resolver el problema actual el tiempo del concurso es mayor a 0, entonces resuélvelo, suma +1 al número de problemas resueltos y actualiza el tiempo restante del concurso
    if tiempo_concurso - (5 * numero_problema_actual) >= 0:
        tiempo_concurso = tiempo_concurso - (5 * numero_problema_actual)
        problemas_resueltos += 1

    # Si al resolver el problema actual el tiempo del concurso es menor a 0, entonces termina de iterar sobre los problemas
    elif tiempo_concurso - (5 * numero_problema_actual) < 0:
        break

# Imprime el número de problemas resueltos
print(problemas_resueltos)
