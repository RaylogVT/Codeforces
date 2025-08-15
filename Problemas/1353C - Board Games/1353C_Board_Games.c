// 1353C - Board Games
// https://codeforces.com/problemset/problem/1353/C

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <inttypes.h>

int main(){

    // Input:
    // 1) pruebas = Número de casos de prueba
    int pruebas;
    scanf("%d", &pruebas);

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {

        // Input:
        // 2) N = Tamaño del tablero
        uint64_t N;
        scanf("%llu", &N);

        // Calcula la distancia máxima que recorre una figura para llegar al centro
        uint64_t D = (N - 1) / 2;

        // Calcula el total de movimDentos a realizar por todas las figuras para llevarlas al centro del tablero
        uint64_t movimientos = (((((N-1)>>1)+1)*(N-1)*N)<<1)/3;
        
        // Imprime el total de movimientos a realizar
        printf("%llu\n", movimientos);
    }

    return 0;
}