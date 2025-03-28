// 1791B - Following Directions 
// https://codeforces.com/problemset/problem/1791/B

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
        // 2) N = Número de indicaciones
        int N;
        cin >> N;

        // Input:
        // 3) indicaciones = String de movimientos
        string indicaciones;
        cin >> indicaciones;

        // Coordenadas
        int x = 0;
        int y = 0;

        // Alperen llegó a estar sobre el dulce?
        bool sobre_dulce = false;

        // Itera sobre cada caso de prueba
        for(int indice_indicacion = 0; indice_indicacion < N; indice_indicacion++) {
            if(indicaciones[indice_indicacion] == 'L') {
                x--;
            }
            else if(indicaciones[indice_indicacion] == 'R') {
                x++;
            }
            else if(indicaciones[indice_indicacion] == 'U') {
                y++;
            }
            else if(indicaciones[indice_indicacion] == 'D') {
                y--;
            }

            // ¿Alperen está sobre el dulce?
            if(x == 1 && y == 1) {
                sobre_dulce = true;
            }
        }

        // Si Alperen estuvo sobre el dulce, entonces imprime "YES", de lo contrario, imprime "NO"
        if(sobre_dulce == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }

    return 0;
}