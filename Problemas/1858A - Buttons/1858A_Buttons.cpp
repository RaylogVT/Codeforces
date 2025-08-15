// XXXA - 
// https://codeforces.com/problemset/problem/XXX/A

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

        // # Input:
        // 2) anna = Número de botones exclusivos de Anna
        // 3) katie = Número de botones exclusivos de Katie
        // 4) ambas = Número de botones compartidos
        int anna, katie, ambas;
        cin >> anna >> katie >> ambas;

        // Si la cantidad de botones compartidos es par, entonces Anna empieza presionando los suyos primero
        if(ambas % 2 == 0) {

            // Si Anna tiene más botones que Katie, entonces Anna gana, de lo contrario, gana Katie
            if(anna > katie) {
                cout << "First" << endl;
            } else {
                cout << "Second" << endl;
            }
        }

        // Si la cantidad de botones compartidos es impar, entonces Katie empieza presionando los suyos primero
        if(ambas % 2 == 1) {

            // Si Anna tiene más o la misma cantidad de botones que Katie, entonces Anna gana, de lo contrario, gana Katie
            if(anna >= katie) {
                cout << "First" << endl;
            } else {
                cout << "Second" << endl;
            }
        }
    }

    return 0;
}