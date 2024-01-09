// 705A - Hulk
// https://codeforces.com/problemset/problem/705/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) capas = Número de capas
    int capas;
    cin >> capas;

    // Construye la frase
    string frase = "";

    // Construye la frase
    for(int capa_actual = 1; capa <= capas; capa_actual++) {

        // Si la capa es impar, entonces añade 'I hate'
        if(capa_actual % 2 == 1) {
            frase = frase + "I hate ";
        }

        // Si la capa es par, entonces añade 'I love'
        if(capa_actual % 2 == 0) {
            frase = frase + "I love ";
        }

        // Si es la última capa, entonces termina la frase con 'it'
        if(capa_actual == n) {
            frase = frase + "it";
            break;
        }

        // Entre capas, escribe 'that'
        frase = frase + "that ";
    }

    // Imprime la frase resultante
    cout << frase << endl;

    return 0;
}
