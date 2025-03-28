# 80A - Panoramix Prediction
# https://codeforces.com/problemset/problem/80/A

# isPrime: ¿Un número es primo?
# Input: 
#   1) Número = Número a evaluar
# Output:
#   a) Número = El número sí es primo
#   b) -1 = El número no es primo
def isPrime(numero):

    # Si el número no es mayor a 1, entonces no es primo
    if numero > 1:

        # Itera desde el 2 hasta N/2 + 1
        for numero_actual in range(2, numero//2 + 1):

            # Si algún número es divisible con nuestro número, entonces no es primo
            if numero % numero_actual == 0:
                return -1
        
        # Si ningún número fue divisible con nuestro número, entonces es primo
        return 1
    
    return -1

# Input:
# 1) n, m = Números primos
n, m = map(int, input().split())

# Número primo próximo potencial actual a N
proximo_primo = n + 1

# Itera sobre el próximo número primo potencial actual
while isPrime(proximo_primo) != 1:

    # Si el próximo número primo potencial actual no es primo, entonces suma +1
    # Termina el proceso cuando el próximo número primo potencial actual sea primo
    proximo_primo += 1

# Si el próximo número primo encontrado es igual a M, entonces imprime YES, de lo contrario, imprime NO
if proximo_primo == m:
    print("YES")
else:
    print("NO")
