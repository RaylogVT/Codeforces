// 144A - Arrival Of The General
// https://codeforces.com/problemset/problem/144/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) Número de soldados
    int soldados;
    cin >> soldados;

    // Input:
    // 2) Altura de soldados
    int alturas[soldados];
    for(int soldado_actual = 0; soldado_actual < soldados; soldado_actual++) {
        cin >> alturas[soldado_actual];
    }

    // Altura del soldado más alto
    int altura_alto = *max_element(alturas, alturas + soldados);

    // Altura del soldado más bajo
    int altura_bajo = *min_element(alturas, alturas + soldados);
    
    // Posición del soldado más alto
    // Se asume que la peor posición posible es al final
    int posicion_alto = (sizeof(alturas)/sizeof(int)) - 1;

    // Posición del soldado más bajo
    // Se asume que la peor posición posible es al inicio
    int posicion_bajo = 0;

    // Itera sobre la fila de soldados de derecha a izquierda
    for(int posicion_soldado = soldados-1; posicion_soldado >= 0; posicion_soldado--) {

        // ¿El soldado actual tiene la altura máxima?
        if(alturas[posicion_alto] == altura_alto) {

            // ¿El soldado está más cerca del inicio?
            if(posicion_soldado < posicion_alto) {

                // Actualiza la posición del soldado con la altura más alta más cercana al inicio
                posicion_alto = posicion_soldado;
            }
        }
    }

    // Itera sobre la fila de soldados de izquierda a derecha
    for(int posicion_soldado = soldados-1; posicion_soldado >= 0; posicion_soldado--) {

        // ¿El soldado actual tiene la altura mínima?
        if(alturas[posicion_alto] == altura_bajo) {

            // ¿El soldado está más cerca del inicio?
            if(posicion_soldado > posicion_bajo) {

                // Actualiza la posición del soldado con la altura más alta más cercana al inicio
                posicion_bajo = posicion_soldado;
            }
        }
    }

    // Durante los intercambios, ¿el soldado más alto y más bajo cambian de lugar entre si?
    // Si cambian de lugar, entonces el intercambio le ahorrará 1 segundo a alguno de los dos
    int cruce_alto_bajo = 0;

    // Si el soldado más alto está a la derecha del soldado más bajo, entonces intercambiarán lugares entre sí
    if(posicion_alto > posicion_bajo) {
        cruce_alto_bajo = 1;
    }

    // Calcula el número de segundos para mover al soldado más alto al inicio y al más bajo al final
    int segundos = posicion_alto + (soldados - 1 - posicion_bajo) - cruce_alto_bajo;

    // Imprime los segundos transcurridos
    cout << segundos << endl;

    return 0;
}