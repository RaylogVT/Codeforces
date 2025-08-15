// 1454A - Special Permutation
// https://codeforces.com/problemset/problem/1454/A

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
        // 2) N = Lonitud de la permutación
        int N;
        cin >> N;

        // Imprime los número del 2 a N, luego 1
        for(int num = 2; num <= N; num++)
            cout << num << " ";
        cout << 1 << endl;
    }

    return 0;
}