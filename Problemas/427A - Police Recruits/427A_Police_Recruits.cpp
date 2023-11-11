// XXXA - 
// https://codeforces.com/problemset/problem/XXX/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) Número de eventos
    int eventos;
    cin >> eventos;

    // Input:
    // 2) Lista de eventos
    int lista_eventos[10001];
    for(int evento_actual = 0; evento_actual < eventos; evento_actual++) {
        cin >> lista_eventos[evento_actual];
    }

    // Número de policías en servicio
    int policias_disponibles = 0;

    // Número de crímenes no tratados
    int crimenes_sin_tratar = 0;

    // Itera sobre los eventos
    for(int evento_actual = 0; evento_actual < eventos; evento_actual++) {
        
        // Si el evento es un número positivo, entonces es una contratación de policías
        // Añade los policías al número de policías
        if(lista_eventos[evento_actual] > 0) {
            policias_disponibles = policias_disponibles + lista_eventos[evento_actual];
        }

        // Si el evento es igual a -1, entonces es un crimen
        if(lista_eventos[evento_actual] == -1) {

            // Si no hay policias disponibles, entonces el crimen no se trata
            if(policias_disponibles == 0) {
                crimenes_sin_tratar = crimenes_sin_tratar + 1;
            } 
            
            // Si hay policias disponibles, resta -1 al número de policías disponibles
            else if(policias_disponibles > 0) {
                policias_disponibles = policias_disponibles - 1;
            }
        }
    }

    // Imprime el número de crímenes sin tratar
    cout << crimenes_sin_tratar << endl;

    return 0;
}