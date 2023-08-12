# 112A - Petya and Strings
# https://codeforces.com/problemset/problem/112/A


# compararStrings() - Compara dos strings lexicográficamente
# Parámetros:
#   1) string1 - 1° string a comparar
#   2) string2 - 2° string a comparar
# Resultado:
#   a) 1 = El 1° string es mayor que el 2° string
#   b) -1 = El 2° string es mayor que el 1° string
#   c) 0 = Los dos strings son iguales
def compararStrings(string1: str, string2: str):

    # Si los dos strings son del mismo tamaño, entonces procede a comparar
    if len(string1) == len(string2):

        # Recorre los dos strings a la par
        for i in range(0, len(string1)):

            # Si una letra es distinta entre los dos strings, compara sus valores ASCII
            if string1[i] != string2[i]:

                # Devuelve 1 si el valor ASCII de la letra del 1° string es mayor al del 2° string
                if ord(string1[i]) > ord(string2[i]):
                    return 1
                
                # Devuelve -1 si el valor ASCII de la letra del 2° string es mayor al del 1° string
                elif ord(string1[i]) < ord(string2[i]):
                    return -1
    
    # Devuelve 0 si no hubo letras distintas entre los strings
    return 0

# Input - 1° y 2° string
string1 = input()
string2 = input()

# Convierte los strings a mayúsculas
stringMayusculas1 = string1.upper()
stringMayusculas2 = string2.upper()

# Imprime resultado de la función
print(compararStrings(stringMayusculas1, stringMayusculas2))

