// 1985B - Maximum Multiple Sum
// https://codeforces.com/problemset/problem/1985/B

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
        // 2) N = Límite
        int N;
        cin >> N;

        // Si N es 3, entonces X = 3
        // Si N es cualquier otro número, entonces X = 2
        if(N == 3) {
            cout << 3 << endl;
        } else {
            cout << 2 << endl;
        }

    }

    return 0;
}