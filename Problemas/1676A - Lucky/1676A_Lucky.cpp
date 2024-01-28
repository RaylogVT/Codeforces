// 1676A - Lucky?
// https://codeforces.com/problemset/problem/1676/A

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
        // 2) ticket = String del número de ticket
        string ticket;
        cin >> ticket;

        // Si la suma de los primeros 3 dígitos es igual a la de los últimos 3 dígitos, entonces imprime 'YES', de lo contrario, imprime 'NO'
        if(ticket[0] + ticket[1] + ticket[2] == ticket[3] + ticket[4] + ticket[5]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}