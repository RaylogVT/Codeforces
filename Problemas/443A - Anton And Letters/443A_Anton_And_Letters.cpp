// 443A - Anton And Letters
// https://codeforces.com/problemset/problem/443/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) String de letras escritas
    string str;
    cin.ignore();
    getline(cin, str, '\n');

    // Elimina las comas (,), llaves ({}) y espacios en blanco del string
    str.erase(remove(str.begin(), str.end(), ','), str.end());
    str.erase(remove(str.begin(), str.end(), '{'), str.end());
    str.erase(remove(str.begin(), str.end(), '}'), str.end());
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    
    // Set de letras únicas en el string
    set<char> letras;

    // Cantidad de letras en el string
    int cantidad_letras = str.length();

    // Itera sobre las letras del string
    for(int letra_actual = 0; letra_actual < cantidad_letras; letra_actual++) {

        // Inserta las letras del string en el set de letras
        letras.insert(str[letra_actual]);
    }

    // Imprime el número de letras insertadas en el set de letras
    cout << letras.size() << endl;

    return 0;
}