// XXXA - 
// https://codeforces.com/problemset/problem/XXX/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) Número de casos
    int casos;
    cin >> casos;

    // Resuelve cada caso
    for(int num_caso = 0; num_caso < casos; num_caso++) {

        // Inputs:
        // 2) a, b - Números a dividir
        int a, b;
        cin >> a >> b;

        // Si a y b son inicialmente divisibles, entonces imprime 0 (no necesitas sumar +1)
        if(a % b == 0) {
            cout << "0" << endl;
        
        // Si a y b no son inicialmente divisibles, entonces calcula cuántos +1 debes sumar para anular el residuo de A/B
        } else {
            int sumas = b - (a % b);

            // Imprime el resultado
            cout << sumas << endl;
        }
    }

    return 0;
}