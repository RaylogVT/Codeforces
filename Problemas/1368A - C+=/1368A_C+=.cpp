// 1368A - C+=
// https://codeforces.com/problemset/problem/1368/A

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
        // 2) a,b = Números iniciales
        // 3) n = Número a superar
        int a,b,n;
        cin >> a >> b >> n;

        // Settea los primeros dos términos del Fibonacci
        int t1, t2;
        if(a <= b) {
            t1 = a;
            t2 = b;
        } else {
            t1 = b;
            t2 = a;
        }

        // Variable para autosuma
        int suma = 0;

        // Contador de números de Fibonacci
        int contador = 0;

        // Mientras la autosuma no exceda N, expande el Fibonacci
        while(suma <= n){

            // Realiza la autosuma
            suma = t1 + t2;
            t1 = t2;
            t2 = suma;

            // Lleva el conteo de números de Fibonacci generados
            contador++;
        }
        cout << contador << endl;

    }

    return 0;
}