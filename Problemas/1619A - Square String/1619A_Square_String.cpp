// 1619A - Square String?
// https://codeforces.com/problemset/problem/1619/A

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
        // 2) square_string = String a evaluar
        string square_string;
        cin >> square_string;

        // Longitud del string
        int tamano = square_string.length();

        // Si el string es de longitud impar, entonces NO es cuadrado
        // Si el string es de longitud par, entonces PUEDE ser cuadrado
        if(tamano % 2 == 1) {
            cout << "NO" << endl;
        } else {
            
            // Calcula el punto medio del string
            int mitad = tamano / 2;

            // Extrae las dos mitades del string
            string mitad1 = square_string.substr(0,mitad);
            string mitad2 = square_string.substr(mitad,mitad);

            // Revisa si la 1° mitad de string es igual a la 2° mitad
            // Imprime 'YES' si las dos mitades son iguales, de lo contrario, imprime 'NO'
            if(mitad1 == mitad2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}