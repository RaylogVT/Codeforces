// 2044A - Easy Problem 
// https://codeforces.com/problemset/problem/2044/A

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
        // 2) N = Número 
        int N;
        cin >> N;

        // Calcula el número de pares
        int pares = N - 1;

        // Imprime el número de pares
        cout << pares << endl;
    }

    return 0;
}