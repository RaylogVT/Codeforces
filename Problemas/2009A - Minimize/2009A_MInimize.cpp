// 2009A - Minimize!
// https://codeforces.com/problemset/problem/2009/A

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
        // 2) a,b = Rango de números
        int a,b;
        cin >> a >> b;

        // Calcula (c-a) + (b-c) = b-a
        // Imprime el resultado
        cout << b - a << endl; 
    }

    return 0;
}