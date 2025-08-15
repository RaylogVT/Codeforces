// 1729A - Two Elevators
// https://codeforces.com/problemset/problem/1729/A

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
        // 1) a = Piso del Elevador #1
        // 2) b = Piso del Elevador #2
        // 3) c = Piso intermedio hacia el cual se dirige primero el Elevador #2
        int a,b,c;
        cin >> a >> b >> c;

        // Calcula los segundos que toma cada elevador en llegar al Piso #1
        int segundosElevador1 = a - 1;
        int segundosElevador2 = abs(b - c) + abs(c - 1);

        // Compara la duración de ambos elevadores
        if(segundosElevador1 < segundosElevador2) {
            cout << 1 << endl;
        } else if(segundosElevador1 > segundosElevador2) {
            cout << 2 << endl;
        } else if(segundosElevador1 == segundosElevador2) {
            cout << 3 << endl;
        }
    }

    return 0;
}