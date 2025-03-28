// 1772A - A+B
// https://codeforces.com/problemset/problem/1772/A

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
        // 2) suma
        string suma;
        cin >> suma;

        // Convierte los dígitos A y B de string a entero
        // Resta su valor ASCII - 48 para obtener el valor entero
        int a = int(suma[0]) - 48;
        int b = int(suma[2]) - 48;

        // Realiza la suma
        int resultado = a + b;

        // Imprime el resultado de la suma
        cout << resultado << endl;
    }

    return 0;
}