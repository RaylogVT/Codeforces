// 1283A - Minutes Before The New Year
// https://codeforces.com/problemset/problem/1283/A

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
        // 2) hora = Hora actual
        // 3) minuto = Minuto actual
        int hora, minuto;
        cin >> hora >> minuto;

        // Calcula la cantidad de minutos faltantes para Año Nuevo
        int minutos_faltantes = (23 - hora) * 60 + (60 - minuto);

        // Imprime la cantidad de minutos faltantes para Año Nuevo
        cout << minutos_faltantes << endl;

    }

    return 0;
}