// 1722A - Spell Check
// https://codeforces.com/problemset/problem/1722/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// letra_en_palabra = ¿Una palabra tiene determinada letra?
// Parámetros:
//      1) palabra = Palabra a recorrer
//      2) letra = Letra a buscar
//      3) longitud = Número de letras en la palabra
// Return:
//      a) true = La letra está en la palabra
//      b) false = La letra no está en la palabra
bool letra_en_palabra(string palabra, char letra, int longitud) {
    for(int indice_letra = 0; indice_letra < longitud; indice_letra++) {
        if(letra == palabra[indice_letra]) {
            return true;
        }
    }
    return false;
}

int main(){

    // Input:
    // 1) pruebas = Número de casos de prueba
    int pruebas;
    cin >> pruebas;

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {

        // Input:
        // 2) longitud = Número de letras en el string
        // 3) palabra = String a deletrear
        int longitud;
        cin >> longitud;
        string palabra;
        cin >> palabra;

        // Si la palabra tiene 5 letras, procede a revisar las letras, de lo contrario imprime NO
        if(longitud != 5) {
            cout << "NO" << endl;
        } else {

            // Si las letras de la palabra 'Timur' están en la palabra, entonces imprime 'YES', de lo contrario, imprime 'NO'
            if(letra_en_palabra(palabra, 'T', longitud) && 
               letra_en_palabra(palabra, 'i', longitud) &&
               letra_en_palabra(palabra, 'm', longitud) &&
               letra_en_palabra(palabra, 'u', longitud) &&
               letra_en_palabra(palabra, 'r', longitud)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
