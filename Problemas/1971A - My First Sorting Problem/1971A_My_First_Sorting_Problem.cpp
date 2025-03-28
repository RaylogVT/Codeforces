// 1971A - My First Sorting Problem
// https://codeforces.com/problemset/problem/1971/A

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
        // 2) x,y = Número a comparar
        int x,y;
        cin >> x >> y;

        // Imprime el número más chico, luego el número más grande
        cout << min(x,y) << " " << max(x,y) << endl;
    }

    return 0;
}