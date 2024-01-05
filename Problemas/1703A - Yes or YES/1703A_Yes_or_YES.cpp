// 1703A - Yes or YES?
// https://codeforces.com/problemset/problem/1703/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) Número de pruebas
    int pruebas;
    cin >> pruebas;

    // Realiza cada caso de prueba
    for(int prueba = 0; prueba < pruebas; prueba++) {

        // Input
        // 2) String de 3 caracteres
        string yes;
        cin >> yes;

        // Convierte el string a minúsculas
        transform(yes.begin(), yes.end(), yes.begin(), ::tolower);

        // Si el string en minúsculas es igual a "yes", entonces imprime "YES", de lo contrario, imprime "NO"
        if(yes == "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}