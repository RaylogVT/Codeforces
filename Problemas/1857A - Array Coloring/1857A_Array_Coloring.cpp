// 1857A - Array Coloring
// https://codeforces.com/problemset/problem/1857/A

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
        // 3) arreglo = Número de elementos en el arreglo
        int arreglo[51];
        for(int indice_numero = 0; indice_numero < tamano; indice_numero++) {
            cin >> arreglo[indice_numero];
        }

        // Suma los elementos del arreglo
        int suma = 0;
        for(int indice_numero = 0; indice_numero < tamano; indice_numero++) {
            suma = suma + arreglo[indice_numero];
        }

        // ¿La suma es par o impar?
        // Si la suma es par, entonces el arreglo se puede descomponer en dos grupos de tal manera que la suma de ambos tenga la misma paridad
        // Imprime "YES" si la suma es par, de lo contrario, imprime "NO"
        if(suma % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}