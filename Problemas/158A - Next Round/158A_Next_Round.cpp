/*
158A - Next Round
https://codeforces.com/problemset/problem/158/A
*/

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Inputs:
    // 1) Número de participantes
    // 2) K-esimo participante
    int num_participantes, k_particpante;
    cin >> num_participantes >> k_particpante;

    // Arreglo de participantes
    int lista_participantes[100];

    // Lee la puntuación de cada participante
    for(int i = 0; i < num_participantes; i++) {
        cin >> lista_participantes[i];
    }

    // Puntuación del k-esimo participante
    int k_puntuacion = lista_participantes[k_particpante - 1];

    // Número de participantes que pasan a la siguiente ronda
    int participantes_siguiente_ronda = 0;

    // Compara las puntuaciones de los particpantes contra la del k-esimo participante
    for(int participante = 0; participante < num_participantes; participante++) {
        if(lista_participantes[participante] >= k_puntuacion && lista_participantes[participante] > 0) {
            participantes_siguiente_ronda++;
        }
    }

    // Imprime el número de participantes que pasan a la siguiente ronda
    cout << participantes_siguiente_ronda;

    return 0;
}