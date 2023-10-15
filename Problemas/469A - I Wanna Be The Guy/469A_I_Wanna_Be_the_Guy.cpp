// XXXA - 
// https://codeforces.com/problemset/problem/469/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) N - Número de niveles
    int niveles;
    cin >> niveles;

    // Input:
    // 2) X - Cantidad de niveles que X puede pasarse
    int num_nivelesX;
    cin >> num_nivelesX;

    // Input:
    // 3) NivelesX - Niveles que X puede pasarse
    int lista_nivelesX[num_nivelesX];
    for(int nivel = 0; nivel < num_nivelesX; nivel++) {
        cin >> lista_nivelesX[nivel];
    }

    // Input:
    // 4) Y - Cantidad de niveles que Y puede pasarse
    int num_nivelesY;
    cin >> num_nivelesY;

    // Input:
    // 5) NivelesY - Niveles que Y puede pasarse
    int lista_nivelesY[num_nivelesY];
    for(int nivel = 0; nivel < num_nivelesY; nivel++) {
        cin >> lista_nivelesY[nivel];
    }
    
    // Set de niveles que X y Y se pueden pasar
    set<int> nivelesXY;

    // Inserta en el set los niveles que X puede pasar
    for(int nivel = 0; nivel < num_nivelesX; nivel++) {
        nivelesXY.insert(lista_nivelesX[nivel]);
    }

    // Inserta en el set los niveles que X puede pasar
    for(int nivel = 0; nivel < num_nivelesY; nivel++) {
        nivelesXY.insert(lista_nivelesY[nivel]);
    }

    // Si el tamaño del set es igual al número de niveles, enotnce X y Y pueden pasarse todos los niveles, imprime 'I become the guy.'
    // Si el tamaño del set es distinto al número de niveles, enotnce X y Y no pueden pasarse todos los niveles, imprime 'Oh, my keyboard!'
    if(nivelesXY.size() == niveles) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}