// 1921A - Square 
// https://codeforces.com/problemset/problem/1921/A

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
        // 2) esquina1234xy = Coordenadas (x,y) de las 4 esquinas del cuadrado
        int esquina1x, esquina1y;
        cin >> esquina1x >> esquina1y;

        int esquina2x, esquina2y;
        cin >> esquina2x >> esquina2y;

        int esquina3x, esquina3y;
        cin >> esquina3x >> esquina3y;

        int esquina4x, esquina4y;
        cin >> esquina4x >> esquina4y;

        // Compara las primeras dos esquinas del cuadrado
        // Si tienen la misma X, entonces se restan las Ys para encontrar la longitud
        // Si tienen la misma Y, entonces se restan las Xs para encontrar la longitud
        int longitud;
        if(esquina1x == esquina2x) {
            longitud = abs(esquina1y - esquina2y);
        }
        else if(esquina1y == esquina2y) {
            longitud = abs(esquina1x - esquina2x);
        }
        else {
            longitud = abs(esquina1y - esquina2y);
        }

        // Calcula el área del cuadrado
        int area = pow(longitud, 2);

        // Imprime el área del cuadrado
        cout << area << endl;
    }

    return 0;
}