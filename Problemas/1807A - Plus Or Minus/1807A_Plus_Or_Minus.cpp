// 1807A - Plus or Minus
// https://codeforces.com/problemset/problem/1807/A

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
        // 2) a,b,c = Variables de la ecuación
        int a,b,c;
        cin >> a >> b >> c;

        // Imprime + o - dependiendo de si las 3 variables forman una suma o resta
        if(a + b == c) {
            cout << "+" << endl;
        } 
        if(a - b == c) {
            cout << "-" << endl;
        }
    }
    
    return 0;
}