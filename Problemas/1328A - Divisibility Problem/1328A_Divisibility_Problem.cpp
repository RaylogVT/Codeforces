// 1328A - Divisibility Problem 
// https://codeforces.com/problemset/problem/1328/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) pruebas = Número de pruebas
    int pruebas;
    cin >> pruebas;

    // Realiza cada caso de prueba
    for(int prueba_actual = 0; prueba_actual < pruebas; prueba_actual++) {

        // Input:
        // 2) a, b = Números a dividir
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
