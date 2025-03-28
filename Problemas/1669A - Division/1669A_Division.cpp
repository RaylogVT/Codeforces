// 1669A - Division
// https://codeforces.com/problemset/problem/1669/A

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
        // 2) rating = Puntuación del usuario
        int rating;
        cin >> rating;

        // Asigna la división correspondiente dependiendo del rating
        if(rating >= 1900) {
            cout << "Division 1" << endl;
        } else if(rating >= 1600 && rating <= 1899) {
            cout << "Division 2" << endl;
        } else if(rating >= 1400 && rating <= 1599) {
            cout << "Division 3" << endl;
        } else if(rating <= 1399) {
            cout << "Division 4" << endl;
        }
    }
 
    return 0;
}