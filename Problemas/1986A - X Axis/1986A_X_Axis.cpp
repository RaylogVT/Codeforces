// XXXA -  
// https://codeforces.com/problemset/problem/1858/A

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
        // 2) x1,x2,x3 = Coordenadas de los puntos
        int x1,x2,x3;
        cin >> x1 >> x2 >> x3;

        // Lista de puntos
        vector<int> coordenadas = {x1,x2,x3};

        // Ordena los puntos de menor a mayor
        sort(coordenadas.begin(), coordenadas.end());

        // Distancia = Punto mayor - Punto menor
        int distancia = coordenadas[2] - coordenadas[0];

        // Imprime la distancia mínima a recorrer
        cout << distancia << endl;
    }

    return 0;
}