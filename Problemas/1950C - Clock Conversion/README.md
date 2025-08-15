https://codeforces.com/problemset/problem/1950/C

# 1950C - Clock Conversion

## Resumen del problema
El problema consiste en convertir una hora dada en formato de 24 horas (HH:MM) a su equivalente en formato de 12 horas (HH:MM AM/PM). Se debe manejar correctamente los casos especiales como la medianoche (00:XX) y el mediodía (12:XX).

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 100$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   Una sola línea que contiene una cadena `s` de longitud 5 en formato "HH:MM", representando la hora en formato de 24 horas.
    -   Las horas (HH) estarán en el rango [00, 23] y los minutos (MM) en el rango [00, 59].

## Output
Para cada caso de prueba, imprime una sola cadena que representa la hora convertida al formato de 12 horas (HH:MM AM/PM).

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 100]   |                                     |
| s (cadena)   | "HH:MM"    | HH: [00, 23], MM: [00, 59]          |

## Ejemplos

| Input (s) | Hora 24h | Hora 12h (cálculo) | AM/PM | Output      |
| :-------- | :------- | :----------------- | :---- | :---------- |
| 00:00     | 0        | 12                 | AM    | `12:00 AM`  |
| 01:05     | 1        | 01                 | AM    | `01:05 AM`  |
| 11:59     | 11       | 11                 | AM    | `11:59 AM`  |
| 12:00     | 12       | 12                 | PM    | `12:00 PM`  |
| 13:30     | 13       | 01 (13 % 12)       | PM    | `01:30 PM`  |
| 23:59     | 23       | 11 (23 % 12)       | PM    | `11:59 PM`  |

## Forma de resolverlo

### Enfoque de Conversión Directa
El problema se resuelve mediante una serie de pasos condicionales y manipulaciones de cadena para transformar la representación de 24 horas a 12 horas. La clave es manejar correctamente las horas 00 (medianoche) y 12 (mediodía), así como determinar si la hora es AM o PM.

1.  **Extraer la Hora:** Se toma la parte de la hora de la cadena de entrada (los primeros dos caracteres) y se convierte a un valor entero.
2.  **Convertir a Formato 12 Horas:**
    *   Si la hora original es `00` (medianoche) o `12` (mediodía), la hora en formato de 12 horas será `12`.
    *   Para cualquier otra hora, se calcula el módulo 12 (`hora % 12`). Por ejemplo, 13 se convierte en 1 (13 % 12 = 1), 23 se convierte en 11 (23 % 12 = 11).
3.  **Añadir Cero Inicial (si es necesario):** Si la hora convertida a 12 horas es menor que 10 (por ejemplo, 1, 2, ..., 9), se le debe añadir un '0' al principio para mantener el formato HH (ej. '01', '02').
4.  **Determinar AM/PM:**
    *   Si la hora original (en formato 24 horas) es mayor o igual a `12`, la hora resultante es PM.
    *   De lo contrario (si la hora original es menor que `12`), la hora resultante es AM.
5.  **Construir la Cadena Final:** Se concatenan la hora convertida (con el cero inicial si aplica), los minutos originales y el indicador AM/PM.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer la cadena `horario24` (ej. "HH:MM").
    b.  Extraer la parte de la hora (los dos primeros caracteres) y convertirla a un entero `hora`.
    c.  Inicializar una cadena vacía `horario12`.
    d.  Calcular `hora12` (la hora en formato de 12 horas):
        i.  Si `hora` es `0` o `12`, `hora12` = `12`.
        ii. En caso contrario, `hora12` = `hora % 12`.
    e.  Si `hora12` es menor que `10`, añadir "0" a `horario12`.
    f.  Añadir `hora12` (convertida a cadena) y la parte de los minutos (":MM") de `horario24` a `horario12`.
    g.  Determinar y añadir " AM" o " PM":
        i.  Si `hora` (original) es mayor o igual a `12`, añadir " PM".
        ii. En caso contrario, añadir " AM".
    h.  Imprimir `horario12`.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(1)                   | Operaciones de cadena y aritméticas constantes, ya que la longitud de la cadena de hora es fija. |
| Espacial | O(1)                   | Espacio constante para almacenar las cadenas de hora. |