// 1950C - Clock Conversion  
// https://codeforces.com/problemset/problem/1950/C

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
        // 2) horario24 = Hora en formato de 24 horas
        string horario24;
        cin >> horario24;

        // Hora en formato de 12 horas
        string horario12 = "";

        // Extrae las horas
        int hora = stoi(horario24.substr(0,2));

        // Calcula la hora en formato de 12 horas
        // Las 00:XX y 12:XX se mantienen como 12
        int hora12;
        if(hora == 0 || hora == 12) {
            hora12 = 12;
        } else {
            hora12 = hora % 12;
        }

        // Añade el 0 inicial al formato de 12 horas si es necesario
        if(hora12 < 10) {
            horario12 += "0";
        }

        // Añade las horas y minutos al horario
        horario12 += to_string(hora12) + horario24.substr(2,3);

        // Si la hora es mayor a 12, entonces se convierte a PM, de lo contario, se convierte a AM
        if(hora >= 12) {
            horario12 += " PM";
        } else {
            horario12 += " AM";
        }

        // Imprime el horario en formato de 12 horas  
        cout << horario12 << endl;

    }

    return 0;
}