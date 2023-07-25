// 71A - Way Too Long Words
// https://codeforces.com/problemset/problem/71/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Numero de palabras a abreviar
    int palabras;
    cin >> palabras;

    // Procesa cada palabra
    while(palabras--) {

        // Palabra a abreviar
        string palabra_abreviar;
        cin >> palabra_abreviar;

        // Si la palabra tiene más de 10 letras, se abrevia
        if (palabra_abreviar.length() > 10) {

            // Abreviacion = Primera letra + (Longitud de palabra - 2) + Última palabra 
            cout << palabra_abreviar[0] << palabra_abreviar.length() - 2 << palabra_abreviar.back() << endl;
        } else {
            cout << palabra_abreviar << endl;
        }
    }

    return 0;
}



