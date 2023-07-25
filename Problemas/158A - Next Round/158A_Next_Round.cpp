/*
158A - Next Round
https://codeforces.com/problemset/problem/158/A
*/

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // n = Número de participantes
    // k = K-esimo participantes
    int num_participantes, k_particpante;
    cin >> num_participantes >> k_particpante;

    // Arreglo de participantes
    int lista_participantes[100];

    for(int i = 0; i < num_participantes; i++) {
        cin >> lista_participantes[i];
    }

    // Puntuación del k-esimo participante
    int k_puntuacion = lista_participantes[k_particpante - 1];

    // Número de participantes que pasan a la siguiente ronda
    int participantes_siguiente_ronda = 0;

    // Comparar las puntuaciones de los particpantes contra la del k-esimo participante
    for(int i = 0; i < num_participantes; i++) {
        if(lista_participantes[i] >= k_puntuacion && lista_participantes[i] > 0) {
            participantes_siguiente_ronda++;
        }
    }

    // Imprimir participantes que pasan a la siguiente ronda
    cout << participantes_siguiente_ronda;

    return 0;
}

// Arreglo = Coleección de elementos = [10 9 8 7 7 7 5 5]