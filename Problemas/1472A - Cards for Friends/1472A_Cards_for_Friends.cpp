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
        // 2) ancho = Ancho de la hoja
        // 3) alto = Alto de la hoja
        // 4) amigos = Número de amigos de Policarpio
        int ancho, alto, amigos;
        cin >> ancho >> alto >> amigos;

        // Cantidad de postales generadas
        int postales = 1;

        // Duplica la cantidad de postales por corte a lo ancho
        while(ancho % 2 == 0 && ancho > 0) {
            postales *= 2;
            ancho = ancho / 2;
        }

        // Duplica la cantidad de postales por corte a lo alto
        while(alto % 2 == 0 && alto > 0) {
            postales *= 2;
            alto = alto / 2;
        }

        // ¿Policarpio tiene suficientes postales?
        if(postales >= amigos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}