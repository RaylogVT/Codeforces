// 1992A - Only Pluses  
// https://codeforces.com/problemset/problem/1992/A

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
        // 2) a,b,c = Números a multiplicat
        int a,b,c;
        cin >> a >> b >> c;

        // Realiza 5 sumas +1
        for(int suma = 0; suma < 5; suma++) {

            // Suma +1 sobre el número más chico hasta el momento
            if(a <= b && a <= c) {
                a++;
            } else if(b <= a && b <= c) {
                b++;
            } else if(c <= a && c <= b) {
                c++;
            }
        }

        // Multiplica a,b,c para calcular el número de plátanos  
        int platanos = a * b * c;

        // Imprime el número total de plátanos
        cout << platanos << endl;
    }

    return 0;
}