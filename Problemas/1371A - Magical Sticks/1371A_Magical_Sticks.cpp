// 1371A - Magical Sticks 
// https://codeforces.com/problemset/problem/1371/A

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
        // 2) N = Número de palos
        int N;
        cin >> N;

        // Se pueden generar N/2 palos de misma longitud
        // Se combina el palo más corto y 2° más largo
        // El palo más largo se queda solo
        int palos_iguales = (N / 2) + (N % 2);

        // Imprime la cantidad de palos iguales
        cout << palos_iguales << endl;
    }

    return 0;
}