# 1520A - Do Not Be Distracted
# https://codeforces.com/problemset/problem/1520/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre los casos de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) dias = Número de días transcurridos
    # 3) tareas = Orden de las tareas realizadas
    dias = int(input())
    tareas = input()

    # Variable bandera - ¿Una tarea se partió en dos?
    tarea_partida = False

    # Itera sobre cada tarea realizada
    for letra in range(1,dias):

        # ¿La tarea del día de hoy ya se ha hecho antes?
        # ¿La tarea del día de hoy es distinta a la de ayer?
        # Si sí, entonces la tarea se partió en dos
        if tareas[letra] in tareas[:letra] and tareas[letra] != tareas[letra-1]:
            tarea_partida = True
            break
    
    # Revisa el valor de la variable bandera
    # Si True, entonces se partió una tarea en dos, imprime "NO", de lo contrario, imprime "YES"
    if tarea_partida == True:
        print("NO")
    else:
        print("YES")