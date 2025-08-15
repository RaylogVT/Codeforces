// 1462A - Favorite Sequence  
// https://codeforces.com/problemset/problem/1462/A

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
        // 2) tamano = Longitud de la secuencia
        int tamano;
        cin >> tamano;

        // Input:
        // 3) secuencia = Secuencia perfecta de números
        int secuencia[301];
        for(int indice_numero = 0; indice_numero < tamano; indice_numero++) {
            cin >> secuencia[indice_numero];
        }

        // Orden de números en secuencia de Policarpio
        vector<int> indices = {};

        // Insertar los índices impares de la secuencia
        int impar = 1;
        while(impar <= tamano) {
            indices.push_back(impar);
            impar += 2;
        }

        // Calcula el número par más grande del índice
        int par;
        if(tamano % 2 == 1) {
            par = tamano - 1;
        } else {
            par = tamano;
        }

        // Insertar los índices impares de la secuencia
        while(par > 0) {
            indices.push_back(par);
            par -= 2;
        }

        // Secuencia original de números (previa al acomodo de Policarpio)
        vector<int> secuencia_original = {};

        for(int indice_actual = 1; indice_actual <= tamano; indice_actual++) {

            // Encuentra el índice donde se encuentra el índice de Policarpio actual
            auto it = find(indices.begin(), indices.end(), indice_actual);
            int posicion_indice = it - indices.begin();

            // Encuentra el número asociado al índice de Policarpio actual
            int numero_original = secuencia[posicion_indice];

            // Construye la secuencia original de números
            secuencia_original.push_back(numero_original);
        }

        // Imprime la secuencia original de números
        for (auto numero : secuencia_original) {
            cout << numero << " ";
        }
    }

    return 0;
}