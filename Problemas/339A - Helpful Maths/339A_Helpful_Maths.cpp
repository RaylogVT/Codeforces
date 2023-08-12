// 339A - Helpful Maths
// https://codeforces.com/problemset/problem/339/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Suma a ordenar
    string suma;
    cin >> suma;

    // Arreglo de números a ordenar
    vector<int> numeros;

    // Longitud de la suma
    int longitud_suma = suma.length();

    // Extrae los números de la suma
    for(int i = 0; i < longitud_suma; i++){
        if(suma[i] != '+') {
            numeros.push_back(suma[i]-48);
        }
    }

    // Ordena los número de menor a mayor
    sort(numeros.begin(), numeros.end());

    // Cantidad de números en la suma
    int cantidad_numeros = numeros.size();

    // Cantidad de números ordenados
    int conteo_numeros = 0;

    // Recorre el arreglo de números de la suma
    for(int i: numeros) {

        // Imprime el número 
        cout << i;

        // Si el número actual no es el último del arreglo, imprime un '+'
        if(conteo_numeros != cantidad_numeros - 1) {
            cout << '+';
        }

        // Suma 1 número ordenado a la suma
        conteo_numeros++;
    }

    return 0;
}