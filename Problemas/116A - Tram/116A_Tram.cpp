// 116A - Tram
// https://codeforces.com/problemset/problem/116/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Inputs:
    // 1) Número de estaciones
    int estaciones;
    cin >> estaciones;

    // Número máximo de pasajeros que el tren ha tenido hasta el momento
    int maximo_pasajeros = 0;

    // Número de pasajeros que el tren tiene actualmente
    int pasajeros_actuales = 0;

    // Recorre cada estación
    for(int estacion = 0; estacion < estaciones; estacion++) {

        // Inputs:
        // 2) Número de pasajeros que salen del tren
        // 3) Número de pasajeros que entran al tren
        int pasajeros_salientes, pasajeros_entrantes;
        cin >> pasajeros_salientes >> pasajeros_entrantes;

        // Calcula cuántos pasajeros tiene el tren después de que salieran y entraran los correspondientes
        pasajeros_actuales = pasajeros_actuales - pasajeros_salientes + pasajeros_entrantes;

        // ¿El tren tiene más pasajeros del máximo que se ha registrado hasta el momento?
        // Si sí, acutaliza el valor del máximo registrado, de lo contrario, no se actualiza 
        if(pasajeros_actuales > maximo_pasajeros) {
            maximo_pasajeros = pasajeros_actuales;
        }
    }

    // Imprime el número máximo de pasajeros que albergó el tren durante su viaje
    cout << maximo_pasajeros << endl;

    return 0;
}