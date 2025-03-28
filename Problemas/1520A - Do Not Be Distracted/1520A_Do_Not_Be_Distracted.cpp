// 1520A - Do Not Be Distracted
// https://codeforces.com/problemset/problem/1520/A

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
        // 2) dias = Número de días trasncurridos
        int dias;
        cin >> dias;

        // Input:
        // 3) tareas = Orden de las tareas realizadas
        string tareas;
        cin >> tareas;

        // Variable bandera - ¿Una tarea se partió en dos?
        bool tarea_partida = false;

        // Itera sobre cada tarea realizada
        for(int letra = 1; letra < dias; letra++) {

            // ¿Qué tareas has hecho antes?
            set<char> tareas_previas;

            // Itera sobre las tareas previas
	        for(int letra_inicial = 0; letra_inicial < letra; letra_inicial++) {

                // Enlista las tareas previas
                tareas_previas.insert(tareas[letra_inicial]);
            }

            // ¿La tarea actual es una que has hecho antes?
            auto tarea_actual_hecha = tareas_previas.find(tareas[letra]);

            /* 
            ¿La tarea del día de hoy ya se ha hecho antes?
            ¿La tarea del día de hoy es distinta a la de ayer?
            Si sí, entonces la tarea se partió en dos
            */
            if(tarea_actual_hecha != tareas_previas.end() && tareas[letra] != tareas[letra-1]) {
                tarea_partida = true;
                break;
            }
        }
        
        /*
        Revisa el valor de la variable bandera
        Si True, entonces se partió una tarea en dos, imprime "NO", de lo contrario, imprime "YES"
        */
        if(tarea_partida == true) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}