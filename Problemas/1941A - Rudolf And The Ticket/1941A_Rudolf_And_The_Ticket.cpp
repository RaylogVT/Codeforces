// 1941A - Rudolf And The Ticket
// https://codeforces.com/problemset/problem/1941/A

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
        // 2) monedas_izquierda = Cantidad de monedas en el bolsillo izquierdo
        // 3) monedas_derecha = Cantidad de monedas en el bolsillo derecho
        // 4) limite = Límite de suma a superar con las monedas
        int monedas_izquierda, monedas_derecha, limite;
        cin >> monedas_izquierda >> monedas_derecha >> limite;

        // Input:
        // 5) denominaciones_izquierda = Denominaciones de las monedas en el bolsillo izquierdo
        // 6) denominaciones_derecha = Denominaciones de las monedas en el bolsillo derecho
        int denominaciones_izquierda[101], denominaciones_derecha[101];
        for(int indice_moneda = 0; indice_moneda < monedas_izquierda; ++indice_moneda) {
            cin >> denominaciones_izquierda[indice_moneda];
        }
        for(int indice_moneda = 0; indice_moneda < monedas_derecha; ++indice_moneda) {
            cin >> denominaciones_derecha[indice_moneda];
        }

        // Contador de pares de monedas que no superan el límite
        int contador_pares_validos = 0;

        // Itera sobre las combinaciones de pares de monedas:
        for(int indice_moneda_izquierda = 0; indice_moneda_izquierda < monedas_izquierda; ++indice_moneda_izquierda) {
            for(int indice_moneda_derecha = 0; indice_moneda_derecha < monedas_derecha; ++indice_moneda_derecha) {

                // Si la suma de las dos monedas actuales no excede el límite, entonces se suma +1 al contador
                if(denominaciones_izquierda[indice_moneda_izquierda] + denominaciones_derecha[indice_moneda_derecha] <= limite) {
                    contador_pares_validos += 1;
                }
            }
        }

        // Imprime la cantidad de pares válidos
        cout << contador_pares_validos << endl;
    }

    return 0;
}