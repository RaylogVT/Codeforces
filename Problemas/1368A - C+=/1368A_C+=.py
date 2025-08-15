# 1368A - C+= 
# https://codeforces.com/problemset/problem/1368/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) a,b = Números iniciales
    # 3) n = Número a superar
    a,b,n = map(int, input().split())

    # Secuencia de Fibonacci
    fibonacci = [a, b]

    # Ordena a y b de menor a mayor
    fibonacci = sorted(fibonacci)  
    
    # Variable para autosuma
    suma = 0

    # Mientras la autosuma no exceda N, expande el Fibonacci
    while(suma <= n):

        # Realiza la autosuma
        suma = fibonacci[len(fibonacci)-1] + fibonacci[len(fibonacci)-2]

        # Añade la autosuma al Fibonacci
        fibonacci.append(suma)

    # Imprime la cantidad de números generada en la secuencia de Fibonacci
    print(len(fibonacci) - 2)