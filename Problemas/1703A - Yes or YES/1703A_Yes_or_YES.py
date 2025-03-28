# 1703A - Yes or YES?
# https://codeforces.com/problemset/problem/1703/A

# Input:
# 1) pruebas = Número de pruebas
pruebas = int(input())

# Realiza cada caso de prueba
for indice_prueba in range(0, pruebas):

    # Input:
    # 2) yes = String de 3 caracteres
    yes = input()

    # Si el string en minúsculas es igual a "yes", entonces imprime "YES", de lo contrario, imprime "NO"
    if yes.lower() == 'yes':
        print('YES')
    else:
        print('NO')
