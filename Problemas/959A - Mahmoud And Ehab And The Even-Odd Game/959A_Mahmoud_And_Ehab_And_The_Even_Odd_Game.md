# 959A - Mahmoud and Ehab and the Even-Odd Game

**Enlace:** https://codeforces.com/problemset/problem/959/A

## Resumen del problema
Mahmoud y Ehab juegan un juego por turnos. Comienzan con un número entero `n`. Mahmoud juega primero. En cada turno, el jugador actual elige un número entero `a` y lo resta del número actual (`n`). Las reglas para elegir `a` son:
1.  `1 <= a <= n` (el número actual antes de restar).
2.  Si es el turno de Mahmoud, `a` debe ser **par**.
3.  Si es el turno de Ehab, `a` debe ser **impar**.

El jugador que no puede hacer un movimiento válido (porque no existe ningún `a` que cumpla las condiciones) pierde el juego. Dado el número inicial `n`, determina quién ganará si ambos juegan de manera óptima. Este es un problema clásico de teoría de juegos simple.

## Input
La única línea de entrada contiene un solo número entero `n` (1 <= n <= 10⁹).

## Output
Imprime el nombre del ganador: "Mahmoud" o "Ehab".

## Restricciones

| Variable | Rango      |
| :------- | :--------- |
| n        | [1, 10⁹]   |

## Ejemplos

| Input | n   | Razonamiento                                                                                                | Output    |
| :---- | :-- | :---------------------------------------------------------------------------------------------------------- | :-------- |
| 1     | 1   | Mahmoud (1°) debe elegir `a` par, `1 <= a <= 1`. Imposible. Mahmoud pierde.                                | `Ehab`    |
| 2     | 2   | Mahmoud (1°) debe elegir `a` par, `1 <= a <= 2`. Elige `a=2`. n se vuelve 0. Ehab (2°) debe elegir `a` impar, `1 <= a <= 0`. Imposible. Ehab pierde. | `Mahmoud` |
| 3     | 3   | Mahmoud (1°) debe elegir `a` par, `1 <= a <= 3`. Elige `a=2`. n se vuelve 1. Ehab (2°) debe elegir `a` impar, `1 <= a <= 1`. Elige `a=1`. n se vuelve 0. Mahmoud (3°) debe elegir `a` par, `1 <= a <= 0$. Imposible. Mahmoud pierde. | `Ehab`    |

## Forma de resolverlo

### a) Enfoque Algorítmico (Análisis de Paridad y Primer Movimiento)
La clave está en analizar el primer movimiento y sus consecuencias sobre la paridad del número restante.
1.  **Si `n` es par:** Mahmoud juega primero. Él *debe* elegir un `a` par. Una estrategia ganadora simple para Mahmoud es elegir `a = n`. Esto es válido porque `n` es par y `1 <= n <= n`. Después de restar `a=n`, el número restante es 0. Ahora es el turno de Ehab. Ehab debe elegir un `a` impar tal que `1 <= a <= 0`. Esto es imposible. Por lo tanto, si `n` es par, Mahmoud siempre puede ganar en su primer movimiento.
2.  **Si `n` es impar:** Mahmoud juega primero. Él *debe* elegir un `a` par.
    *   Si `n=1`, Mahmoud no puede elegir ningún `a` par (`1 <= a <= 1`), por lo que pierde inmediatamente.
    *   Si `n > 1` (y `n` es impar), Mahmoud debe elegir algún `a` par (`1 <= a <= n`). Después de restar `a` (par) de `n` (impar), el número restante (`n-a`) será **impar**. Ahora es el turno de Ehab. Ehab se enfrenta a un número impar. Él *debe* elegir un `a'` impar. Una estrategia ganadora para Ehab es elegir `a' = (número impar actual)`. Esto es válido si el número actual es >= 1. Al restar `a'`, el número resultante es 0. Ahora es el turno de Mahmoud, quien debe elegir un `a''` par tal que `1 <= a'' <= 0$, lo cual es imposible. Por lo tanto, si `n` es impar, Ehab siempre tiene una estrategia para ganar.

La conclusión es que el ganador está determinado únicamente por la paridad del número inicial `n`.

### b) Enfoque Matemático (Teoría de Juegos - Posiciones P/N)
Este juego puede analizarse en términos de posiciones ganadoras (N-positions, el *N*ext player gana) y posiciones perdedoras (P-positions, the *P*revious player gana).
1.  El estado del juego está definido por el número actual `n` y de quién es el turno. Sin embargo, dado que el jugador está implícito por el turno, podemos analizar si un número `n` es intrínsecamente una posición ganadora o perdedora para el jugador cuyo turno es.
2.  La condición de pérdida es no poder mover. Esto ocurre cuando `n=0`. Por lo tanto, `n=0` es una P-posición (el jugador anterior, quien dejó 0, ganó).
3.  Analicemos `n=1`: El jugador actual (Mahmoud si es el inicio, Ehab si Mahmoud dejó 1) debe elegir `a` (par para M, impar para E). Si es M, no puede mover (P-position para M, N-position para Ehab). Si es E, elige `a=1`, deja 0 (N-position para Ehab).
4.  Analicemos `n=2`: El jugador actual (M) debe elegir `a` par. Elige `a=2`. Deja 0 (P-position para el siguiente jugador, Ehab). Por lo tanto, `n=2` es una N-position para Mahmoud.
5.  Generalizando:
    *   Si `n` es par, el jugador actual (Mahmoud) puede mover a `n=0` eligiendo `a=n`. Como 0 es una P-posición para el siguiente jugador (Ehab), `n` par es una N-position (posición ganadora) para Mahmoud.
    *   Si `n` es impar, el jugador actual (Mahmoud) *debe* elegir `a` par, lo que deja un número `n-a` impar. Ehab se enfrenta a un número impar. Ehab *puede* elegir `a'=(n-a)`, que es impar, dejando `n=0`. Como 0 es P-position para Mahmoud, la posición impar a la que se enfrentó Ehab era una N-position para él. Esto significa que la posición impar original `n` a la que se enfrentó Mahmoud era una P-position (posición perdedora) para Mahmoud.

El resultado coincide: Mahmoud gana si `n` es par, Ehab gana si `n` es impar.

## Algoritmo
1.  Leer el número inicial `n`.
2.  Verificar si `n` es par usando el operador módulo: `n % 2 == 0`.
3.  Si la condición es verdadera (`n` es par), imprimir "Mahmoud".
4.  Si la condición es falsa (`n` es impar), imprimir "Ehab".

## Notas Adicionales
*   **Simplicidad Engañosa:** Aunque se describe como un juego, las reglas conducen a una conclusión muy simple basada únicamente en la paridad inicial. No es necesario simular turnos.
*   **Concepto Clave:** Paridad y teoría de juegos básica (identificar movimientos forzados y estados terminales).

## Complejidad

| Tipo        | Complejidad |
| :---------- | :---------- |
| Temporal    | O(1)        |
| Espacial    | O(1)        |

*La complejidad es constante porque solo se realiza una lectura, una operación de módulo y una impresión, independientemente del valor de `n`.*