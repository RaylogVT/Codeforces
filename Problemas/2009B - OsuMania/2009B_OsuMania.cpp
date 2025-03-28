// 2009B - OsuMania
// https://codeforces.com/problemset/problem/2009/B

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
        // 2) filas = Número de filas del beatmap
        int filas;
        cin >> filas;

        // Beatmap = Lista de filas
        vector<string> beatmap;

        // Itera sobre cada fila del beatmap
        for(int indice_fila = 0; indice_fila < filas; indice_fila++) {

            // Input:
            // 3) fila_actual = Fila actual del beatmap
            string fila_actual;
            cin >> fila_actual;

            // Inserta la fila en el beatmap
            beatmap.push_back(fila_actual);
        }

        // Itera sobre cada fila del beatmap de abajo a arriba
        for(int indice_fila = filas-1; indice_fila >= 0; indice_fila--) {

            // Extrae el número de columna donde se encuentra la nota
            int columna = beatmap[indice_fila].find('#') + 1;
            
            // Escribe la última nota sin espacio en blanco, con salto de línea
            if(indice_fila == 0) {
                cout << columna << endl;
            } else {
                // Escribe las notas de cada columna en una sola línea
                cout << columna << " ";
            }
        }
    }

    return 0;
}