// 705A - Hulk
// https://codeforces.com/problemset/problem/705/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) N - Número de capas
    int n;
    cin >> n;

    // Construye la frase
    string frase = "";

    // Construye la frase
    for(int capa = 1; capa <= n; capa++) {

        // Si la capa es impar, entonces añade 'I hate'
        if(capa % 2 == 1) {
            frase = frase + "I hate ";
        }

        // Si la capa es par, entonces añade 'I love'
        if(capa % 2 == 0) {
            frase = frase + "I love ";
        }

        // Si es la última capa, entonces termina la frase con 'it'
        if(capa == n) {
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