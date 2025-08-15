# 2044B - Normal Problem 
# https://codeforces.com/problemset/problem/2044/B

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) string_frontal = String visto desde afuera de la tienda
    string_frontal = input()

    # String visto desde adentro de la tienda
    string_trasero = ""

    # Itera sobre el string frontal de derecha a izquierda
    for letra in range(len(string_frontal)-1, -1, -1):

        # Las p's vistas desde afuera son q's desde adentro
        if string_frontal[letra] == 'p':
            string_trasero += 'q'
        
        # Las q's vistas desde afuera son p's desde adentro
        if string_frontal[letra] == 'q':
            string_trasero += 'p'

        # Las w's vistas desde afuera se mantienen igual
        if string_frontal[letra] == 'w':
            string_trasero += 'w'

    # Imprime el string visto desde adentro de la tienda
    print(string_trasero)