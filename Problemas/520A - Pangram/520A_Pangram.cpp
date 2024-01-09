// 520A - Pangram
// https://codeforces.com/problemset/problem/520/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) longitud = Longitud del string
    int longitud;
    cin >> longitud;

    // Input:
    // 2) frase = String a revisar
    string frase;
    cin >> frase;

    // Set de letras del alfabeto
    // ¿La letra está en la frase?
    set<char> alfabeto;

    // Itera sobre las letras del string
    for(int letra = 0; letra < longitud; letra++) {

        // Si la letra no está en el set, entonces se añade al set (en minúscula)
        // Si la letra ya está en el set, entonces se descarta
        alfabeto.insert(tolower(frase[letra]));
    }

    // Si el set del alfabeto tiene 26 letras, entonces el string es un pangrama
    // Si el set del alfabeto tiene menos de 26 letras, entonces el string no es un pangrama
    if(alfabeto.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
