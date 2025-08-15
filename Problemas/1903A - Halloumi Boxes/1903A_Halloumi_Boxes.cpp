// 1903A - Halloumi Boxes
// https://codeforces.com/problemset/problem/1903/A

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
        // 2) cajas = Cantidad de cajas
        // 3) longitud_reversion = Longitud máxima del subarreglo de cajas a invertir
        int cajas, longitud_reversion;
        cin >> cajas >> longitud_reversion;

        // Input:
        // 4) halloumis = Cantidad de halloumis por caja
        int halloumis[101];
        for(int indice_caja = 0; indice_caja < cajas; indice_caja++) {
            cin >> halloumis[indice_caja];
        }

        // Si la longitud de reversión es mayor a 1, entonces se pueden ordenar las cajas
        // Si las cajas ya están ordenadas de mayor a menor, entonces no se necesita invertir nada
        if(is_sorted(halloumis, halloumis + cajas) || longitud_reversion > 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}