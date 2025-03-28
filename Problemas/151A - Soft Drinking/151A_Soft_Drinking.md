https://codeforces.com/problemset/problem/151/A

# 151A - Soft Drinking

## Resumen del problema
N amigos deciden comprar:
- K botellas de alcohol "Take It Light" de L mililitros
- C limones partidos en D trozos
- P gramos de sal

Para hacer un brindis, cada amigo necesita NL mililitros de alcohol, un trozo de limón y NP gramos de sal para su bebida. \
¿Cuántos brindis pueden realizar?

## Input
La única línea contiene contiene 8 números enteros N, K, L, C, D, P, NL, NP (1 <= N,K,L,C,D,P,NL,NP <= 1000) -- El número de amigos, el número de botellas de alcohol, los mililitros de cada botella, el número de limones, el número de trozos de cada limón, los gramos de sal, el mínimo de mililitros de alcohol de una bebida y el mínimo de gramos de sal de una bebida, respectivamente.

## Output
Imprime un número entero -- El número de brindis que los amigos pueden realizar.

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 3 4 5 10 8 100 3 1 | (4 * 5) / 3 = **6** bebidas de alcohol <br> 10 * 8 = **80** bebidas de limón <br> 100 / 1 = **100** bebidas de sal <br> min(6, 80, 100) = **6** <br> 6 / 3 = **2** brindis | **2** |
| 5 100 10 1 19 90 4 3 | (100 * 10) / 4 = **250** bebidas de alcohol <br> 1 * 19 = **19** bebidas de limón <br> 90 / 3 = **30** bebidas de sal <br> min(250, 19, 30) = **19** <br> 19 / 5 = **3** brindis | **3** |

## Forma de resolverlo
Para resolver este problema, primero tenemos que saber cuántas bebidas podemos realizar a partir de las **porciones de alcohol, limones y sal tenemos disponibles**. Para ello, simplemente podemos hacer los siguientes cálculos:
1) Número de bebidas posibles (considerando solo **alcohol**) = Número de botellas x Mililitros por botella / Mínimo de mililitros por bebida
2) Número de bebidas posibles (considerando solo **limones**) = Número de limones x Trozos por limón
3) Número de bebidas posibles (considerando solo **sal**) = Gramos de sal / Mínimo de gramos por bebida

Una vez que sabemos el número de bebidas posibles con cada ingrediente individual, sacamos cuál de los tres valores es el más **pequeño** (puesto que este determina cuántas bebidas se pueden hacer con los 3 ingredientes). Una vez que tenemos el valor mínimo, simplemente dividimos el número de bebidas posibles entre el número de amigos para calcular el número de brindis posibles.

## Algoritmo
1) Calcula Bebidas_Alcohol = (K * L) / NL
2) Calcula Bebidas_Limon = C * D
3) Calcula Bebidas_Sal = P / NP
4) Calcula Numero_Bebidas = min(Bebidas_Alcohol, Bebidas_Limon, Bebidas_Sal)
5) Calcula Numero_Brindis = Numero_Bebidas / N
