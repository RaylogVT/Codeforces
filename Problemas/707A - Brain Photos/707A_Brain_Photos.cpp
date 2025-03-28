// 707A - Brain Photos 
// https://codeforces.com/problemset/problem/707/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) N, M = Dimensiones de la foto
    int N, M;
    cin >> N >> M;

    // Input:
    // 2) pixeles = Matriz de colores de pixeles
    char pixeles[101][101];
    for(int fila = 0; fila < N; fila++) {
        for(int columna = 0; columna < M; columna++) {
            cin >> pixeles[fila][columna];
        }
    }

    // Variable bandera
    // Asume que la foto es Blanco y Negro
    bool photoIsBlackAndWhite = true;

    // Itera sobre los pixeles de la foto
    // Si algún pixel es igual a C,Y,M (Cyan, Magenta, Yellow), entonces la foto es Color
    // Si ninguún pixel es igual a C,Y,M (Cyan, Magenta, Yellow), entonces la foto es Blanco y Negro
    for(int fila = 0; fila < N; fila++) {
        for(int columna = 0; columna < M; columna++) {
            if(pixeles[fila][columna] == 'C' || pixeles[fila][columna] == 'Y' || pixeles[fila][columna] == 'M') {
                photoIsBlackAndWhite = false;
            }
        }
    }

    // Revisa la variable bandera para determinar si la foto es Blanco y negro o Color
    if(photoIsBlackAndWhite == true) { 
        cout << "#Black&White" << endl;
    } else {
        cout << "#Color" << endl;
    }

    return 0;
}