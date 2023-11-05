// XXXA - 
// https://codeforces.com/problemset/problem/XXX/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Inputs:
    // 1) Nombre del invitado
    // 2) Nombre del huesped
    // 3) Pila de letras
    string letras_invitado, letras_huesped, pila_letras;
    cin >> letras_invitado;
    cin >> letras_huesped;
    cin >> pila_letras;

    // Suma las letras del invitado y huésped
    string suma_letras = letras_invitado + letras_huesped;

    // Ordena la suma y pila de letras alfabéticamente
    sort(suma_letras.begin(), suma_letras.end());
    sort(pila_letras.begin(), pila_letras.end());

    // Si ambos strings tienen las mismas letras, entonces imprime 'YES', de lo contrario, imprime 'NO'
    if(suma_letras == pila_letras) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}