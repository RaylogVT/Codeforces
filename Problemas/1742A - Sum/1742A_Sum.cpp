// 1742A - Sum
// https://codeforces.com/problemset/problem/1742/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) prueba = Casos de prueba
    int pruebas;
    cin >> pruebas;

    // Realiza cada caso de prueba
    for(int prueba_actual = 0; prueba_actual < pruebas; prueba_actual++) {

        // Input
        // 2) a, b, c = Números a sumar
        int a, b, c;
        cin >> a >> b >> c;

        // Checa si al sumar dos pares de números dan como resultado el tercero
        // Prueba todas las combinaciones de pares de números
        if(a == b + c || b == a + c || c == a + b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
