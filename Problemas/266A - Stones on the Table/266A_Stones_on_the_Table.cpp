// 266A - Stones on the Table
// https://codeforces.com/problemset/problem/266/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Input - Número de piedras
    int piedras;
    cin >> piedras;

    // Input - Colores de las piedras   
    string RGB;
    cin >> RGB;

    // Output - Número de piedras nuevas a añadir
    int nuevas_piedras = 0;

    // Compara dos piedras vecinas
    for(int i = 1; i <= piedras; i++) {

        // Si son iguales, añadirás una nueva piedra
        if(RGB[i] == RGB[i-1]) {
            nuevas_piedras++;
        }
    }

    // Imprime el número de piedras nuevas a añadir
    cout << nuevas_piedras << endl;

    return 0;
}