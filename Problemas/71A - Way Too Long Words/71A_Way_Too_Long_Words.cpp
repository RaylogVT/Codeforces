// 71A - Way Too Long Words
// https://codeforces.com/problemset/problem/71/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Input:
    // 1) palabras = Numero de palabras a abreviar
    int palabras;
    cin >> palabras;

    // Itera sobre cada palabra
    while(palabras--) {

        // Input:
        // 2) palabra_abreviar = Palabra a abreviar
        string palabra_abreviar;
        cin >> palabra_abreviar;

        // Si la palabra tiene más de 10 letras, entonces se abrevia
        if(palabra_abreviar.length() > 10) {

            // Abreviacion = Primera letra + (Longitud de palabra - 2) + Última palabra 
            cout << palabra_abreviar[0] << palabra_abreviar.length() - 2 << palabra_abreviar.back() << endl;

        } else {

            // Si la palabra tiene menos de 10 letras, entonces no se abrevia
            cout << palabra_abreviar << endl;
        }
    }

    return 0;
}
