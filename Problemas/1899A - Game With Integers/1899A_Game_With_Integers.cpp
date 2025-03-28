// 1899A - Game With Integers
// https://codeforces.com/problemset/problem/1899/A

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
        // 2) N = Número
        int N;
        cin >> N;

        // Si N no es inicialmente divisible entre 3, entonces gana Vanya, imprime "First"
        // Si N es inicialmente divisible entre 3, entonces gana Vova, imprime "Second"
        if(N % 3 == 0) {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
    }

    return 0;
}