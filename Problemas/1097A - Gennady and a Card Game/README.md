https://codeforces.com/problemset/problem/1097/A

# 1097A - Gennady and a Card Game

## Resumen del problema
Gennady tiene una carta en la mesa y cinco cartas en su mano. Para poder jugar una carta de su mano, esta debe coincidir en rango o en palo con la carta en la mesa. El problema pide determinar si Gennady puede jugar alguna carta de su mano.

## Input
-   La primera línea contiene una cadena de dos caracteres que representa la carta en la mesa. El primer carácter es el rango y el segundo es el palo.
-   La segunda línea contiene cinco cadenas de dos caracteres, separadas por espacios, que representan las cinco cartas en la mano de Gennady.

Cada carta es una cadena de dos caracteres:
-   El primer carácter (rango) puede ser '2', '3', '4', '5', '6', '7', '8', '9', 'T' (10), 'J' (Jack), 'Q' (Queen), 'K' (King), 'A' (Ace).
-   El segundo carácter (palo) puede ser 'C' (Clubs), 'D' (Diamonds), 'H' (Hearts), 'S' (Spades).

## Output
Imprime "YES" si Gennady puede jugar alguna carta de su mano, de lo contrario, imprime "NO".

## Restricciones

| Variable          | Rango                               | Notas                               |
| :---------------- | :---------------------------------- | :---------------------------------- |
| Carta (rango)     | '2'-'9', 'T', 'J', 'Q', 'K', 'A'    |                                     |
| Carta (palo)      | 'C', 'D', 'H', 'S'                  |                                     |
| Número de cartas en mano | 5                           | Fijo                                |

## Ejemplos

| Input | Razonamiento | Output |
| :---- | :----------- | :----- |
| `AH` <br> `2H 3D AS KC 4C` | Carta en mesa: `AH`. <br> Cartas en mano: `2H`, `3D`, `AS`, `KC`, `4C`. <br> `2H` coincide en palo (`H`). | `YES` |
| `KS` <br> `AD 5C KH 7S 9D` | Carta en mesa: `KS`. <br> Cartas en mano: `AD`, `5C`, `KH`, `7S`, `9D`. <br> `KH` coincide en rango (`K`). <br> `7S` coincide en palo (`S`). | `YES` |
| `7D` <br> `2C 3H 4S 5D 6C` | Carta en mesa: `7D`. <br> Cartas en mano: `2C`, `3H`, `4S`, `5D`, `6C`. <br> Ninguna carta coincide en rango ni en palo. | `NO` |

## Forma de resolverlo

El problema se puede resolver de manera directa **iterando sobre cada una de las cinco cartas en la mano** de Gennady y comparándolas con la carta que está en la mesa. Una carta se puede jugar si su **rango** (el primer carácter de la cadena) o su **palo** (el segundo carácter de la cadena) coincide con el rango o palo de la carta en la mesa. Si se encuentra al menos una coincidencia, Gennady puede jugar una carta.

## Algoritmo
1.  Leer la cadena `carta_mesa` (la carta en la mesa).
2.  Leer las cinco cadenas que representan las `cartas_mano` de Gennady.
3.  Inicializar una variable booleana `bajar_carta` a `false`. Esta variable indicará si se puede jugar alguna carta.
4.  Para cada `carta_actual` en las `cartas_mano`:
    a.  Comparar el primer carácter de `carta_actual` (rango) con el primer carácter de `carta_mesa`. Si son iguales, establecer `bajar_carta = true`.
    b.  Comparar el segundo carácter de `carta_actual` (palo) con el segundo carácter de `carta_mesa`. Si son iguales, establecer `bajar_carta = true`.
5.  Después de revisar todas las cartas en la mano:
    a.  Si `bajar_carta` es `true`, imprimir "YES".
    b.  De lo contrario, imprimir "NO".

## Complejidad

| Tipo     | Complejidad | Notas                               |
| :------- | :---------- | :---------------------------------- |
| Temporal | O(1)        | Se realizan un número fijo de comparaciones (5 cartas * 2 comparaciones por carta). La longitud de las cadenas es constante (2 caracteres). |
| Espacial | O(1)        | Se almacena un número fijo de cartas y una variable booleana. |