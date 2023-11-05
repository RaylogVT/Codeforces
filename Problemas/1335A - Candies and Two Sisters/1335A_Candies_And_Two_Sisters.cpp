// XXXA - 
// https://codeforces.com/problemset/problem/XXX/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) Número de casos
    int casos;
    cin >> casos;

    for(int caso = 0; caso < casos; caso++) {
        
        // Input:
        // 2) Número de dulces
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