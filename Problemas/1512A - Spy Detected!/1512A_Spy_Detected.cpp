// 1512A - Spy Detected!
// https://codeforces.com/problemset/problem/1512/A

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

    // Realiza cada caso de prueba
    for(int prueba_actual = 0; prueba_actual < pruebas; prueba_actual++) {

        // Input:
        // 2) númoero = Cantidad de números en el arreglo
        int numeros;
        cin >> numeros;

        // Input:
        // 3) arreglo = Arreglo de números
        int arreglo[10000];
        for(int indice_numero = 0; indice_numero < numeros; indice_numero++) {
            cin >> arreglo[indice_numero];
        }
        
        // Itera sobre los pares de numeros
        for(int indice_numero = 0; indice_numero < numeros; indice_numero++) {

            // Si la frecuencia del número actual es igual a 1, entonces es el número distinto
            if(count(arreglo, arreglo + numeros, arreglo[indice_numero]) == 1) {

                // Imprime el índice del número distinto
                cout << indice_numero + 1 << endl;
            }
        }
    }

    return 0;
}