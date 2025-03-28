# 1472B - Fair Division 
# https://codeforces.com/problemset/problem/1472/B

# Input:
# 1) pruebas = Número de caso de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) velas = Número de velas entregadas
    velas = int(input())

    # Input:
    # 3) gramos_velas = Peso en gramos de cada vela
    gramos_velas = list(map(int, input().split()))

    # Suma el total de gramos de las velas
    total = sum(gramos_velas)

    # Si el total de gramos es impar, entonces imprime NO, de lo contario procede a revisar la repartición de velas
    if total % 2 == 1:
        print('NO')
    else:

        # Cantidad de velas de 1 y 2 gramos    
        velas_1_gramos = gramos_velas.count(1)
        velas_2_gramos = gramos_velas.count(2)

        # Mitad del total de gramos --> Gramos a repartir entre Alice y Bob
        mitad = total // 2

        # Gramos actuales de Alice y Bob
        gramos_Alice = 0
        gramos_Bob = 0

        # Dale a Alice velas de 2 gramos hasta alcanzar la mitad
        # Resta 1 vela al contador de velas de 2 gramos en cada instancia
        while gramos_Alice < mitad:
            
            # Si hay velas de 2 gramos, entonces se le dan a Alice   
            if velas_2_gramos > 0:

                # Si Alice necesita 1 vela de 1 gramo para alcanzar la mitad, entonces se le asigna
                if mitad - gramos_Alice == 1:

                    # Si no hay velas de 1 gramo para dar a Alice, entonces no se pueden repartir equitativamente los gramos
                    if velas_1_gramos <= 0:
                        print('NO')
                        break

                    # Si hay velas de 1 gramo para dar a Alice, entonces se le da la 1 vela de 1 gramo
                    else:
                        gramos_Alice += 1
                        velas_1_gramos -= 1

                # Da 1 vela de 2 gramos a Alice
                else:
                    gramos_Alice += 2
                    velas_2_gramos -= 1
            
            # Si no hay velas de 2 gramos, entonces dale velas de 1 gramo a Alice         
            else:
                gramos_Alice += 1
                velas_1_gramos -= 1
            
        # Si Alice recibió la mitad de gramos totales, entonces sí se pueden repartir las velas
        if gramos_Alice == mitad:
            print('YES') 