# 1873A - Short Sort
# https://codeforces.com/problemset/problem/1879/A

# intercambiar_cartas: Intercambia dos cartas de cualquier posición en un string de cartas
# Input:
#   1) cartas: String de cartas a modificar
#   2) localidad1: Localidad de la 1° carta
#   3) localidad2: Localidad de la 2° carta
# Output:
#   cartas_intercambiadas: String con las dos cartas intercambiadas
def intercambiar_cartas(cartas: str, localidad1: int, localidad2: int):

    # Separa las cartas en una lista
    letras = list(cartas)

    # Intercambia las cartas seleccionadas
    letras[localidad1], letras[localidad2] = letras[localidad2], letras[localidad1]

    # Reúne las cartas en un solo string
    cartas_intercambiadas = "".join(letras)  

    # Devuelve las cartas intercambiadas
    return cartas_intercambiadas

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) cartas = Cartas (escritas en el orden que están)
    cartas = input()

    # Checa si alguna de las combinaciones de intercambio da 'abc' como resultado
    # Checa si las cartas dan 'abc' tal como estaban ordenadas inicialmente
    # Si alguna combinación da 'abc', entonces imprime 'YES', de lo contrario, imprime 'NO'
    if intercambiar_cartas(cartas,0,1) == 'abc' or intercambiar_cartas(cartas,0,2) == 'abc' or intercambiar_cartas(cartas,1,2) == 'abc' or cartas == 'abc':
        print('YES')
    else:
        print('NO')
