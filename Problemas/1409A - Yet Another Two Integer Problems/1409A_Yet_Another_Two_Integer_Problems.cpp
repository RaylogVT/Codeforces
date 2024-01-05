// 1409A - Yet Another Two Integer Problems
// https://codeforces.com/problemset/problem/1409/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) Casos de prueba
    int pruebas;
    cin >> pruebas;

    // Realiza cada caso de prueba
    for(int prueba = 0; prueba < pruebas; prueba++) {

        // Input:
        // 2) A = Valor a convertir
        // 2) B = Valor de referencia
        int a,b;
        cin >> a >> b;

        // Diferencia entre A y B 
        int diferencia = abs(a-b);

        // Se necesita sumar/restar un valor K al final?
        // 0 = No, 1 = Sí
        int operacion_extra = 0;

        // Si abs(a-b) % 10 es mayor a 0, entonces suma +1 movimiento
        if(diferencia % 10 > 0) {
            operacion_extra = 1;
        }

        // Calcula el número de veces que debes sumar/restar 10
        // Suma (o no) +1 movimiento de la operación extra
        int movimientos = (diferencia / 10) + operacion_extra;

        // Imprime el número de movimientos a realizar
        cout << movimientos << endl;
    }

    return 0;
}