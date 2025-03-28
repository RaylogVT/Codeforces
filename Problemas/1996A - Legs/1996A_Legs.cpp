// 1996A - Legs 
// https://codeforces.com/problemset/problem/1996/A

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
        // 2) piernas = Número de piernas contadas
        int piernas;
        cin >> piernas;

        // Número mínimo de animales
        int animales;

        // Si el número de piernas es múltiplo de 4, entonces todos los animales son vacas
        // Si el número de piernas no es múltiplo de 4, entonces hay puras vacas y 1 gallina
        if(piernas % 4 == 0) {
            animales = piernas / 4;
        } else {
            animales = (piernas / 4) + 1;
        }

        // Imprime el número mínimo de animales
        cout << animales << endl;
    }

    return 0;
}