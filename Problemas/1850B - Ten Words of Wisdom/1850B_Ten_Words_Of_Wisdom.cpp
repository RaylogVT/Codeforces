// 1850B - Ten Words of Wisdom 
// https://codeforces.com/problemset/problem/1850/B

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
        // 2) respuestas = Número de respuestas
        int respuestas;
        cin >> respuestas;
    
        // Calidad máxima de las respuestas válidas
        int calidad_maxima = 0;
    
        // Índice del participante con la calidad máxima
        int indice_calidad = 0;

        // Itera sobre cada caso de prueba
        for(int indice_respuesta = 0; indice_respuesta < respuestas; indice_respuesta++) {
            
            // Input:
            // 3) palabras = Número de palabras en la respuesta
            // 4) Calidad = Calidad numérica de la respuesta
            int palabras, calidad;
            cin >> palabras >> calidad;

            // Si la respuesta tiene 10 o menos palabras, entonces se considera válida
            if(palabras <= 10) {

                // Si la respuesta tiene más calidad que el máximo actual, entonces se actualiza la calidad máxima
                if(calidad > calidad_maxima) {

                    // Actualiza la calidad máxima
                    calidad_maxima = calidad;

                    // Guarda el índice del participante
                    indice_calidad = indice_respuesta + 1;
                }
            }
        }

        // Imprime el índice del participante con la respuesta con la mayor calidad
        cout << indice_calidad << endl;
    }

    return 0;
}