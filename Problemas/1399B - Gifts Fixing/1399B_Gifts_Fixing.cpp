// 1399B - Gifts Fixing 
// https://codeforces.com/problemset/problem/1399/B

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
        // 2) regalos = Cantidad de regalos
        int regalos;
        cin >> regalos;
    
        // Input:
        // 3) dulces = Cantidad de dulces por regalo
        int dulces[51];
        for(int indice_dulces = 0; indice_dulces < regalos; indice_dulces++) {
            cin >> dulces[indice_dulces];
        }
    
        // Input:
        // 4) naranjas = Cantidad de naranjas por regalo
        int naranjas[51];
        for(int indice_naranjas = 0; indice_naranjas < regalos; indice_naranjas++) {
            cin >> naranjas[indice_naranjas];
        }

        // Calcula la cantidad mínima de dulces a dejar en cada regalo
        int minimo_dulces = 1000000001;
        for(int indice_dulces = 0; indice_dulces < regalos; indice_dulces++) {
            if(dulces[indice_dulces] < minimo_dulces) {
                minimo_dulces = dulces[indice_dulces];
            }
        }

        // Calcula la cantidad mínima de naranjas a dejar en cada regalo
        int minimo_naranjas = 1000000001;
        for(int indice_naranjas = 0; indice_naranjas < regalos; indice_naranjas++) {
            if(naranjas[indice_naranjas] < minimo_naranjas) {
                minimo_naranjas = naranjas[indice_naranjas];
            }
        }
        
        // Contador de movimimentos
        long long int movimientos = 0;

        // Itera sobre cada regalo
        for(int indice_regalo = 0; indice_regalo < regalos; indice_regalo++) {

            // Calcula la cantidad mínima de movimientos a realizar por cada regalo
            movimientos += max(dulces[indice_regalo] - minimo_dulces, naranjas[indice_regalo] - minimo_naranjas);
        }

        // Imprime la cantidad de movimientos realizados
        cout << movimientos << endl;
    }

    return 0;
}