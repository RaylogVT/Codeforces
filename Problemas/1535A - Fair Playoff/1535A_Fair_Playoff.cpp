// 1535A - Fair Playoff
// https://codeforces.com/problemset/problem/1535/A

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
        // 2) p1,p2,p3,p4 = Nivel de habilidad de los 4 jugadores
        int p1, p2, p3, p4;
        cin >> p1 >> p2 >> p3 >> p4;

        // Arreglo de niveles de habilidad
        vector<int> niveles_habilidad;
        niveles_habilidad.push_back(p1);
        niveles_habilidad.push_back(p2);
        niveles_habilidad.push_back(p3);
        niveles_habilidad.push_back(p4);

        // Arreglo de niveles de habilidad ordenados
        sort(niveles_habilidad.begin(), niveles_habilidad.end());

        // Extrae al 1° y 2° jugador más hábil
        int jugador_primero_mas_habil = niveles_habilidad[3];
        int jugador_segundo_mas_habil = niveles_habilidad[2]; 

        // Modela los dos partidos
        // Extrae quién tiene mayor nivel de habilidad: P1 vs. P2 y P3 vs. P4
        int ganador_partido_12 = max(p1,p2);
        int ganador_partido_34 = max(p3,p4);

        // ¿Los dos ganadores de los partidos son los jugadores más hábiles?
        // Imprime 'YES' si lo son, de lo contrario, imprime 'NO'
        if(ganador_partido_12 == jugador_primero_mas_habil) {
            if(ganador_partido_34 == jugador_segundo_mas_habil) {
                cout << "YES" << endl;
            }
        }
        if(ganador_partido_12 == jugador_segundo_mas_habil) {
            if(ganador_partido_34 == jugador_primero_mas_habil) {
                cout << "YES" << endl;
            }
        }
        if((ganador_partido_12 != jugador_primero_mas_habil && ganador_partido_12 != jugador_segundo_mas_habil) || 
           (ganador_partido_34 != jugador_primero_mas_habil && ganador_partido_34 != jugador_segundo_mas_habil)) {
            cout << "NO" << endl;
        }
    }

    return 0;
}