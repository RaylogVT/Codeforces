https://codeforces.com/problemset/problem/2094/A

# 2094A - Trippi Troppi

## Resumen del problema
Dado el nombre completo de un país, se requiere generar sus siglas. Las siglas se forman tomando la primera letra de cada palabra en el nombre del país.

## Input
-   La primera línea contiene un solo entero `t` ($1 \le t \le 1000$), el número de casos de prueba.
-   Para cada caso de prueba:
    -   Una línea que contiene una cadena `s`, el nombre completo del país.

## Output
Para cada caso de prueba, imprime una sola cadena: las siglas del país.

## Restricciones

| Variable     | Rango      | Notas                               |
| :----------- | :--------- | :---------------------------------- |
| t (casos)    | [1, 1000]  |                                     |
| s (cadena)   | longitud [1, 100] | Consiste en letras latinas (mayúsculas y minúsculas) y espacios. |

## Ejemplos

| Input (t, s) | s                         | Siglas Esperadas | Output |
| :----------- | :------------------------ | :--------------- | :----- |
| (1, "United States Of America") | "United States Of America" | "USOA"           | `USOA` |
| (1, "Republic Of Korea") | "Republic Of Korea"       | "ROK"            | `ROK`  |
| (1, "The United Kingdom") | "The United Kingdom"      | "TUK"            | `TUK`  |

## Forma de resolverlo

### Enfoque Algorítmico (Extracción de la Primera Letra)
El problema se resuelve extrayendo la primera letra de cada palabra en el nombre del país. Esto implica dividir la cadena de entrada en palabras individuales y luego concatenar el primer carácter de cada una de esas palabras para formar las siglas.

1.  **Dividir la cadena en palabras:** La cadena de entrada, que representa el nombre del país, debe ser dividida en sus componentes individuales (palabras) utilizando el espacio como delimitador.
2.  **Extraer la primera letra:** Para cada palabra obtenida, se toma su primer carácter.
3.  **Concatenar para formar las siglas:** Todos los primeros caracteres extraídos se unen en el orden en que aparecen las palabras para formar la cadena final de siglas.

## Algoritmo
1.  Leer el número de casos de prueba `t`.
2.  Para cada caso de prueba:
    a.  Leer la cadena `s` (el nombre completo del país).
    b.  Inicializar una cadena vacía para almacenar las siglas.
    c.  Dividir la cadena `s` en palabras.
    d.  Para cada palabra obtenida:
        i.  Tomar el primer carácter de la palabra.
        ii. Añadir este carácter a la cadena de siglas.
    e.  Imprimir la cadena de siglas resultante.

## Notas Adicionales
*   En C++, al usar `cin >> t;` seguido de `getline(cin, s);`, es común que el `getline` lea el carácter de nueva línea (`\n`) que queda en el búfer después de leer `t`. Para evitar que la primera lectura de `s` sea una cadena vacía, se puede usar `cin.ignore()` o `cin.clear()` y `cin.sync()` antes del primer `getline` en el bucle, o leer la primera línea vacía si se sabe que ocurrirá. El código Python `input()` maneja esto automáticamente.
*   Las funciones de división de cadenas (como `split()` en Python o `stringstream` en C++) son útiles para manejar múltiples palabras y espacios.

## Complejidad

| Tipo     | Complejidad (por caso) | Notas                               |
| :------- | :--------------------- | :---------------------------------- |
| Temporal | O(L)                   | Donde L es la longitud de la cadena. Se itera sobre la cadena para dividirla y extraer caracteres. |
| Espacial | O(L)                   | Para almacenar las palabras de la cadena y las siglas resultantes. |