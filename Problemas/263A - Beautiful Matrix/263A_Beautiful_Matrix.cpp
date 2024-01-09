// 263A - Beautiful Matrix
// https://codeforces.com/problemset/problem/263/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main() {

    // Input:
    // 1) matriz = Matriz de 0s y 1
    int matriz[5][5];
    for(int fila = 0; fila < 5; fila++) {
        for(int columna = 0; columna < 5; columna++) {
            cin >> matriz[fila][columna];
        }
    }

    // Índices de la fila y columna donde está el 1
    int fila1, columna1;

    // Recorre la matriz hasta encontrar el 1
    // Guarda el índice de la fila y columna donde está el 1
    for(int fila = 0; fila < 5; fila++) {
        for(int columna = 0; columna < 5; columna++) {
            if(matriz[fila][columna] == 1) {
                fila1 = fila;
                columna1 = columna;
            }
        }
    }

    // Calcula el número de movimientos para mover el 1 al centro de la matriz
    int movimientos = abs(fila1-2) + abs(columna1-2);

    // Imprime el número de movimientos
    cout << movimientos << endl;

    return 0;
}
