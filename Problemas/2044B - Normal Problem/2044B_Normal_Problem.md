https://codeforces.com/problemset/problem/2044/B

# 2044B - Normal Problem

## Resumen del problema
Una tienda tiene pintado en una ventana un string con las letras `p`,`q`,`w`. \
Cuando Ship ve el string desde afuera de la tienda, observa el string `a`, pero cuando lo desde adentro, observa el string `b`. \
Dado el string `a`, encuentra `b`.

## Input
La 1° línea contiene un número entero `N` (`1 <= N <= 100`) -- El número de casos de prueba \
La única línea por cada caso de prueba contiene un string `a` (`1 <= |a| <= 100`) -- El string visto desde afuera de la tienda.

## Output
Por cada caso de prueba, imprime un string -- El string visto desde afuera de la tienda.

## Ejemplos
| Input         | Razonamiento                | Output          |
| :----         | :-------------------        | ---------       |
| 5             |                             |                 |
| qwq           | qwq pwp <br> 012 210        | **pwp**         |
| ppqqp         | fungus - us + i = fungi     | **qppqq**       |
| pppwwwqqq     | amogus - us + i = amogi     | **pppwwwqqq**   |
| wqpqwpqwwqp   | cactus - us + i = cacti     | **qpwwpqwpqpw** |

## Forma de resolverlo
Para entender el problema, debemos plantear cómo se ve el string desde ambas perspectivas de la tienda. \
Suponiendo que 

La forma más sencilla de resolver este problema es simplemente removiendo el sufijo singular **"us"** del sustantivo y añadirle el sufijo plural **"i"**.

Para eliminar el sufijo **"us"**, podemos usar índices para iterar sobre el string e **ignorar las últimas dos letras**. \
De ahí solamente tenemos que concatenar el sufijo **"i"** con una operación de suma **(+)**.

## Algoritmo
1) Remueve el sufijo singular "us" del sustantivo
2) Agrega el sufijo plural "i" al sustantivo