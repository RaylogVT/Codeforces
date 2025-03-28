// 1926A - Vlad And The Best Of Fives
// https://codeforces.com/problemset/problem/1926/A

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
        // 2) stringAB = String de longitud 5 con As y Bs
        string stringAB;
        cin >> stringAB;

        // Contadores de caracteres
        int A = 0;
        int B = 0;
        
        // Itera sobre el string
        for(int indice_letra = 0; indice_letra < 5; indice_letra++) {

            // Suma +1 al contador respectivo de cada letra
            if(stringAB[indice_letra] == 'A') {
                A++;
            } 
            if(stringAB[indice_letra] == 'B') {
                B++;
            } 
        }

        // Si A aparece más veces en el string que B, entonces imprime 'A', de lo contrario, imprime 'B'
        if(A > B) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    }

    return 0;
}