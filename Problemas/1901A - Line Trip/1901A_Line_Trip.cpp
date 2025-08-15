// 1901A - Line Trip  
// https://codeforces.com/problemset/problem/1901/A

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
        // 2) gasolineras = Número de gasonlineras en el camino
        // 3) punto_final = Destino final del viaje
        int gasolineras, punto_final;
        cin >> gasolineras >> punto_final;

        // Input:
        // 4) ubicaciones = Puntos donde hay gasolineras
        int ubicaciones[51];
        for(int indice_gasolineras = 0; indice_gasolineras < gasolineras; indice_gasolineras++) {
            cin >> ubicaciones[indice_gasolineras];
        }
        
        // Cantidad de litros mínima a llevar en el viaje
        int tanque_minimo = 0;

        // Distancia entre dos paradas
        int distancia;



        // Itera sobre las paradas
        for(int indice_gasolineras = 0; indice_gasolineras < gasolineras; indice_gasolineras++) {
            
            // Calcula la distancia entre el inicio y la 1° gasolinera
            if(indice_gasolineras == 0) {
                distancia = ubicaciones[indice_gasolineras];
            
            // Calcula la distancia entre dos gasolineras
            } else {
                distancia = ubicaciones[indice_gasolineras] - ubicaciones[indice_gasolineras - 1];
            }

            // Si la distancia entre dos puntos es mayor al tanque mínimo actual, entonces se actualiza
            if(distancia > tanque_minimo) {
                tanque_minimo = distancia;
            }
        }

        // Calcula la distancia entre el destino y la última gasolinera
        int distancia_final = 2 * (punto_final - ubicaciones[gasolineras - 1]);

        // Si la distancia entre dos puntos es mayor al tanque mínimo actual, entonces se actualiza
        if(distancia_final > tanque_minimo) {
            tanque_minimo = distancia_final;
        }

        // Imprime la cantidad de litros mínima a llevar en el tanque
        cout << tanque_minimo << endl;
    }

    return 0;
}