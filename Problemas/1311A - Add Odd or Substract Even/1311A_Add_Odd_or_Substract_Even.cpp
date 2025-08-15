// 1311A - Add Odd || Substract Even 
// https://codeforces.com/problemset/problem/1311/A

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
        // 2) a,b = Números a utilizar
        int a,b;
        cin >> a >> b;

        // Si A y B son iguales, no se usan movimientos
        if(a == b) {
            cout << 0 << endl;

        // Si A es menor a B, checa la igualdad de paridad
        } else if (a < b) {

            // Si A y B son pares o impares, entonces se usan 2 movimientos
            if((a % 2 == 0 && b % 2 == 0) || (a % 2 == 1 && b % 2 == 1)) {
                cout << 2 << endl;

            // Si A y B es par-impar, entonces se usa 1 movimiento
            } else if((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0)) {
                cout << 1 << endl;
            }

        // Si A es mayor a B, checa la diferencia de paridad
        } else if (a > b) {

            // Si A y B son pares o impares, entonces se usa 1 movimiento
            if((a % 2 == 0 && b % 2 == 0) || (a % 2 == 1 && b % 2 == 1)) {
                cout << 1 << endl;
                
            // Si A y B es par-impar, entonces se usa 2 movimientos
            } else if((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 and b % 2 == 0)) {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}