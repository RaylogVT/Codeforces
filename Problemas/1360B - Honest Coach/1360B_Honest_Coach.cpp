// 1360B - Honest Coach
// https://codeforces.com/problemset/problem/1360/B

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
        // 2) atletas = Número de atletas
        int atletas;
        cin >> atletas;

        // Input:
        // 3) fuerzas = Fuerzas de los atletas
        int fuerzas[51];
        for(int indice_arreglo = 0; indice_arreglo < atletas; indice_arreglo++) { 
            cin >> fuerzas[indice_arreglo];
        }   

        // Ordena las fuerzas de los atletas
        sort(fuerzas, fuerzas+atletas);

        // Diferencia de fuerzas mínima encontrada hasta el momento
        int diferencia_fuerzas_minima = fuerzas[atletas - 1] - fuerzas[0];

        // Compara todas las parejas de atletas posibles
        for(int indice_atleta1 = 0; indice_atleta1 < atletas; indice_atleta1++) { 
           for(int indice_atleta2 = indice_atleta1 + 1; indice_atleta2 < atletas; indice_atleta2++) { 

                // Compara la diferencia de fuerzas mínima encontrada hasta el momento contra la actual entre atleta 1 y 2
                diferencia_fuerzas_minima = min(diferencia_fuerzas_minima, fuerzas[indice_atleta2] - fuerzas[indice_atleta1]);
            } 
        }   

        // Imprime la diferencia de fuerzas mínima encontrada
        cout << diferencia_fuerzas_minima << endl;
    }

    return 0;
}