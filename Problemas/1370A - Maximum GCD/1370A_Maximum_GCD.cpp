// 1370A - Maximum GCD
// https://codeforces.com/problemset/problem/1370/A

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
        // 2) N = Límite del rango 1-N
        int N;
        cin >> N;

        // Calcula el MCD más grande de los pares entre 1 a N
        int GCD = N / 2;

        // Imprime el MCD
        cout << GCD << endl;
    } 
    
    return 0;
}