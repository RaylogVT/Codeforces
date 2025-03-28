// 1915A - Odd One Out
// https://codeforces.com/problemset/problem/XXX/A

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
        // 2) a,b,c = Dígitos
        int a,b,c;
        cin >> a >> b >> c;

        // Determina cuál es el par de número igual
        // Imprime el número disinto (el que no se comparó)
        if(a == b) {
            cout << c << endl;
        } else if(b == c) {
            cout << a << endl;
        } else if(a == c) {
            cout << b << endl;
        }
    }

    return 0;
}