# 1901A - Line Trip 
# https://codeforces.com/problemset/problem/1901/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) gasolineras = Número de gasonlineras en el camino
    # 3) punto_final = Destino final del viaje
    gasolineras, punto_final = map(int, input().split())

    # Input:
    # 4) ubicaciones = Puntos donde hay gasolineras
    ubicaciones = list(map(int, input().split()))

    # Añade el punto inicial como parada del viaje
    ubicaciones.insert(0,0)

    # Añade el punto final como parada del viaje
    ubicaciones.append(punto_final)

    # Distancias entre las gasolineras
    distancias_gasolineras = []

    # Cantidad de paradas en el viaje
    paradas = len(ubicaciones)

    # Itera sobre las paradas
    for punto_gasolinera in range(1, paradas):

        # Si estás calculando la distancia entre la última gasolinera y el destino final, entonces se multiplica x2 (ida y vuelta)
        if punto_gasolinera == paradas - 1:
                distancias_gasolineras.append(2 * (ubicaciones[punto_gasolinera] - ubicaciones[punto_gasolinera - 1]))
        
        # De lo contrario, calcula la distancia entre dos gasolineras
        else:
            distancias_gasolineras.append(ubicaciones[punto_gasolinera] - ubicaciones[punto_gasolinera - 1])
    
    # Imprime la distancia máxima calculada entre dos paradas
    print(max(distancias_gasolineras))