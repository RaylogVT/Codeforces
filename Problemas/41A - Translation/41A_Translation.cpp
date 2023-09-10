// 41A - Translation
// https://codeforces.com/problemset/problem/41/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Inputs
    // 1) Palabra en Berland
    // 2) Palabra en Birland
    string berland, birland;
    cin >> berland >> birland;

    // Tamaño de palabra en Berland
    int tamano = berland.length();

    // Palabra en Berland traducida a Birland (invertida)
    string traduccion = "";
    
    // Lee la palabra en Berland de derecha a izquierda, añade letra por letra a la traducción
    for(int letra = tamano-1; letra >= 0; letra--) {
        traduccion = traduccion + berland[letra];
    }

    // Si la traducción es igual a la palabra en Birland, entonces imprime YES, de lo contrario, imprime NO
    if(traduccion == birland) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}