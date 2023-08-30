// 116A - Tram
// https://codeforces.com/problemset/problem/116/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Input - Número de estaciones
    int estaciones;
    cin >> estaciones;

    // Número máximo de pasajeros que el tren ha tenido hasta el momento
    int maximo_pasajeros = 0;

    // Número de pasajeros que el tren tiene actualmente
    int pasajeros_actuales = 0;

    for(int estacion = 0; estacion < estaciones; estacion++) {
        // Input - Número de pasajeros que salen y entran del tren
        int pasajeros_salientes, pasajeros_entrantes;
        cin >> pasajeros_salientes >> pasajeros_entrantes;

        // Calcula cuántos pasajeros tiene el tren después de que salieran y entraran los correspondientes
        pasajeros_actuales = pasajeros_actuales - pasajeros_salientes + pasajeros_entrantes;

        // ¿El tren tiene más pasajeros del máximo que se ha registrado hasta el momento?
        // Si sí, acutaliza el valor del máximo registrado, de lo contrario, no se actualiza nada
        if(pasajeros_actuales > maximo_pasajeros) {
            maximo_pasajeros = pasajeros_actuales;
        }
    }
    cout << maximo_pasajeros << endl;

    return 0;
}