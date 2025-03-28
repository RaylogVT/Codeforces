// 1374A - Required Remainder
// https://codeforces.com/problemset/problem/1374/A

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
        // 2) x = Número divisor
        // 3) y = Residuo a obtener
        // 4) n = Número máximo posible
        int x, y, n;
        cin >> x >> y >> n;

        // n - (n % x) --> Elimina el residuo de N, representa el número máximo divisible por X y menor a N
        // n - (n % x) + y --> Número próximo (k) al máximo divisible por X que permite que k mod = y
        // n - (n % x) - (x - y) --> Número previo (k) al máximo divisible por X que permite que k mod = y
        // Detecta si el número próximo (k) es menor a n. Si lo es, entonces devuélvelo, de lo contrario, devuelve el número previo (k)
        if(n - (n % x) + y <= n) {
            cout << n - (n % x) + y << endl;
        } else {
            cout << n - (n % x) - (x - y) << endl;
        }
    } 

    return 0;
}