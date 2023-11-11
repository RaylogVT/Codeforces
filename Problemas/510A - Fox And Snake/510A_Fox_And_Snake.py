# 510A - Fox and Snake 
# https://codeforces.com/problemset/problem/510/A

# Input:
# 1) n = Filas
# 2) m = Columnas
n_filas, m_columnas = map(int, input().split())

# Construye la serpiente
for fila in range(1, n_filas+1):

    # Imprime la serpiente moviéndose en filas impares
    if fila % 2 == 1:
        
        # Llena la fila de #
        for columa in range(1, m_columnas+1):
            print('#', end="")

    # Imprime la serpiente moviéndose del lado derecho
    if fila % 2 == 0 and fila % 4 != 0:
         
        # Llena la fila de . excepto la última columna
        for columa in range(1, m_columnas+1):
            if columa == m_columnas:
                print('#', end="")
            else:
                print('.', end="")
    
    # Imprime la serpiente moviéndose del lado izquierdo
    if fila % 4 == 0:
         
        # Llena la fila de . excepto la primera columna
        for columa in range(1, m_columnas+1):
            if columa == 1:
                print('#', end="")
            else:
                print('.', end="")

    print('')
        