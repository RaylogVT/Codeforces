// 1624A - Plus One on the Subset
// https://codeforces.com/problemset/problem/1624/A

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
        // 2) tamano = Número de elementos en el arreglo
        int tamano;
        cin >> tamano;

        // Input:
        // 3) arreglo = Arreglo de números a igualar
        int arreglo[51];
        for(int indice_arreglo = 0; indice_arreglo < tamano; indice_arreglo++) {
            cin >> arreglo[indice_arreglo];
        }

        // Calcula el número de iteraciones +1 que debemos hacer
        // Se resume en restar el número más grande del arreglo menos el número más pequeño
        int iteraciones = *max_element(arreglo, arreglo + tamano) - *min_element(arreglo, arreglo + tamano);

        // Imprime el número de iteraciones
        cout << iteraciones << endl;
    }

    return 0;
}