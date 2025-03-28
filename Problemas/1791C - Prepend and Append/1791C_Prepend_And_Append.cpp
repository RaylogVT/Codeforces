// 1791C - Prepend and Append 
// https://codeforces.com/problemset/problem/1791/C

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
        // 2) N = Tamaño del string
        int N;
        cin >> N;

        // Input:
        // 3) binario = String de 0s y 1s
        string binario;
        cin >> binario;

        // Variables apuntadoras
        int izquierda = 0;
        int derecha = N - 1;

        // Si las dos variables tienen vadlores distintos, entonces se recorren en direcciones opuestas
        while(binario[izquierda] != binario[derecha] && derecha > izquierda) {
            izquierda++;
            derecha--;
        }

        // Si el string original es vacío, entonces imprime 0
        if(derecha < izquierda) {
            cout << 0 << endl;
        } else {
            int longitud_original = derecha - izquierda + 1;
            cout << longitud_original << endl;
        }
    }

    return 0;
}