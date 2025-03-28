# 1154B - Make Them Equal 
# https://codeforces.com/problemset/problem/1154/B

# Input:
# 1) N = Número de elementos en el arreglo
N = int(input())

# Input:
# 2) arreglo = Arreglo de números
arreglo = list(map(int, input().split()))

# Obtén los números únicos en el arreglo
numeros_unicos = set(arreglo)

# Guarda los números únicos en un arreglo
arreglo_numeros_unicos = list(numeros_unicos)

# Guarda los números únicos en un arreglo
arreglo_numeros_unicos_ordenado = sorted(arreglo_numeros_unicos)

# Si el arreglo tiene 4 números únicos, entonces no se puede uniformizar
if len(arreglo_numeros_unicos_ordenado) >= 4:
    print(-1)

# Si el arreglo tiene 3 números únicos, se revisa el número de en medio
if len(arreglo_numeros_unicos_ordenado) == 3:

    # Si el número de en medio es el punto medio entre los extremos, D es igual a la resta del número más grande y el de en medio
    if arreglo_numeros_unicos_ordenado[2] - arreglo_numeros_unicos_ordenado[1] == arreglo_numeros_unicos_ordenado[1] - arreglo_numeros_unicos_ordenado[0]:
        print(arreglo_numeros_unicos_ordenado[2] - arreglo_numeros_unicos_ordenado[1])
    
    # Si el número de en medio no es el punto medio entre los extremos, entonces el arreglo no se puede uniformizar
    else:
        print(-1)

# Si el arreglo tiene 2 números únicos, entonces se revisa su paridad     
if len(arreglo_numeros_unicos_ordenado) == 2:

    # Si la resta entre los dos números únicos es par, entonces D es igual al punto medio entre los dos
    if (arreglo_numeros_unicos_ordenado[1] - arreglo_numeros_unicos_ordenado[0]) % 2 == 0:
        print((arreglo_numeros_unicos_ordenado[1] - arreglo_numeros_unicos_ordenado[0]) // 2)
    
    # Si la resta entre los dos números únicos es imapar, entonces D es igual a la resta como tal
    else:
        print(arreglo_numeros_unicos_ordenado[1] - arreglo_numeros_unicos_ordenado[0])

# Si el arreglo tiene 1 número único, entonces D es igual al propio número  
if len(arreglo_numeros_unicos_ordenado) == 1:
    print(0)
