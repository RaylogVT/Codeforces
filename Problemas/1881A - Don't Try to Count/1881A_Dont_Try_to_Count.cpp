// 1881A - Don't Try to Count  
// https://codeforces.com/problemset/problem/1881/A

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
        // 2) n, m = Longitud de strings x y s
        int n, m;
        cin >> n >> m;

        // Input:
        // 3) x = String inicial
        // 4) s = Substring a encontrar
        string x, s;
        cin >> x;
        cin >> s;

        // Contador de auto-appends
        int autoAppends = 0;

        // Detector de substring
        bool substringFound = false;

        // Realiza auto-appends sobre x
        while(x.length() < 50) {

            // Detecta si x tiene el substring s
            int indiceSubtring = x.find(s);
            if(indiceSubtring != string::npos) {
                substringFound = true;
                break;
            }

            // Realiza el auto-append
            x += x;
            autoAppends += 1;
        }

        // Si el substring se encontró, imprime la cantidad de auto-appenda realizados, de los contrario, imprime -1
        if(substringFound) {
            cout << autoAppends << endl;
        } else {
            cout << -1 << endl;
        }

    }

    return 0;
}