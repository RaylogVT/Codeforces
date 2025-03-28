// 1873A - Short Sort
// https://codeforces.com/problemset/problem/1873/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) pruebas = Número de casos de prueba a realizar
    int pruebas;
    cin >> pruebas;

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {
        
            // Input:
            // 1) cartas = Cartas (escritas en el orden que están)
            string cartas;
            cin >> cartas;

            // Variables auxiliares para realizar los intercambios de cartas
            string swap01 = cartas;
            string swap12 = cartas;
            string swap02 = cartas;

            // Prueba todas las combinaciones de intercambio de cartas
            // Guarda los resultados en las variables auxiliares
            swap(swap01[0], swap01[1]);
            swap(swap12[1], swap12[2]);
            swap(swap02[0], swap02[2]);
            
            // Checa si alguna de las combinaciones de intercambio da 'abc' como resultado
            // Checa si las cartas dan 'abc' tal como estaban ordenadas inicialmente
            // Si alguna combinación da 'abc', entonces imprime 'YES', de lo contrario, imprime 'NO'
            if(swap01 == "abc" || swap12 == "abc" || swap02 == "abc" || cartas == "abc") {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
    }

    return 0;
}