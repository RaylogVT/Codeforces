// 1367A - Short Subtrings
// https://codeforces.com/problemset/problem/1367/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) pruebas = Número de casos de prueba
    int pruebas;
    cin >> pruebas;

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {

        // Input:
        // 2) string_construido = String generado por Bob a partir del original
        string string_construido;
        cin >> string_construido;

        // Construye el string original
        // El string original tiene las primeras 2 letras del string construido
        string string_original;
        string_original = string_construido.substr(0,2);

        // Longitud del string construido
        int longitud_string = string_construido.length();

        // Itera sobre las letras del string construido en localidades impares a partir de la 3° letra
        for(int indice_letra = 3; indice_letra < longitud_string; indice_letra += 2) {

            // Suma cada letra en localidad impar en el string original
            string_original += string_construido[indice_letra];
        }

        // Imprime el string original ideado por Bob
        cout << string_original << endl;

    }

    return 0;
}