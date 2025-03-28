// 1827A - Love Story
// https://codeforces.com/problemset/problem/1829/A

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

    // String 'codeforces'
    string target = "codeforces";

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {

            // Input:
            // 2) palabra = String a comparar
            string palabra;
            cin >> palabra;

            // Número de letras distintas
            int letras_distintas = 0;

            // Itera sobre las letras del string y la palabra 'codeforces'
            for(int indice_letras = 0; indice_letras < 10; indice_letras++) {

                // Compara si la letra del string y la palabra 'codeforces' son distintas
                if(target[indice_letras] != palabra[indice_letras]) {
                    
                    // Si lo son, entonces suma +1 al contador de letras distintas
                    letras_distintas++;
                }
            }

            // Imprime la cantidad de letras distintas entre los dos strings
            cout << letras_distintas << endl;
    }

    return 0;
}