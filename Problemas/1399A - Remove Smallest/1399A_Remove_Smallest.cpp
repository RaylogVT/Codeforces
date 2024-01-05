// 1399A - Remove Smallest
// https://codeforces.com/problemset/problem/1399/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) pruebas - Casos de prueba
    int pruebas;
    cin >> pruebas;

    // Realiza cada caso de prueba
    for(int prueba_actual = 0; prueba_actual < pruebas; prueba_actual++) {

        // Input
        // 2) elementos - Número de elementos en el arreglo
        int elementos;
        cin >> elementos;

        // Input
        // 3) numeros - Arreglo de elementos
        int numeros[50];
        for(int indice = 0; indice < elementos; indice++) {
            cin >> numeros[indice];
        }

        // Saca la longitud del arreglo
        int longitud = sizeof(numeros) / sizeof(numeros[0]);

        // Ordena los números de menor a mayor
        sort(numeros, numeros + elementos);

        // Asume inicialmente que la respuesta a la prueba es "YES"
        string respuesta = "YES";

        // Itera sobre los pares de numeros
        for(int indice = 1; indice < elementos; indice++) {

            // Si una resta es mayor a 1, entonces NO se puede reducir el arreglo a 1 elementos
            // Settea la respuesta como "NO"
            if(numeros[indice] - numeros[indice-1] > 1) {
                respuesta = "NO";
                break;
            }
        }

        // Imprime el resultado de la prueba
        cout << respuesta << endl;
    }

    return 0;
}
