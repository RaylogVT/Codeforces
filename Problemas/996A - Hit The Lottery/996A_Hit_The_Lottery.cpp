// 996A - Hit The Lottery
// https://codeforces.com/problemset/problem/996/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) Dinero a sacar
    int dinero;
    cin >> dinero;

    // Denominaciones de billetes
    int denominaciones[5] = {1,5,10,20,100};

    // Cantidad de denominaciones a comparar
    int cantidad_denominaciones = sizeof(denominaciones) / sizeof(int);

    // Cantidad total de billetes a sacar
    int billetes_total = 0;

    // Itera sobre las denominaciones
    for(int denom_indice = cantidad_denominaciones-1; denom_indice >= 0; denom_indice--) {

        // Cantidad de billetes a sacar con la denominación actual
        int billetes_actual = dinero / denominaciones[denom_indice];
        
        // Añade los nuevos billetes a tu cantidad final
        billetes_total = billetes_total + billetes_actual;

        // Calcula el dinero que te queda por sacar con otras denominaciones
        dinero = dinero - (denominaciones[denom_indice] * billetes_actual);
    }

    // Imprime la cantidad de billetes total que necesitas para sacar el dinero
    cout << billetes_total << endl;

    return 0;
}