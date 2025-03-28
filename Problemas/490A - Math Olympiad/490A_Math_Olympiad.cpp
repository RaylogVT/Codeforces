// 490A - Math Olympiad
// https://codeforces.com/problemset/problem/490/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) ninos = Número de niños en la escuela
    int ninos;
    cin >> ninos;

    // Input:
    // 2) habilidades = Habilidad de cada niño
    int habilidades[5000];
    for(int nino_actual = 0; nino_actual < ninos; nino_actual++) {
        cin >> habilidades[nino_actual];
    }

    // Listas de índices de los niños buenos en cada materias
    vector<int> indices_ninos_programacion;
    vector<int> indices_ninos_matematicas;
    vector<int> indices_ninos_deportes;

    // Itera sobre las habilidades de los niños
    for(int indice_habilidad = 0; indice_habilidad < ninos; indice_habilidad++) {

        // Si el niño actual es bueno en programación (1), entonces añade su índice a la lista de índices de niños buenos en programación
        if(habilidades[indice_habilidad] == 1) {
            indices_ninos_programacion.push_back(indice_habilidad + 1);
        }
        
        // Si el niño actual es bueno en matemáticas (2), entonces añade su índice a la lista de índices de niños buenos en matemáticas
        if(habilidades[indice_habilidad] == 2) {
            indices_ninos_matematicas.push_back(indice_habilidad + 1);
        }

        // Si el niño actual es bueno en deportes (3), entonces añade su índice a la lista de índices de niños buenos en deportes
        if(habilidades[indice_habilidad] == 3) {
            indices_ninos_deportes.push_back(indice_habilidad + 1);
        }
    
    }

    // Número de equipos a formar
    int equipos;

    // Número de niños buenos en cada materia
    int cantidad_ninos_programacion = indices_ninos_programacion.size(); 
    int cantidad_ninos_matematicas = indices_ninos_matematicas.size(); 
    int cantidad_ninos_deportes = indices_ninos_deportes.size(); 
    
    // Calcula el número máximo de equipos que se pueden formar
    // El resultado estará dictado por la materia con la menor cantidad de niños prodigio
    equipos = min({cantidad_ninos_programacion, cantidad_ninos_matematicas, cantidad_ninos_deportes});
    
    // Imprime la cantidad de equipos a realizar
    cout << equipos << endl;

    // Itera sobre los equipos a realizar
    for(int equipo_actual = 0; equipo_actual < equipos; equipo_actual++) {

        // Extrae el índice en un niño bueno en cada materia para formar un equipo
        cout << indices_ninos_programacion[equipo_actual] << " " << indices_ninos_matematicas[equipo_actual] << " " << indices_ninos_deportes[equipo_actual] << endl;
    }

    return 0;
}