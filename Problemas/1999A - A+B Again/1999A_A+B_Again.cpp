// 1999A - A + B Again 
// https://codeforces.com/problemset/problem/1999/A

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
        // 2) N = Número a sumar
        int N;
        cin >> N;

        // Extrae el 1° dígito con división entera
        // Extrae el 2° dígito con módulo
        // Suma los dígitos
        int suma_digitos = (N / 10) + (N % 10);

        // Imprime la suma de los digitos
        cout << suma_digitos << endl;
    }

    return 0;
}