// XXXA - 
// https://codeforces.com/problemset/problem/XXX/A

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
        // 2) N = Número de elementos
        int N;
        cin >> N;

        // Input:
        // 2) multiset = Números a emparejar
        int multiset[201];
        for(int indice_numero = 0; indice_numero < 2*N; indice_numero++) {
            cin >> multiset[indice_numero];
        }

        // Contador de números impares
        int impares = 0;

        // Itera sobre los números del multiset
        for(int indice_numero = 0; indice_numero < 2*N; indice_numero++) {
            
            //Si el número es impar, entonces suma +1 al contador de impares
            if(multiset[indice_numero] % 2 == 1) {
                impares++;
            }
        }

        // Si el contador de números impares es igual a N, entonces se pueden generar parejas de sumas impares
        // Imprime "YES" si se pueden formar parejas de sumas impares, de lo contrario, imprime "NO"
        if(impares == N) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}