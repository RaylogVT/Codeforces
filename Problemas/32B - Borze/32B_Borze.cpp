// 32B - Borze
// https://codeforces.com/problemset/problem/32/B

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) borze = Código Borze
    string borze;
    cin >> borze;

    // Longitud del código
    int longitud_codigo = borze.length();

    // Itera sobre los caracteres del código
    for(int caracter = 0; caracter < longitud_codigo; caracter++) {
        
        // Si el caracter es un punto, entonces es un 0
        if(borze[caracter] == '.') {
            cout << "0";

        // Si es caracter no es un punto, entonces es un guión, por lo que es un 1 o 2
        } else { 

            // Suma +1 al índice para pasar al siguiente caracter
            caracter++;

            // Si el caracter es un punto, entonces es un guión+punto que es un 1
            if(borze[caracter] == '.') {
                cout << "1";
            
            // Si es caracter no es un punto, entonces es un guión, por lo que es un guión+guión que es un 2
            } else { 
                cout << "2";
            }
        }
    } 

    return 0;
}