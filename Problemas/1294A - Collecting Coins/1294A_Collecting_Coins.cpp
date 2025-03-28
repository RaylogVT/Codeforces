// 1294A - Collecting Coins
// https://codeforces.com/problemset/problem/1294/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Devuelve el máximo de 3 números
int max3(int a, int b, int c) {
    if(a >= b && a >= c) {
        return a;
    }
    if(b >= a && b >= c) {
        return b;
    }
    if(c >= a && c >= b) {
        return c;
    }
}

int main(){

    // Input:
    // 1) pruebas = Número de casos de prueba
    int pruebas;
    cin >> pruebas;

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {

        // Input:
        // 2) Alice, Barbara, Cerene, Polycarp = Monedas iniciales de cada persona
        int alice, barbara, cerene, polycarp;
        cin >> alice >> barbara >> cerene >> polycarp;

        // Si la suma de las monedas, no es divisible entre 3, entonces se imprime "NO"
        if ((alice + barbara + cerene + polycarp) % 3 == 0) {

            // Si el promedio de las monedas es menor al máximo de monedas que tiene Alice, Barbara o Cerene, entonces se imprime "NO", de lo contrario, imprime "YES"
            if ((alice + barbara + cerene + polycarp) / 3 < max3(alice, barbara, cerene)) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        } else {
            cout << "NO" << endl;
        }

    }

    return 0;
}