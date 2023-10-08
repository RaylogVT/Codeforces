// 200B - Drinks
// https://codeforces.com/problemset/problem/200/b

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) Número de bebidas
    int bebidas;
    cin >> bebidas;

    // Suma de los porcentajes de jugo de naranja de cada bebida
    float suma_porcentajes_jugo = 0;

    // Itera sobre cada bebida
    for(int bebida_actual = 0; bebida_actual < bebidas; bebida_actual++) {

        // Input:
        // 2) % de jugo de naranja en cada bebida
        int porcentaje_jugo_bebida;
        cin >> porcentaje_jugo_bebida;

        // Suma los porcentajes de jugo de naranja de todas las bebidas
        suma_porcentajes_jugo = suma_porcentajes_jugo + porcentaje_jugo_bebida;
    }

    // Saca el promedio de los porcentajes de jugo de naranja de las bebidas
    float porcentaje_jugo_mezcla = suma_porcentajes_jugo / float(bebidas);
    cout << porcentaje_jugo_mezcla;

    return 0;
}