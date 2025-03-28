// 1850C - Word On The Paper
// https://codeforces.com/problemset/problem/1850/C

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
        // 2) cuadricula = Cuadricula 8x8 de caracteres
        char cuadricula[8][8];
        
        // Genera la cuadrícula leyendo los caracteres por fila
        for(int fila = 0; fila < 8; fila++) {
            cin >> cuadricula[fila];
        }

        // Palabra a extraer
        string palabra = "";

        // Itera sobre las filas de la cuadricula
        for(int fila = 0; fila < 8; fila++) {
            
            // Extrae los caracteres de la fila actual
            string fila_actual = cuadricula[fila];

            // Itera sobre los caracteres de la fila actual
            for(int indice_caracter = 0; indice_caracter < 8; indice_caracter++) {

                // Añade los caracteres distintos de punto (.) a la palabra
                if(fila_actual[indice_caracter] != '.') {
                    palabra += fila_actual[indice_caracter];
                }
            }
        }

        // Imprime la palabra extraída
        cout << palabra << endl;
    }

    return 0;
}