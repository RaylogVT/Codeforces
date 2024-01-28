// 432A - Choosing Teams
// https://codeforces.com/problemset/problem/432/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) personas = Número de personas/miembros (n)
    // 2) participaciones_requeridas = Cantidad de veces que una persona debe participar en los campeonatos (k)
    int personas, participaciones_requeridas;
    cin >> personas >> participaciones_requeridas;

    // Input:
    // 3) participaciones_previas = Cantidad de veces que una persona ha participado antes en un campeonato (y)
    int participaciones_previas[2000];
    for(int indice_persona = 0; indice_persona < personas; indice_persona++) {
        cin >> participaciones_previas[indice_persona];
    }

    // Número de personas que pueden participar K veces en los campeonatos
    int personas_disponibles = 0;

    // Itera sobre las participaciones previas de las personas
    for(int indice_persona = 0; indice_persona < personas; indice_persona++) {
        
        // ¿La persona puede participar K veces en los campeonatos dadas su participaciones previas?
        if((5 - participaciones_previas[indice_persona]) >= participaciones_requeridas) {

            // Si la persona puede participar K veces, entonces suma +1 al número de personas disponibles
            personas_disponibles += 1;
        }
    }

    // ¿Cuántos equipos se pueden formar?
    int cantidad_equipos = personas_disponibles / 3;

    // Imprime la cantidad de equipos que se formaron
    cout << cantidad_equipos << endl;

    return 0;
}