https://codeforces.com/problemset/problem/1999/A

# 1999A - A + B Again

## Resumen del problema
El problema pide calcular la suma de los dígitos de un número entero de dos dígitos dado. Esta operación debe realizarse para múltiples casos de prueba.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   Una sola línea contiene un entero `N` ($10 \le N \le 99$), un número de dos dígitos.

## Output
Para cada caso de prueba, imprime un solo entero: la suma de los dígitos de `N`.

## Restricciones

| Variable   | Rango      | Notas                               |
| :--------- | :--------- | :---------------------------------- |
| t (casos)  | [1, 1000]  |                                     |
| N (número) | [10, 99]   | Número entero de dos dígitos        |

## Ejemplos

| Input (N) | N   | Dígito 1 (Decenas) | Dígito 2 (Unidades) | Suma | Output |
| :-------- | :-- | :----------------- | :------------------ | :--- | :----- |
| 12        | 12  | 1                  | 2                   | 3    | `3`    |
| 57        | 57  | 5                  | 7                   | 12   | `12`   |
| 90        | 90  | 9                  | 0                   | 9    | `9`    |

## Forma de resolverlo

### Enfoque Algorítmico (Extracción y Suma de Dígitos)
Dado que el problema especifica que `N` es un número de dos dígitos, podemos extraer cada dígito individualmente utilizando operaciones aritméticas básicas y luego sumarlos.

1.  **Extraer el dígito de las decenas:** Para un número entero `N`, el dígito de las decenas se obtiene dividiendo `N` por 10 usando división entera. Por ejemplo, si `N = 57`, `57 / 10` (división entera) resulta en `5`.
2.  **Extraer el dígito de las unidades:** El dígito de las unidades se obtiene aplicando la operación de módulo 10 a `N`. Por ejemplo, si `N = 57`, `57 % 10` resulta en `7`.
3.  **Sumar los dígitos:** Una vez obtenidos ambos dígitos, simplemente se suman para obtener el resultado final.

Este método es directo y muy eficiente para números de dos dígitos.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer el número entero `N`.
    b.  Calcular el dígito de las decenas: `digito_decenas = N / 10` (división entera).
    c.  Calcular el dígito de las unidades: `digito_unidades = N % 10`.
    d.  Calcular la suma de los dígitos: `suma_digitos = digito_decenas + digito_unidades`.
    e.  Imprimir `suma_digitos`.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Se realizan un número constante de operaciones aritméticas por cada caso de prueba. |
| Espacial | O(1)                   | Se utiliza un espacio constante para almacenar las variables. |