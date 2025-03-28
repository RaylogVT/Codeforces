// 702A - Maximum Increase
// https://codeforces.com/problemset/problem/702/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) N = Cantidad de números
    int N;
    cin >> N;

    // Input:
    // 2) arreglo = Arreglo de números
    int arreglo[100001];
    for(int indice_arreglo = 0; indice_arreglo < N; indice_arreglo++) {
        cin >> arreglo[indice_arreglo];
    }

    // Longitud máxima actual
    int longitud_maxima = 1;

    // El subarreglo creciente empieza con una longitud igual a 1
    int longitud_subarreglo = 1;

    // Itera sobre los números del arreglo
    for(int indice_arreglo = 1; indice_arreglo < N; indice_arreglo++) {

        // ¿El número actual es más grande que el anterior?
        if(arreglo[indice_arreglo] > arreglo[indice_arreglo-1]) {

            // Si lo es, entonces suma +1 a la longitud del subarreglo creciente
            longitud_subarreglo += 1;

            // Compara las longitudes del subarreglo actual y el máximo hasta el momento para actualizar la longitud máxima    
            longitud_maxima = max(longitud_maxima, longitud_subarreglo);

        } else {

            // Si no lo es, entonces resetea la longitud del subarreglo creciente a 1
            longitud_subarreglo = 1;
        }
    }

    // Imprime la longitud del subarreglo creciente más largo identificado
    cout << longitud_maxima << endl;

    return 0;
}