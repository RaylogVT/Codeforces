// 1722B - Colourblindness
// https://codeforces.com/problemset/problem/1722/B

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
        // 2) columnas = Número de celdas por fila
        int columnas;
        cin >> columnas;

        // Input:
        // 3) fila1 = Fila 1 de la matriz
        string fila1;
        cin >> fila1;

        // Input:
        // 4) fila2 = Fila 2 de la matriz
        string fila2;
        cin >> fila2;

        // Itera sobre las columnas de ambas filas
        for(int indice_columna = 0; indice_columna < columnas; indice_columna++) {
            
            // Si la columna en ambas filas no es igual, entonces se checan sus colores
            if(fila1[indice_columna] != fila2[indice_columna]) {

                // Si la columna en la fila 1 es verde (G) y en la fila 2 es azul (B), entonces se actualiza el de la fila 1 a azul (B)  
                if(fila1[indice_columna] == 'G' && fila2[indice_columna] == 'B') {
                    fila1[indice_columna] = 'B';
                }
                // Si la columna en la fila 1 es azul (B) y en la fila 2 es verde (G), entonces se actualiza el de la fila 1 a verde (G)    
                if(fila1[indice_columna] == 'B' && fila2[indice_columna] == 'G') {
                    fila1[indice_columna] = 'G';
                }
            }
        }

        // Si Vasya ve las dos filas iguales (tras el cambio de color en la fila 1), entonces imprime "YES", de lo contrario, imprime "NO"
        if(fila1 == fila2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}