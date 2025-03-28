

# Input:
# 1) arreglo = Arreglo de números ordenados
# 2) numero = Número a buscar

arreglo = list(map(int, input().split()))
numero = int(input())

def busqueda_binaria(arreglo, left, right, numero):

    while left <= right:
        mid = (left + right) // 2

        # Si mi número está en mid, entonces devuelve el índice
        if arreglo[mid] == numero:
            return mid
        
        # Si mi número es mayor a mid, entonces el número está del lado derecho
        if arreglo[mid] < numero:
            left = mid + 1

         # Si mi número es menor a mid, entonces el número está del lado izquierdo
        if arreglo[mid] > numero:
            right = mid - 1

    return -1

print(busqueda_binaria(arreglo, 0, len(arreglo) - 1, numero))
