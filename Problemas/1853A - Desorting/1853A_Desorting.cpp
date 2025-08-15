// 1853A - Desorting  
// https://codeforces.com/problemset/problem/1858/A

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
        // 2) N = Cantidad de números
        int N;
        cin >> N;

        // Input:
        // 3) arreglo = Arreglo de números
        int arreglo[501];
        for(int indice_numero = 0; indice_numero < N; indice_numero++) {
            cin >> arreglo[indice_numero];
        }


        // Si el arreglo está de-sorteado, entonces imprime 0
        // Si el arreglo está de-sorteado, entonces una resta entre dos números será negativa
        bool desorteado = false;
        for(int indice_numero = 1; indice_numero < N; indice_numero++) {
            if((arreglo[indice_numero] - arreglo[indice_numero-1]) < 0) {
                desorteado = true;    
            }
        }

        if(!desorteado) {
            // Resta más chica entre dos números contiguos
            int resta_minima = INT_MAX;

            // Itera sobre el arreglo
            for(int indice_numero = 1; indice_numero < N; indice_numero++) {

                // Resta dos números contiguos
                int resta_actual = arreglo[indice_numero] - arreglo[indice_numero-1];

                // Si la resta actual entre dos números es menor a la mínima actual, entonces la mínima se actualiza
                if(resta_actual < resta_minima) {
                    resta_minima = resta_actual;
                }
            }

            // Calcula la cantidad de operaciones para de-sorteear el arreglo
            int operaciones = (resta_minima / 2) + 1;

            // Imprime la cantidad de operaciones para de-sorteear el arreglo
            cout << operaciones << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}