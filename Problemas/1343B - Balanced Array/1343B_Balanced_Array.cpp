// 1343B - Balanced Array 
// https://codeforces.com/problemset/problem/1343/B

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

    // Itera sobre los casos de prueba
    for(int prueba_actual = 0; prueba_actual < pruebas; prueba_actual++) {

        // Input:
        // 2) N = Longitud del arreglo
        int n;
        cin >> n;

        // Si N es divisible entre 4, entonces se puede generar el arreglo, de lo contrario, no se puede generar
        if(n % 4 == 0) {
            cout << "YES" << endl;

            // Itera de 1 a n/2
            for(int numero = 1; numero < n/2 + 1; numero++) {

                // Genera la 1° mitad del arreglo
                cout << numero * 2 << " ";
            }

            // Itera de 1 a n/2
            for(int numero = 1; numero < n/2 + 1; numero++) {
                
                // Detecta si es el último número de la 2° mitad
                if(numero == n/2) {

                    // Genera el último número del arreglo
                    cout << numero * 3 - 1 << endl;
                } else {

                    // Genera la 2° mitad del arreglo
                    cout << numero * 2 - 1 << " ";
                }
            }

        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}