// 1915C - Can I Square
// https://codeforces.com/problemset/problem/1915/C

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
        // 2) cubetas = Número de cubetas con tablones
        int cubetas;
        cin >> cubetas;

        // Input:
        // 3) tablones = Número de cubetas con tablones
        int tablones[200001];
        for(int indice_cubeta = 0; indice_cubeta < cubetas; indice_cubeta++) {
            cin >> tablones[indice_cubeta];
        }

        // Calcula la suma total de tablones
        long long total_tablones = 0;
        for(int indice_cubeta = 0; indice_cubeta < cubetas; indice_cubeta++) {
            total_tablones += tablones[indice_cubeta];
        }

        // Saca la raíz cuadrada del total de tablones
        long long cuadrado = sqrt(total_tablones);

        // Si el número es cuadrado, entonces imprime 'YES', de lo contrario, imprime 'NO'
        if(cuadrado * cuadrado == total_tablones) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}