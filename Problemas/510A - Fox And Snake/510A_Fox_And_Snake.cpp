// 510A - Fox and Snake 
// https://codeforces.com/problemset/problem/510/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) n_filas = Número de filas en el tablero
    // 2) m_columnas = Número de columnas en el tablero
    int n_filas, m_columnas;
    cin >> n_filas >> m_columnas;

    // Construye la serpiente
    for(int fila = 1; fila <= n_filas; fila++) {

        // Imprime la serpiente moviéndose en filas impares
        if(fila % 2 == 1) {

            // Llena la fila de #
            for(int columna = 1; columna <= m_columnas; columna++) {
                cout << "#";
            }
        }

        // Imprime la serpiente moviéndose del lado derecho
        if(fila % 2 == 0 && fila % 4 != 0) {

            // Llena la fila de puntos excepto en la última columna
            for(int columna = 1; columna <= m_columnas; columna++) {
                if(columna == m_columnas) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
        }

        // Imprime la serpiente moviéndose del lado derecho
        if(fila % 4 == 0) {

            // Llena la fila de puntos excepto en la última columna
            for(int columna = 1; columna <= m_columnas; columna++) {
                if(columna == 1) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
        }

        cout << endl;
    }

    return 0;
}
