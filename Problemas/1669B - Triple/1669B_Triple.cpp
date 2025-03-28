// 1669B - Triple
// https://codeforces.com/problemset/problem/1669/B

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) pruebas = Número de casos de prueba
    int pruebas;
    cin >> pruebas;

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {

        // Input:
        // 2) N = Números de elementos en el arreglo
        int N;
        cin >> N;

        // Input:
        // 3) arreglo = Arreglo de números
        int arreglo[200001];
        for(int indice_numero = 0; indice_numero < N; indice_numero++) {
            cin >> arreglo[indice_numero];
        }

        // Ordena los números de menor a mayor
        sort(arreglo, arreglo + N);

        // Número que aparece 3 veces en el arreglo
        // Se asume que no existe de primeras (-1)
        int triplete = -1;

        // Si el arreglo tiene 1 sólo número con 3 instancias, entonces se actualiza la variable de búsqueda
        if(arreglo[0] == arreglo[N-1] && N >= 3) {
            triplete = arreglo[0];

        // Si el arreglo tiene 2 o más números distintos, entonces se subagrupan
        } else {

            // Itera sobre la lista de números
            for(int indice_numero = 0; indice_numero < N; indice_numero++) {

                // ¿Cuál es el número actual a contar?
                int numero_actual = arreglo[indice_numero];
                int contador = 0;

                // Itera sobre los grupos de números
                for(int indice_numero_actual = indice_numero; indice_numero_actual < N; indice_numero_actual++) {

                    // Suma +1 al contador por cada número igual al actual que se va encontrando
                    if(arreglo[indice_numero_actual] == numero_actual) {
                        contador += 1;

                        // Si el último número es el que aparece 3 o más veces en el arreglo, entonces se actualiza la variable de búsqueda
                        // Se mueve el índice hasta el final para terminar la iteración
                        if(indice_numero_actual == N-1 && contador >= 3) {
                            indice_numero = indice_numero_actual;
                            triplete = numero_actual;
                        }

                    } else {

                        // Actualiza la localidad del arreglo para iniciar a buscar el próximo número
                        indice_numero = indice_numero_actual - 1;

                        // Si algún número tiene 3 ocurrencias en el arreglo, entonces se actualiza la variable de búsqueda
                        if(contador >= 3) {
                            triplete = numero_actual;
                        }
                        break;
                    }
                }
            }
        }

        // Imprime el número que aparece 3 veces en el arreglo
        cout << triplete << endl;
    }

    return 0;
}