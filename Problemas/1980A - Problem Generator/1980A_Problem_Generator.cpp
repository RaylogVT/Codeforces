// 1980A - Problem Generator  
// https://codeforces.com/problemset/problem/1858/A

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
        // 2) problemas = Cantidad de problemas en el banco
        // 3) rondas = Número de rondas a realizar
        int problemas, rondas;
        cin >> problemas >> rondas;

        // Input:
        // 4) problemas = Cantidad de problemas en el banco
        string banco;
        cin >> banco;

        // Número de problemas a agregar al banco 
        int problemasAgregar = 0;

        // Dificultad del problema actual
        string dificultades = "ABCEDFG";

        // Itera sobre las dificultades de los problemas
        for(int indice_dificultad = 0; indice_dificultad < dificultades.length(); indice_dificultad++) {

            // Cuenta cuántos problemas hay de la dificultad actual
            int problemasDificultadActual = count(banco.begin(), banco.end(), dificultades[indice_dificultad]);

            // Si tienes menos problemas de una dificultad de las que necesitas, entonces agrégalas al banco
            if(problemasDificultadActual < rondas) {

                // Suma la cantidad de problemas a agregar
                problemasAgregar += (rondas - problemasDificultadActual);
            }
        }

        // Imprime la cantidad del problemas a agregar al banco
        cout << problemasAgregar << endl;
    }

    return 0;
}