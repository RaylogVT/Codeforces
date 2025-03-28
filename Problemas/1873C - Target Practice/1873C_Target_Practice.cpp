// 1873C - Square 
// https://codeforces.com/problemset/problem/1873/C

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    int diana[10][10] = {{1,1,1,1,1,1,1,1,1,1},
                         {1,2,2,2,2,2,2,2,2,1},
                         {1,2,3,3,3,3,3,3,2,1},
                         {1,2,3,4,4,4,4,3,2,1},
                         {1,2,3,4,5,5,4,3,2,1}, 
                         {1,2,3,4,5,5,4,3,2,1},
                         {1,2,3,4,4,4,4,3,2,1},
                         {1,2,3,3,3,3,3,3,2,1},
                         {1,2,2,2,2,2,2,2,2,1},
                         {1,1,1,1,1,1,1,1,1,1}};
    // Input:
    // 1) pruebas = Número de casos de prueba
    int pruebas;
    cin >> pruebas;

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {

        // Input:
        // 2) flechas = Matriz con los disparos de las flechas
        char flechas[10][10];
        for(int fila = 0; fila < 10; fila++) {
            for(int columna = 0; columna < 10; columna++) {
                cin >> flechas[fila][columna];
            }
        }

        // Puntuación de Vlad
        int puntuacion = 0;
        
        // Itera sobre el mapa de flechas
        for(int fila = 0; fila < 10; fila++) {
            for(int columna = 0; columna < 10; columna++) {

                // Donde una flecha haya caído, suma los puntos correspondientes de acuerdo a la diana
                if(flechas[fila][columna] == 'X') {
                    puntuacion += diana[fila][columna];
                }
            }
        }
        
        // Imprime la puntuación final de Vlad
        cout << puntuacion << endl;
    }

    return 0;
}