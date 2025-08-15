// 1296A - Array with Odd Sum  
// https://codeforces.com/problemset/problem/1296/A

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
    for(int indice_prueba = 0; indice_prueba < pruebas; ++indice_prueba) {

        // Input:
        // 2) N = Cantidad de elementos en el arreglo
        int N;
        cin >> N;

        // Input:
        // 3) arreglo = Números del arreglo
        int arreglo[2001];
        for(int indice_arreglo = 0; indice_arreglo < N; ++indice_arreglo) {
            cin >> arreglo[indice_arreglo];
        }

        // ¿El arreglo tiene al menos un número par?
        bool hay_par = false;

        // Contador de numeros impares
        int conteo_impares = 0;

        // Itera sobre el arreglo para determinar si hay un número impar
        for(int indice_arreglo = 0; indice_arreglo < N; ++indice_arreglo) {
            if(arreglo[indice_arreglo] % 2 == 1) {
                ++conteo_impares;
            } else {
                hay_par = true;
            }
        } 

        // Si no hay números impares, entonces no se puede obtener una suma impar
        if(conteo_impares == 0) {
            cout << "NO" << endl;

        // Si sólo hay números impares, entonces checa la cantidad que hay
        } else if(conteo_impares == N) {
            if(N % 2 == 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }

        // Si hay al menos un número impar, entonces se puede obtener una suma impar
        } else if(hay_par && conteo_impares > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}