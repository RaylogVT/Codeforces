// 228A - Is your horseshoe on the other hoof?  
// https://codeforces.com/problemset/problem/228/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) Colores de las 4 herraduras
    int color;
    
    // set() de índices de los sin repeticiones
    set<int> colores_distintos;

    // Declara el índice de color de cada herradura
    // Añade el índice al set de índices de colores
    for(int herradura = 0; herradura < 4; herradura++) {
        cin >> color;
        colores_distintos.insert(color);
    }

    // ¿Cuántos colores me faltan para tener de 4 tipos?
    int colores_faltantes = 4 - colores_distintos.size();

    // Imprime el número de herraduras de distinto color que debo comprar
    cout << colores_faltantes;

    return 0;
}