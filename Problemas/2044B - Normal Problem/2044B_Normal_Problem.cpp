// 2044B - Normal Problem
// https://codeforces.com/problemset/problem/2044/B

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
        // 2) string_frontal = String visto desde afuera de la tienda
        string string_frontal;
        cin >> string_frontal;

        // String visto desde adentro de la tienda
        string string_trasero = "";

        int longitud_string = string_frontal.length();

        // Itera sobre el string frontal de derecha a izquierda
        for(int indice_letra = longitud_string - 1; indice_letra >= 0; indice_letra--) {

            // Las p's vistas desde afuera son q's desde adentro
            if(string_frontal[indice_letra] == 'p') {
                string_trasero += 'q';
            }
            
            // Las q's vistas desde afuera son p's desde adentro
            if(string_frontal[indice_letra] == 'q') {
                string_trasero += 'p';
            }

            // Las w's vistas desde afuera se mantienen igua
            if(string_frontal[indice_letra] == 'w') {
                string_trasero += 'w';
            }
        }

        // Imprime el string visto desde adentro de la tienda
        cout << string_trasero << endl;
    }

    return 0;
}