// 1520B - Ordinary Number
// https://codeforces.com/problemset/problem/1520/B

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
        // 2) N = Límite superior
        int N;
        cin >> N;

        // Contador de números ordinarios
        int numeros_ordinarios = 0;

        // Itera sobre cada par (Dígito, Cantidad)
        for(int digito = 1; digito < 10; digito++) {
            for(int cantidad = 1; cantidad < 10; cantidad++) {
                
                // Si el número ordinario es menor a N, entonces se suma al contador
                if((digito * (pow(10,cantidad) - 1) / 9) <= N) {
                    numeros_ordinarios++;
                }
            }
        }

        // Imprime la cantidad de números ordinarios encontrados
        cout << numeros_ordinarios << endl;

    }

    return 0;
}