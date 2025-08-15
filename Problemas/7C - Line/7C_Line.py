# 7C - Line
# https://codeforces.com/problemset/problem/7/C

# Función:
#   gcdExtended: Obtén los coeficientes del Algoritmo Extendido de Euclides para el gcd(a,b)
# Parámetros:
#   a,b = Números a obtener su GCD
def gcdExtended(a,b): 
    # Caso base: gcd(a,b) = 1
    if a == 0 : 
        return b,0,1
    
    # Realiza recursión para encontrar el GCD
    gcd,x1,y1 = gcdExtended(b % a, a)  
    x = y1 - (b // a) * x1 
    y = x1 
     
    return gcd,x,y 

# Input:
# 1) a,b,c = Coeficientes de la ecuación lineal
a,b,c = map(int, input().split())

# Obtén el GCD y los coeficientes (x,y) del EEA de a y b
gcd,x,y = gcdExtended(a,b)

# Si el GCD es divisible con C, entonces sí hay coordenadas (x,y) enteras que pasan por la ecuación lineal
if c % gcd == 0:

    # Calcula (x,y) que pasan por la ecuación lineal
    x0 = (x * (c // gcd)) * -1
    y0 = (y * (c // gcd)) * -1
    print("{} {}".format(x0,y0))

else:
    print(-1)
