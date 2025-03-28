// 1950A - Stair, Peak or Neither
// https://codeforces.com/problemset/problem/1950/A

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
        // 2) a,b,c = Dígitos a comparar
        int a,b,c;
        cin >> a >> b >> c;

        // Compara los dígitos entre sí
        // Si a < b < c, entonces es una escalera (STAIR)
        // Si a < b > c, entonces es un pico/cumbre (PEAK)
        if(a < b && b < c) {
            cout << "STAIR" << endl;
        } else if(a < b && b > c) {
            cout << "PEAK" << endl;
        } else {
            cout << "NONE" << endl;
        }
    }

    return 0;
}