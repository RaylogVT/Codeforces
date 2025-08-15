// 1325A - EhAb AnD gCd  
// https://codeforces.com/problemset/problem/1325/A

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
        // 2) x = Número a sumar
        int x;
        cin >> x;

        // Calcula e imprime A y B
        cout << 1 << " " << x - 1 << endl;
    }

    return 0;
}