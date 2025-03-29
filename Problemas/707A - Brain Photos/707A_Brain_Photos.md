# 707A - Brain's Photos

**Enlace:** https://codeforces.com/problemset/problem/707/A

## Resumen del problema
Se te da una imagen representada como una cuadrícula de píxeles. Cada píxel puede ser de uno de los siguientes colores: 'C' (Cian), 'M' (Magenta), 'Y' (Amarillo), 'W' (Blanco), 'B' (Negro), 'G' (Gris). Debes determinar si la imagen es a color o en blanco y negro. Una imagen se considera a color si contiene **al menos un** píxel 'C', 'M' o 'Y'. En caso contrario (si solo contiene 'W', 'B' o 'G'), se considera en blanco y negro. Este es generalmente considerado un problema introductorio o de implementación simple.

## Input
-   La primera línea contiene dos enteros `N` y `M`, las dimensiones (filas y columnas) de la imagen.
-   Las siguientes `N` líneas contienen cada una `M` caracteres separados por espacios, representando los colores de los píxeles en esa fila.

## Output
Imprime `#Color` si la imagen contiene al menos un píxel 'C', 'M' o 'Y'. De lo contrario, imprime `#Black&White`.

## Restricciones

| Variable                 | Rango              |
| :----------------------- | :----------------- |
| N (filas)                | [1, 100]           |
| M (columnas)             | [1, 100]           |
| Color del píxel (caracter) | 'C', 'M', 'Y', 'W', 'B', 'G' |

## Ejemplos

| Input                  | Imagen (Grid)             | Razonamiento                             | Output        |
| :--------------------- | :------------------------ | :--------------------------------------- | :------------ |
| 2 2 <br> W M <br> B G    | `[[W, M], [B, G]]`      | Contiene 'M'.                            | `#Color`      |
| 3 2 <br> W W <br> W W <br> B B | `[[W,W],[W,W],[B,B]]` | No contiene 'C', 'M', ni 'Y'.         | `#Black&White`|
| 1 5 <br> W B G Y C       | `[[W, B, G, Y, C]]`   | Contiene 'Y' y 'C'.                      | `#Color`      |

## Forma de resolverlo

### a) Enfoque Algorítmico (Búsqueda con Bandera y Salida Temprana)
La forma más directa y eficiente es revisar cada píxel de la imagen, buscando la *primera* ocurrencia de un color indicativo ('C', 'M', 'Y'). Se utiliza una variable "bandera" (booleana) para rastrear el estado.
1.  Inicializa una bandera, por ejemplo `esColor`, a `false`.
2.  Recorre cada fila y, dentro de ella, cada columna (cada píxel).
3.  Para cada píxel, comprueba si su color es 'C', 'M' o 'Y'.
4.  Si encuentras uno de estos colores:
    a. Cambia la bandera `esColor` a `true`.
    b. **Detén la búsqueda inmediatamente**. No es necesario revisar los píxeles restantes, ya que la condición para ser "a color" se ha cumplido.
5.  Después de revisar todos los píxeles (o detenerte antes), comprueba el estado final de la bandera. Si es `true`, la imagen es a color. Si sigue siendo `false` (porque nunca encontraste 'C', 'M', o 'Y'), es blanco y negro.

### b) Enfoque Lógico/Matemático (Verificación de Existencia)
Desde un punto de vista lógico, el problema pregunta: ¿Existe *al menos un* píxel `p` en la imagen tal que `p` pertenece al conjunto de colores clave `{ 'C', 'M', 'Y' }`?
1.  Define el conjunto de colores clave: `ColoresClave = {'C', 'M', 'Y'}`.
2.  Define el conjunto de todos los píxeles en la imagen: `PixelesImagen = { pixel(i, j) | 0 <= i < N, 0 <= j < M }`.
3.  El problema se reduce a verificar si la intersección entre `PixelesImagen` y `ColoresClave` es no vacía (`PixelesImagen ∩ ColoresClave ≠ ∅`).
4.  Si la intersección no es vacía (se encontró al menos un color clave), la respuesta es `#Color`.
5.  Si la intersección es vacía (ningún píxel pertenece a `ColoresClave`), la respuesta es `#Black&White`.
Este enfoque justifica por qué la búsqueda puede detenerse tan pronto como se encuentra el primer color clave.

## Algoritmo
1.  Leer las dimensiones `N` y `M`.
2.  Inicializar una variable booleana `esColor = false`.
3.  Iterar `fila` desde 0 hasta `N-1`.
4.  Iterar `columna` desde 0 hasta `M-1`.
5.  Leer el carácter del píxel actual, `pixelActual`.
6.  Verificar si `pixelActual` es igual a 'C' O `pixelActual` es igual a 'M' O `pixelActual` es igual a 'Y'.
7.  Si la condición anterior es verdadera:
    a.  Establecer `esColor = true`.
    b.  Salir inmediatamente de ambos bucles (interior y exterior).
8.  Si `esColor` se volvió `true`, romper también el bucle exterior.
9.  Continuar los bucles solo si `esColor` sigue siendo `false`.
10. Después de que los bucles terminen (ya sea de forma natural o por interrupción), verificar el valor de `esColor`.
11. Si `esColor` es `true`, imprimir `#Color`.
12. Si `esColor` es `false`, imprimir `#Black&White`.

## Notas Adicionales
*   **Simplicidad:** Este problema está diseñado como una introducción a la lectura de matrices (o entradas bidimensionales) y la aplicación de una condición simple. No requiere algoritmos complejos.
*   **Eficiencia:** La optimización de "salida temprana" (detenerse tan pronto como se encuentra un color 'C', 'M' o 'Y') es clave para la eficiencia en casos donde la imagen es a color y el color aparece pronto en la lectura.

## Complejidad

| Tipo        | Complejidad                |
| :---------- | :------------------------- |
| Temporal    | O(N * M) (Peor caso)       |
| Espacial    | O(1) (auxiliar) / O(N*M) (almacenamiento) |

*La complejidad temporal es O(N * M) en el peor caso (una imagen completamente en blanco y negro o si el color está al final). En el mejor caso (el primer píxel es 'C', 'M' o 'Y'), es O(1). La complejidad espacial auxiliar es O(1). Si se almacena toda la cuadrícula antes de procesarla, el espacio de almacenamiento es O(N*M).*