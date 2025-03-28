// 492A - Vanya and Cubes
// https://codeforces.com/problemset/problem/492/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) cubos = Cantidad de cubos de Vanya
    int cubos;
    cin >> cubos;

    // La pirámide inicia en el nivel 0 (sin niveles)
    int nivel = 0;

    // Revisa si aún quedan cubos
    while(cubos >= 0) {

        // Pasa al siguiente nivel
        nivel++;

        // Resta de la cantidad de cubos sobrante los necesarios para construir el nivel actual
        cubos = cubos - (nivel * (nivel + 1) / 2);
    }

    // Imprime el nivel anterior (cuando todavía sobraban cubos)
    cout << nivel - 1 << endl;

    return 0;
}