// 1367B - Even Array
// https://codeforces.com/problemset/problem/1367/B

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
        // 2) numeros = Número de elementos en el arreglo
        int numeros;
        cin >> numeros;

        // Input:
        // 3) arreglo = Arreglo con los números
        int arreglo[41];
        for(int indice_arreglo = 0; indice_arreglo < numeros; indice_arreglo++) {
            cin >> arreglo[indice_arreglo];
        }

        // Contadores de disparidades
        int disparidad_indice1_elemento0 = 0;
        int disparidad_indice0_elemento1 = 0;

        // Itera sobre los números del arreglo
        for(int indice_arreglo = 0; indice_arreglo < numeros; indice_arreglo++) {
            
            // Detecta si el índice y número mod 2 son dispares
            // Suma +1 al contador correspondiente dependiendo del tipo de disparidad
            if(indice_arreglo % 2 == 1 && arreglo[indice_arreglo] % 2 == 0) {
                disparidad_indice1_elemento0 += 1;
            }
            if(indice_arreglo % 2 == 0 and arreglo[indice_arreglo] % 2 == 1) {
                disparidad_indice0_elemento1 += 1;
            }
        }

        // Si tienes la misma cantidad de disparidades de los dos tipos, entonces puedes swappearlos entre sí para que el arreglo sea bueno
        // Imprime cualquiera de los dos contadores
        // Si tienes una cantidad distinta de disparidades de los dos tipos, entonces no puede swappear para que el arreglosea bueno, imprime -1
        if(disparidad_indice1_elemento0 == disparidad_indice0_elemento1) {
            cout << disparidad_indice1_elemento0 << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}