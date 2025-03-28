# 1955A - Yogurt Sale
# https://codeforces.com/problemset/problem/1955/A

# Input:
# 1) pruebas = Número de casos de prueba
pruebas = int(input())

# Itera sobre cada caso de prueba
for indice_prueba in range(0,pruebas):

    # Input:
    # 2) yogurt = Número de yogures a comprar
    # 3) precio_individual = Precio individual del yogurt
    # 4) precio_promocion = Precio de promoción de 2 yogures
    numero_yogurt, precio_individual, precio_promocion = map(int, input().split())

    # Si el precio de promoción es peor que el individual, entonces se compran los yogures a precio individual
    if precio_promocion > precio_individual * 2:
        costo = numero_yogurt * precio_individual

    # Si el precio de promoción es mejor que el individual, entonces se compran los yogures a precio de promoción
    else:  

        # Si el número de yogures a comprar es par, entonces todos se compran a precio de promoción
        if numero_yogurt % 2 == 0:
            costo = (numero_yogurt // 2) * precio_promocion

        # Si el número de yogures a comprar es impar, entonces todos excepto uno se compran a precio de promoción y el último a precio individual
        else:
            costo = (numero_yogurt // 2) * precio_promocion + precio_individual

    # Imprime el costo mínimo para comprar los yogures
    print(costo)
