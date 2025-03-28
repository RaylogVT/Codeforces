// 1791A - Codeforces Checking
// https://codeforces.com/problemset/problem/1791/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) pruebas = Número de casos de pruebas
    int pruebas;
    cin >> pruebas;

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {

        // Input:
        // 2) letra = Letra a buscar
        char letra;
        cin >> letra;
        
        // Palabra 'codeforces'
        string codeforces = "codeforces";

        // Asume que la letra no está en la palabra 'codeforces'
        // La bandera de coincidencia está setteada en False
        bool coincidencia = false;

        // Cantidad de letras en la palabra 'codeforces'
        int letras_codeforces = codeforces.length();

        // Itera sobre las letras en la palabra 'codeforces'
        for(int letra_actual = 0; letra_actual < letras_codeforces; letra_actual++) {

            // Si la letra está en la palabra 'codeforces', entonces settea la bandera de coincidencia a True
            if(letra == codeforces[letra_actual]) {
                coincidencia = true;
                continue;
            }
        }

        if(coincidencia == true) {
            cout << "YES" << endl;
        } else { 
            cout << "NO" << endl;
        }
    }

    return 0;
}