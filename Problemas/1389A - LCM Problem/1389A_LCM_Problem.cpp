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
        // 2) L, R = Límite inferior y superior
        int L, R;
        cin >> L >> R;

        // Si 2L > R, entonces el mcm siempre será mayor a R, imprime (-1,-1)
        if(2 * L > R) {
            cout << -1 << " " << -1 << endl;

        // Si 2L <= R, entonces el mcm más pequeño dentro del rango es (L,2L)
        } else {
            cout << L << " " << 2 * L << endl;
        }
    }

    return 0;
}