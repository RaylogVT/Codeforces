// 266A - Stones on the Table
// https://codeforces.com/problemset/problem/266/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Inputs:
    // 1) Número de piedras
    // 2) Colores de piedras
    int num_piedras;
    cin >> num_piedras;
  
    string RGB;
    cin >> RGB;

    // Número de piedras nuevas a añadir
    int nuevas_piedras = 0;

    // Compara dos piedras vecinas
    for(int piedra = 1; piedra <= num_piedras; piedra++) {

        // Si son iguales, añade una nueva piedra
        if(RGB[piedra] == RGB[piedra-1]) {
            nuevas_piedras++;
        }
    }

    // Imprime el número de piedras nuevas a añadir
    cout << nuevas_piedras << endl;

    return 0;
}