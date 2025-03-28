// 1360A - Minimal Square
// https://codeforces.com/problemset/problem/1360/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) pruebas = Número de casos de prueba+
    int pruebas;
    cin >> pruebas;

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {
        
        // Input:
        // 2) a,b = Dimensiones de los rectángulos
        int a,b;
        cin >> a >> b;

        // Calcula el área mínima del terreno cuadrado
        int area = pow(min(max(2*a, b), max(a, 2*b)),2);

        // Imprime el área dle terreno cuadrado
        cout << area << endl;
    }

    return 0;
}