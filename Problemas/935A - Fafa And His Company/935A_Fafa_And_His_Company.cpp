// 935A - Fafa And His Company  
// https://codeforces.com/problemset/problem/935/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) empleados = Número de empleados en la empresa de Fafa
    int empleados;
    cin >> empleados;

    // Contador de combinaciones de repartición TL-Empleado
    int reparticiones = 0;

    // Itera sobre las posibles cantidades de Team Leader
    for(int TL = 1; TL < (empleados / 2 + 1); TL++) {

        // Si se pueden repartir equitativamente los empleados entre los Team Leaders, entonces suma +1 al contador de reparticiones
        if((empleados - TL) % TL == 0) {
            reparticiones++;
        }
    }

    // Imprime la cantidad de combinaciones de repartición TL-Empleado
    cout << reparticiones << endl;


    return 0;
}