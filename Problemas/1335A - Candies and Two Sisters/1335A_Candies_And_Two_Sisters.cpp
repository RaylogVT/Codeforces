// XXXA - 
// https://codeforces.com/problemset/problem/XXX/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) pruebas - Número de casos de prueba
    int pruebas;
    cin >> pruebas;

    for(int prueba_actual = 0; prueba_actual < pruebas; prueba_actual++) {
        
        // Input:
        // 2) dulces - Número de dulces
        int dulces;
        cin >> dulces;

        // Si el número de dulces es par, entonces hay (N/2) - 1 formas de repartirlos
        // Si el número de dulces es impar, entonces hay (N-1) / 2 formas de repartirlos
        if(dulces % 2 == 0) {
            int repartos = (dulces / 2) - 1;
            cout << repartos << endl;
        } else {
            int repartos = (dulces - 1) / 2;
            cout << repartos << endl;
        }
    }
    
    return 0;
}
