// 546A - Soldier and Bananas
// https://codeforces.com/problemset/problem/546/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) precio_banana = Precio de la 1° banana
    // 2) dolares_actuales = Dólares que el soldado tiene
    // 3) numero_bananas = Número de bananas a comprar
    int precio_banana, dolares_actuales, numero_bananas;
    cin >> precio_banana >> dolares_actuales >> numero_bananas;

    // Monto total a pagar por las bananas
    int monto_total = 0;

    // Suma al monto total el precio individual de cada banana
    for(int banana = 1; banana <= numero_bananas; banana++) {
        monto_total = monto_total + (precio_banana * banana);
    }

    // Calcula cuántos dólares debe el soldado predir prestado
    int dolares_prestados = monto_total - dolares_actuales;

    // Si el número de dólares prestados es negativo, entonces imprime 0 (no necesita pedir prestado para pagar)
    if(dolares_prestados > 0) {
        cout << dolares_prestados << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
