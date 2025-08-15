// 2065A -  Skibidus and Amongus
// https://codeforces.com/problemset/problem/2065/A

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
        // 2) singular = Sustantivo en singular
        string singular;
        cin >> singular;

        // Extrae el sustantivo de la palabra
        string sustantivo = "";
        int longitud_sustantivo = singular.length();
        for(int indice_letra = 0; indice_letra < longitud_sustantivo - 2; indice_letra++) {
            sustantivo = sustantivo + singular[indice_letra];
        }
        
        // Convierte el sustativo a plural
        string plural = sustantivo + 'i';

        // Imprime el sustantivo plural
        cout << plural << endl;
    }

    return 0;
}