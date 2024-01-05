# 1742A - Sum
# https://codeforces.com/problemset/problem/1742/A

# Input:
# 1) Casos de prueba
pruebas = int(input())

# Realiza cada caso de prueba
for prueba in range(0, pruebas):
    
    # Input:
    # 2) a, b, c = Números a sumar
    a, b, c = map(int, input().split()) 

    # Checa si al sumar dos pares de números dan como resultado el tercero
    # Prueba todas las combinaciones de pares de números
    if a == b + c or b == a + c or c == a + b:
        print("YES")
    else:
        print("NO")


