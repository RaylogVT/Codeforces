https://codeforces.com/problemset/problem/1399/A

# 1399A - Remove Smallest

## Resumen del problema
En un arreglo de números A, puedes elegir dos índices i,j (i != j) de tal forma que la diferencia absoluta entre Ai y Aj no es mayor a 1 (|Ai - Aj| <= 1) y eliminar el número menor de los dos (si ambos son iguales, entonces puedes eliminar cualquiera de los dos). Con estas acciones, ¿es posible reducir el arreglo a un solo elemento?

## Input
La 1° línea contiene un número entero T (1 <= T <= 1000) - El número de casos de prueba
La 1° línea del caso de prueba contiene un número entero N (1 <= N <= 50) - La cantidad de números en el arreglo
La 2° línea del caso de prueba contiene N números enteros Ai (1 <= Ai < 100) -  Los números del arreglo

## Output
Imprime "YES" si es posible reducir el arreglo a un solo número, de lo contrario, imprime "NO"

## Ejemplos
| Input             | Razonamiento  | Output    |
| ----------------- | :------------ | --------- |
| 2 <br> 3 <br> 1 2 2 <br> 3 <br> 1 2 4 | <br><br> 1 2 2 <br> (1,2),2 --> 2 - 1 = 1 <= 1 --> Elimina 1 --> 2 2 <br> (2,2) --> 2 - 2 = 0 <= 1--> Elimina 2 --> 2 <br> <br> 1 2 4 <br> 1,(2,4) --> 4 - 2 = 2 > 1 --> No se puede eliminar <br> | <br><br><br> **YES** <br><br> **NO** |

## Forma de resolverlo
Para resolver este problema, primero debemos pensar cómo vamos a ir eligiendo los números a restar y eliminar. Para ello, en vez de elegir dos índices i,j de manera arbitraria o probar todas las combinaciones de pares de índices, podemos hacer lo siguiente: **Elige i,j de tal forma que la resta |Ai - Aj| sea la menor posible**. ¿Cómo hacemos esto? 

Bueno, **¿Y si ordenamos el arreglo de números de menor a mayor?** Al hacer esto, aseguramos que |Ai - Aj| sea el menor valor posible, y así, en vez de probar todos los pares (i,j) posibles, simplemente probamos aquellos que sean **adyacentes**. Ahora bien, con el número de restas |Ai - Aj| a realizar, simplemente debemos revisar sel resultado de las restas: Si todas son menor o igual a 1, entonces sí se puede reducir el arreglo a uu solo número. Por el otro lado, si alguna de estas es mayor a 1, entonces no se puede reducir el arreglo a un solo número, puesto que sólo se puede eliminar el número menor siempre y cuando |Ai - Aj| <= 1. 

## Algoritmo
1) Ordena los números del arreglo de menor a mayor
2) Asume inicialmente que la respuesta es SÍ
3) Itera sobre los pares de números adyacentes en el arreglo ordenado
4) Resta los pares números adyacentes
a) Si alguna resta es mayor a 1, entonces la respuesta del caso de prueba es NO \
b) Si ninguna resta en mayor a 1, entonces la respuesta del caso de prueba es SÍ
