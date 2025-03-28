// 1742B - Increasing 
// https://codeforces.com/problemset/problem/1742/B

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
        // 2) N = Número de elementos en el arreglo
        int N;
        cin >> N;

        // Input:
        // 3) arreglo = Números del arreglo
        int arreglo[101];
        for(int indice_arreglo = 0; indice_arreglo < N; indice_arreglo++) {
            cin >> arreglo[indice_arreglo];
        }

        // Set de números únicos
        set<int> numeros_unicos;

        // Itera sobre el arreglo, inserta los números en el set
        for(int indice_arreglo = 0; indice_arreglo < N; indice_arreglo++) {
            numeros_unicos.insert(arreglo[indice_arreglo]);
        }

        // Si el número de elementos en el arreglo es igual a la cantidad de números únicos en el mismo, entonces el arreglo se puede ordenar de manera ascendente estrictamente.
        // Imprime "YES" si las cantidades son iguales, de lo contrario, imprime "NO"
        if(numeros_unicos.size() == N) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}