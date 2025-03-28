// 1850A - To My Critics
// https://codeforces.com/problemset/problem/1850/A

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
        // 2) a, b, c = Dígitos a sumar
        int a,b,c;
        cin >> a >> b >> c;

        // Revisa si alguna combinación de pares ((a,b), (b,c), (a,c)) da una suma mayor o igual a 10
        // Si algún par da una suma mayor o igual a 10, entonces imprime "YES", de lo contrario, imprime "NO"
        if(a + b >= 10 || b + c >= 10 || a + c >= 10) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }

    return 0;
}