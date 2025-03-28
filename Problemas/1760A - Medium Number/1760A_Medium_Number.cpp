// 1760A - Medium Number
// https://codeforces.com/problemset/problem/1760/A

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
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {

        // Input:
        // 2) arreglo = Arreglo de 3 números (a,b,c)
        int arreglo[3];

        // Inserta a,b,c en el arreglo
        for(int indice = 0; indice < 3; indice++) {
            cin >> arreglo[indice];
        }

        // Ordena a,b,c de menor a mayor
        sort(arreglo, arreglo + 3);

        // Extrae la mediana del arreglo
        int mediana = arreglo[1];

        // Imprime la mediana
        cout << mediana << endl;
    } 

    return 0;
}