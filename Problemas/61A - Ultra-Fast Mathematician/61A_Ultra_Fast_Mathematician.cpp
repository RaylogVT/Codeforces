// 61A - Ultra-Fast Mathematician
// https://codeforces.com/problemset/problem/61/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

/*
int main(){

    // Input:
    // 1) Número 1
    // 2) Número 2
    string numero1, numero2;
    
    // cin >> numero1 >> numero2;
    
    while(cin >> numero1 >> numero2) {

        // Longitud de los dos números
        int longitud_numero = numero1.length();

        // Reusltado de la operación
        string resultado = "";

        for(int digito = 0; digito < longitud_numero; digito++) {
            if(numero1[digito] == numero2[digito]) { 
                resultado.push_back('0');
            } else {
                resultado.push_back('1');
            }
        }
        cout << resultado << endl;
    }

    return 0;
}
*/

int main(){

    // Input:
    // 1) Número 1
    // 2) Número 2
    string numero1, numero2;
    cin >> numero1 >> numero2;
    
    // Longitud de los dos números
    int longitud_numero = numero1.length();

    // Reusltado de la operación
    string resultado = "";

    // Itera sobre los dígitos de los números 
    for(int digito = 0; digito < longitud_numero; digito++) {

        // Si los dígitos son iguales, entonces la respuesta es 0
        // Si los dígitos son distintos, entonces la respuesta es 1
        if(numero1[digito] == numero2[digito]) { 
            resultado.push_back('0');
        } else {
            resultado.push_back('1');
        }
    }

    // Imprime el resultado de la operación
    cout << resultado << endl;

    return 0;
}