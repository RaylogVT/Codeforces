// XXXA - 
// https://codeforces.com/problemset/problem/XXX/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) concursos = Número de concursos
    int concursos;
    cin >> concursos;

    // Input:
    // 2) puntuaciones = Puntuación de cada concurso
    int puntuaciones[1001];
    for(int puntuacion_actual = 0; puntuacion_actual < concursos; puntuacion_actual++) {
        cin >> puntuaciones[puntuacion_actual];
    }

    // Puntuación máxima y mínima del programador a lo largo de los concursos
    int puntuacion_maxima = puntuaciones[0];
    int puntuacion_minima = puntuaciones[0];

    // Número de concursos asombrosos del programador
    int concursos_asombrosos = 0;

    // Itera sobre las puntuaciones
    for(int puntuacion_actual = 0; puntuacion_actual < concursos; puntuacion_actual++) {
        
        // Si la puntuación actual es mayor a la máxima actual, entonces se actualiza la puntuación máxima y suma +1 al número de concursos asombrosos
        if(puntuaciones[puntuacion_actual] > puntuacion_maxima) {
            puntuacion_maxima = puntuaciones[puntuacion_actual];
            concursos_asombrosos += 1;
        }

        // Si la puntuación actual es menor a la mínima actual, entonces se actualiza la puntuación mínima y suma +1 al número de concursos asombrosos
        if(puntuaciones[puntuacion_actual] < puntuacion_minima) {
            puntuacion_minima = puntuaciones[puntuacion_actual];
            concursos_asombrosos += 1;
        }
    }
    
    // Imprime el número de concursos asombrosos
    cout << concursos_asombrosos << endl;

    return 0;
}
