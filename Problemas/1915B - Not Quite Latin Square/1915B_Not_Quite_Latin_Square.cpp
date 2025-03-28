// 1915B - Not Quite Latin Square 
// https://codeforces.com/problemset/problem/1915/B

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
        
        // String con todas las letras del cuadrado latino
        string cuadrado_latino = "";

        // Itera sobre las 3 filas del cuadrado latino
        for(int fila = 0; fila < 3; fila++) {

            // Input:
            // 2) fila_actual = Fila actual del cuadrado latino
            string fila_actual;
            cin >> fila_actual;
            
            // Suma las filas del cuadrado latino al string
            cuadrado_latino += fila_actual;
        }

        // Contadores de letras
        int contadorA = 0;
        int contadorB = 0;
        int contadorC = 0;

        // Cuenta el número de instancias de cada letra
        for(int letra = 0; letra < 9; letra++) {
            if(cuadrado_latino[letra] == 'A') {
                contadorA++;
            }
            if(cuadrado_latino[letra] == 'B') {
                contadorB++;
            }
            if(cuadrado_latino[letra] == 'C') {
                contadorC++;
            }
        }

        // Devuelve la letra que tenga un contador igual a 2
        if(contadorA == 2) {
            cout << 'A' << endl;
        }
        if(contadorB == 2) {
            cout << 'B' << endl;
        }
        if(contadorC == 2) {
            cout << 'C' << endl;
        }
    }

    return 0;
}