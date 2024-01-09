// 268A - Games 
// https://codeforces.com/problemset/problem/268/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) equipos = Número de equipos
    int equipos;
    cin >> equipos;

    // Colores de casa y visitante de los equipos
    int colores_casa[31];
    int colores_visitante[31];

    // Input:
    // 2) colores_casa = Colores de uniformes de casa de los equipos
    // 3) colores_visitante = Colores de uniformes de visitante de los equipos
    for(int equipo_actual = 0; equipo_actual < equipos; equipo_actual++) {
        cin >> colores_casa[equipo_actual] >> colores_visitante[equipo_actual];
    }

    // Número de veces que dos equipos al enfrentarse tienen colores de uniforme iguales
    int colores_repetidos = 0;

    // Prueba todas las combinaciones de partidos entre equipos
    for(int equipo_casa = 0; equipo_casa < equipos; equipo_casa++) {
        for(int equipo_visitante = 0; equipo_visitante < equipos; equipo_visitante++) {

            // Si al enfrentarse, el equipo de casa y visitante tienen el mismo color de uniforme, suma +1 al contador
            if(colores_casa[equipo_casa] == colores_visitante[equipo_visitante]) {
                colores_repetidos++;
            }
        }
    }

    // Imprime el número de veces que los colores se repitieron en un partido
    cout << colores_repetidos << endl;

    return 0;
}
