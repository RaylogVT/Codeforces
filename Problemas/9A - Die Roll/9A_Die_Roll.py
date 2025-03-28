# 9A - Die Roll
# https://codeforces.com/problemset/problem/9/A

# Input:
# 1) yakko = Resultado del dado de Yakko
# 2) wakko = Resultado del dado de Wakko
yakko, wakko = map(int, input().split())

# Calcula el valor del dado que Dot debe superar
valor_maximo = max(yakko, wakko)

# Cantidad de valores que le darán a Dot la victoria
dot = 6 - valor_maximo + 1

# Simplifica la fracción acorde a las especificaciones del problema
if dot == 0:
    print('0/1')
elif dot == 1:
    print('1/6')
elif dot == 2:
    print('1/3')
elif dot == 3:
    print('1/2')
elif dot == 4:
    print('2/3')
elif dot == 5:
    print('5/6')
elif dot == 6:
    print('1/1')