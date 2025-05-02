# 1899A - Game With Integers

**Enlace:** https://codeforces.com/problemset/problem/1899/A

## Resumen del problema
Vanya (Primer jugador) y Vova (Segundo jugador) juegan con un número entero inicial `n`. Por turnos, cada jugador puede sumar 1 o restar 1 al número actual. Vanya gana inmediatamente si, después de realizar su movimiento, el número resultante es divisible por 3. Si el juego continúa durante 10 movimientos en total (5 para Vanya, 5 para Vova) y Vanya no ha ganado, Vova gana. Debes determinar quién gana si ambos juegan de manera óptima.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 100$), el número de casos de prueba.
-   La única línea de cada caso de prueba contiene el entero `n` ($1 \le n \le 1000$), el número inicial.

## Output
Para cada caso de prueba, imprime "First" (si Vanya, el primer jugador, gana) o "Second" (si Vova, el segundo jugador, gana).

## Restricciones

| Variable     | Rango      | Notas                                     |
| :----------- | :--------- | :---------------------------------------- |
| t (casos)    | [1, 100]   |                                           |
| n (número)   | [1, 1000]  | Número inicial                            |
| Reglas       |            | Vanya gana si `num % 3 == 0` tras su turno. Vova gana si no, tras 10 turnos. |

## Ejemplos

| Input (n) | n   | n % 3 | Movimiento Ganador de Vanya (si existe) | Ganador Óptimo | Output   |
| :-------- | :-: | :---: | :-------------------------------------- | :------------- | :------- |
| 6         | 6   | 0     | Ninguno en el primer turno              | Second         | `Second` |
| 1         | 1   | 1     | n-1 (resulta 0)                         | First          | `First`  |
| 3         | 3   | 0     | Ninguno en el primer turno              | Second         | `Second` |
| 5         | 5   | 2     | n+1 (resulta 6)                         | First          | `First`  |
| 100       | 100 | 1     | n-1 (resulta 99)                        | First          | `First`  |
| 999       | 999 | 0     | Ninguno en el primer turno              | Second         | `Second` |
| 1000      | 1000| 1     | n-1 (resulta 999)                       | First          | `First`  |

## Forma de resolverlo

### Enfoque Algorítmico (Análisis de Divisibilidad por 3 en el Primer Turno)
La clave de este juego es la condición de victoria de Vanya: él gana *inmediatamente* si puede hacer que el número sea divisible por 3. Como Vanya juega primero, debemos analizar si puede lograr esto en su primer movimiento.

Vanya empieza con el número $n$. Puede transformarlo en $n+1$ o $n-1$. ¿Puede alguno de estos ser divisible por 3?

1.  **Si $n$ es divisible por 3 ($n \pmod 3 = 0$):**
    *   $n+1$ tendrá residuo $0+1=1$ (módulo 3). No es divisible por 3.
    *   $n-1$ tendrá residuo $0-1=-1 \equiv 2$ (módulo 3). No es divisible por 3.
    *   Vanya *no puede* ganar en su primer turno.

2.  **Si $n$ tiene residuo 1 ($n \pmod 3 = 1$):**
    *   $n+1$ tendrá residuo $1+1=2$ (módulo 3). No es divisible por 3.
    *   $n-1$ tendrá residuo $1-1=0$ (módulo 3). ¡Es divisible por 3!
    *   Vanya *puede* ganar en su primer turno eligiendo restar 1.

3.  **Si $n$ tiene residuo 2 ($n \pmod 3 = 2$):**
    *   $n+1$ tendrá residuo $2+1=3 \equiv 0$ (módulo 3). ¡Es divisible por 3!
    *   $n-1$ tendrá residuo $2-1=1$ (módulo 3). No es divisible por 3.
    *   Vanya *puede* ganar en su primer turno eligiendo sumar 1.

**Conclusión:** Vanya (el primer jugador) puede ganar en su primer movimiento si y solo si el número inicial $n$ NO es divisible por 3. Si $n$ es divisible por 3, Vanya no puede ganar en su primer turno. Dado que Vova juega después y la única forma de ganar antes de los 10 turnos es que Vanya haga el número divisible por 3, si Vanya no puede ganar en el turno 1, Vova puede asegurarse de que el juego llegue al límite de 10 turnos (o que Vanya nunca pueda hacer un número divisible por 3), por lo que Vova ganará.

La solución es simple: verificar si $n \pmod 3 = 0$.

## Análisis Matemático: Análisis de Casos por Residuo Módulo 3

**1. Estado y Acciones:**
El estado del juego es el número entero actual, inicialmente $n$. Las acciones son sumar 1 o restar 1.

**2. Condición de Victoria (Vanya - Primer Jugador):**
Vanya gana si el número $m$ resultante *después* de su movimiento cumple $m \equiv 0 \pmod 3$.

**3. Análisis del Primer Movimiento de Vanya:**
Vanya comienza con $n$. Realiza una acción para obtener $n+1$ o $n-1$. ¿Puede ganar?

*   **Caso 1: $n \equiv 0 \pmod 3$.**
    *   Movimiento +1: $n+1 \equiv 0+1 \equiv 1 \pmod 3$. No gana.
    *   Movimiento -1: $n-1 \equiv 0-1 \equiv -1 \equiv 2 \pmod 3$. No gana.
    *   **Resultado:** Vanya no puede ganar en el primer turno.

*   **Caso 2: $n \equiv 1 \pmod 3$.**
    *   Movimiento +1: $n+1 \equiv 1+1 \equiv 2 \pmod 3$. No gana.
    *   Movimiento -1: $n-1 \equiv 1-1 \equiv 0 \pmod 3$. **Vanya gana.**
    *   **Resultado:** Vanya puede elegir restar 1 y ganar inmediatamente.

*   **Caso 3: $n \equiv 2 \pmod 3$.**
    *   Movimiento +1: $n+1 \equiv 2+1 \equiv 3 \equiv 0 \pmod 3$. **Vanya gana.**
    *   Movimiento -1: $n-1 \equiv 2-1 \equiv 1 \pmod 3$. No gana.
    *   **Resultado:** Vanya puede elegir sumar 1 y ganar inmediatamente.

**4. Juego Óptimo y Conclusión:**
*   Si $n \pmod 3 \ne 0$ (es decir, $n \pmod 3 = 1$ o $n \pmod 3 = 2$), Vanya tiene un movimiento ganador en su primer turno. Como juega óptimamente, realizará ese movimiento y ganará. El ganador es "First".
*   Si $n \pmod 3 = 0$, Vanya no puede ganar en su primer turno. ¿Puede ganar después? No importa realmente. Vova (el segundo jugador) puede jugar de tal forma que Vanya nunca reciba un número que le permita ganar. Por ejemplo, si Vanya deja el número $m$ (con $m \pmod 3 = 1$ o $m \pmod 3 = 2$), Vova puede siempre mover a un estado $m'$ que no sea divisible por 3 y que tampoco permita a Vanya ganar en el siguiente turno. Como Vanya no puede ganar en el primer turno y el juego está limitado a 10 movimientos, si Vanya no gana inmediatamente, Vova eventualmente ganará por límite de tiempo. El ganador es "Second".

**Resumen Final:** El resultado del juego depende *únicamente* de si $n$ es divisible por 3.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer el entero inicial `n`.
    b.  Calcular el residuo: `residuo = n % 3`.
    c.  Si `residuo == 0`:
        i.  Imprimir "Second".
    d.  Si `residuo != 0` (es decir, 1 o 2):
        i.  Imprimir "First".

## Notas Adicionales
*   **Simplicidad:** La clave es darse cuenta de que la condición de victoria de Vanya y el hecho de que juegue primero dominan el resultado del juego. El límite de 10 turnos y el juego de Vova solo importan si Vanya no puede ganar de inmediato.
*   **Módulo:** La operación módulo 3 es central para la solución.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Una operación de módulo y una comparación. |
| Espacial | O(1)                   | Solo se almacena el número `n`.     |