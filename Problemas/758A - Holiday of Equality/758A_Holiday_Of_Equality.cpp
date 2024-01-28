// 758A - Holiday of Equality 
// https://codeforces.com/problemset/problem/758/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) ciudadanos = Cantidad de ciudadanos en el reino
    int ciudadanos;
    cin >> ciudadanos;

    // Input:
    // 2) rublos_por_ciudadano = Cantidad de rublos que tiene cada ciudadano
    int rublos_por_ciudadano[100];
    for(int ciudadano_actual = 0; ciudadano_actual < ciudadanos; ciudadano_actual++) {
        cin >> rublos_por_ciudadano[ciudadano_actual];
    }

    // Saca la cantidad de rublos que tiene el ciudadano más rico
    int ciudadano_mas_rico = *max_element(rublos_por_ciudadano, rublos_por_ciudadano + ciudadanos);

    // Dinero a entregar
    int rublos_a_entregar = 0;

    for(int ciudadano_actual = 0; ciudadano_actual < ciudadanos; ciudadano_actual++) {
        rublos_a_entregar = rublos_a_entregar + (ciudadano_mas_rico - rublos_por_ciudadano[ciudadano_actual]);
    }

    // Imprime el total de rublos a entregar
    cout << rublos_a_entregar << endl;

    return 0;
}