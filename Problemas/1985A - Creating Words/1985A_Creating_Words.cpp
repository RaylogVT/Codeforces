// 1985A - Creating Words
// https://codeforces.com/problemset/problem/1985/A

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
        // 2) a, b = Strings cuyas letras se intercambiarán
        string a, b;
        cin >> a >> b;

        // Extrae la 1° letra de ambos strings
        char first_letter_a = a[0];
        char first_letter_b = b[0];

        // Intercambia la 1° letra entre ambos strings
        a[0] = first_letter_b;
        b[0] = first_letter_a;

        // Imprime los strings con las letras intercambiadas
        cout << a << " " << b << endl;
    }

    return 0;
}