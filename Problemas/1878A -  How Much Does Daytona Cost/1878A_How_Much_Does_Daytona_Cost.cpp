// 1878A - How Much Does Daytona Cost?
// https://codeforces.com/problemset/problem/1878/A

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
        // 3) K = Número a encontrar
        int N, K;
        cin >> N >> K;

        // Input:
        // 4) arreglo = Arreglo de números
        int arreglo[101];
        for(int indice_arreglo = 0; indice_arreglo < N; indice_arreglo++) {
            cin >> arreglo[indice_arreglo];
        }

        // Variable bandera: ¿K es el elemento más común en algún subarreglo?
        int K_es_mas_comun = 0;

        // Itera sobre el arreglo
        for(int indice_arreglo = 0; indice_arreglo < N; indice_arreglo++) {

            // Si K está en el arreglo, entonces cambia la variable bandera a True
            if(arreglo[indice_arreglo] == K) {
                K_es_mas_comun = 1;
            }
        }

        // Si K está en el arreglo, imprime "YES", de lo contrario, imprime "NO"
        if(K_es_mas_comun == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}