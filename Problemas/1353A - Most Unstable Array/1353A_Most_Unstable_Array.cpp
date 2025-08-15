// 1353A - Most Unstable Array
// https://codeforces.com/problemset/problem/1353/A

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
        // 2) N = Cantidad de números
        // 3) M = Suma de números
        int N, M;
        cin >> N >> M;

        // Imprime la suma de diferencia de números contiguos 
        if(N == 1) {
            cout << 0 << endl;
        } else if(N == 2) {
            cout << M << endl;
        } else if(N > 2) {
            cout << 2*M << endl;
        }
    }

    return 0;
}