https://codeforces.com/problemset/problem/791/A

# 791A - Bear and Big Brother

## Resumen del problema
El oso Limak quiere pesar más que su hermano Bob. Por cada año que pasa, Limak triplica su peso, mientras que Bob lo duplica. \
¿En cuántos años Limak pesará más que Bob?

## Input
Una línea con dos números A y B (1 <= A <= B <= 10) -- El peso de Limak y Bob, respectivamente \
Está garantizado que Limak (A) pesa menos o igual que Bob (B)

## Output
Imprime el número que años que Limak tardará para pesar más que Bob

## Ejemplos
| Input | Razonamiento | Output    |
| :---- | :--------    | --------- |
| 4 7   | 4 7 <br> 12 14 = 1 año <br> 36 28 = 2 años | 2         |
| 4 9   | 4 9 <br> 12 18 = 1 año <br> 36 36 = 2 años <br> 108 72 = 3 años | 3         |
| 7 32  | 7 32 <br> 21 64 = 1 año <br> 63 128 = 2 años <br> 219 256 = 3 años <br> 657 512 = 4 años | 4         |

## Forma de resolverlo
Para este problema, simplemente podemos llevar el registro de los pesos de Limak y Bob con cada año que pasa, y en cada uno de ellos los comparamos. Una vez que el peso de Limak sea mayor al de Bob, entonces nos detenemos.

## Algoritmo
1) Compara los pesos de Limak y Bob
2) Mientras Limak pese menos o igual que Bob:
    1) Suma 1 año
    2) Multiplica x3 el peso de Limak
    3) Multiplica x2 el peso de Bob
3) Imprime el número de años que transcurrieron
