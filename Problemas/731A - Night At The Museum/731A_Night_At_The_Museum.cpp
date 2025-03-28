// 731A - Night At The Museum
// https://codeforces.com/problemset/problem/731/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) palabra = Palabra a generar
    string palabra;
    cin >> palabra;

    // Empieza la rueda desde 'a'
    palabra = 'a' + palabra;
    
    // Itera sobre las letras de la palabra
    int movimientos = 0;

    for(int indice_letra = 0; indice_letra < palabra.length() - 1; indice_letra++) {

        // Determina la distancia más corta entre letras: Izquierda o derecha 
        // Suma la cantidad de movimientos al contador final
        movimientos += min(abs(palabra[indice_letra] - palabra[indice_letra+1]), 26 - abs(palabra[indice_letra] - palabra[indice_letra+1]));
    }

    // Imprime la cantidad de movimientos
    cout << movimientos << endl;

    return 0;
}