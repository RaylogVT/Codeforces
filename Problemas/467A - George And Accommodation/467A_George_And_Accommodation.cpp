// 467A - George And Accommodation
// https://codeforces.com/problemset/problem/467/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) num_cuartos = Número de cuartos
    int num_cuartos;
    cin >> num_cuartos;

    // Contador de cuartos disponibles en los que George y Alex pueden mudarse
    int cuartos_disponibles = 0;

    // Revisa la capacidad de cada cuarto
    while(num_cuartos--){

        // Input:
        // 1) personas_viviendo = Número de personas viviendo en el cuarto
        // 2) capacidad_cuarto = Número de personas que puede albergar el cuarto
        int personas_viviendo, capacidad_cuarto;
        cin >> personas_viviendo >> capacidad_cuarto;

        // Si el número de personas viviendo en el cuarto + 2 (George y Alex) es menor o igual a la capacidad del cuarto,
        // entonces pueden mudarse ahí, suma +1 al contador de cuartos disponibles
        if(personas_viviendo + 2 <= capacidad_cuarto) {
            cuartos_disponibles++;
        }
    }

    // Imprime el número de cuartos disponibles
    cout << cuartos_disponibles;

    return 0;
}
