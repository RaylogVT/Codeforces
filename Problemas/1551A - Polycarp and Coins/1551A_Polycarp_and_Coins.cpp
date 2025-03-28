// 1551A - Polycarp and Coins
// https://codeforces.com/problemset/problem/1551/A

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
        // 2) rublos = Total de rublos a pagar
        int rublos;
        cin >> rublos;

        int monedas_1_rublos, monedas_2_rublos;

        // Si la cantidad de rublos es múltplo de 3, entonces se entregan N/3 monedas de 1 y 2 rublos
        if(rublos % 3 == 0) {
            monedas_1_rublos = rublos / 3;
            monedas_2_rublos = rublos / 3;
        } 
        // Si la cantidad de rublos al dividirla entre 3 deja 1 rublo como residuo, entonces se entregan N/3 + 1 monedas de 1 rublo y N/3 monedas de 2 rublos
        else if(rublos % 3 == 1) {
            monedas_1_rublos = rublos / 3 + 1;
            monedas_2_rublos = rublos / 3;
        } 
        // Si la cantidad de rublos al dividirla entre 3 deja 2 rublos como residuo, entonces se entregan N/3 monedas de 1 rublo y N/3 + 1 monedas de 2 rublos
        else if(rublos % 3 == 2) {
            monedas_1_rublos = rublos / 3;
            monedas_2_rublos = rublos / 3 + 1;
        } 

        cout << monedas_1_rublos << " " << monedas_2_rublos << endl;
    }

    return 0;
}