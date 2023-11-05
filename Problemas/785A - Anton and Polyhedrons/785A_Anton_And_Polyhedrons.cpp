// 785A - Anton and Polyhedrons
// https://codeforces.com/problemset/problem/785/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) Número de poliedros
    int poliedros;
    cin >> poliedros;

    // Número de caras entre todos los poliedros
    int caras = 0;

    // Itera sobre las denominaciones
    for(int poliedro_indice = 0; poliedro_indice < poliedros; poliedro_indice++) {

        // Inputs:
        // 2) Poliedro actual
        string poliedro_actual;
        cin >> poliedro_actual;

        // Detecta el tipo de poliedro
        // Suma las caras del poliedro al contador
        if(poliedro_actual == "Tetrahedron") {
            caras = caras + 4;
        } else if(poliedro_actual == "Cube") {
            caras = caras + 6;
        } else if(poliedro_actual == "Octahedron") {
            caras = caras + 8;
        } else if(poliedro_actual == "Dodecahedron") {
            caras = caras + 12;
        } else if(poliedro_actual == "Icosahedron") {
            caras = caras + 20;
        }
    }

    // Imprime el número de caras totales contadas
    cout << caras << endl;

    return 0;
}