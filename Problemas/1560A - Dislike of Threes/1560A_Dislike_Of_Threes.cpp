// 1560A - Dislike of Threes
// https://codeforces.com/problemset/problem/1560/A

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

        // Número natural a revisar
        int numero_actual = 0;

        // Input:
        // 2) kesimo_numero = K-ésimo número que no es multiplo de 3 ni termina en 3
        int kesimo_numero;
        cin >> kesimo_numero;

        // Itera sobre los números naturales
        while(kesimo_numero > 0) {

            // Avanza al siguiente número
            numero_actual++;

            // Determina si el número actual no es múltiplo de 3 ni termina en 3
            if(numero_actual % 3 != 0 && numero_actual % 10 != 3) {

                // Si lo es, entonces avanza al siguiente i-ésimo número
                kesimo_numero--;
            }
        }

        // Imprime el k-ésimo número que no es múltiplo de 3 ni termina en 3
        cout << numero_actual << endl;
    }

    return 0;
}