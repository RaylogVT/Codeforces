// 266A - Stones on the Table
// https://codeforces.com/problemset/problem/266/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Input:
    // 1) num_piedras = Número de piedras
    int num_piedras;
    cin >> num_piedras;

    // Input:
    // 2) RGB = Colores de piedras
    string RGB;
    cin >> RGB;

    // Número de piedras nuevas a añadir
    int nuevas_piedras = 0;

    // Itera sobre las piedras
    for(int piedra = 1; piedra <= num_piedras; piedra++) {
        
        // Compara dos piedras vecinas
        // Si son iguales, añade una nueva piedra, suma +1 contador de piedras nuevas
        if(RGB[piedra] == RGB[piedra-1]) {
            nuevas_piedras++;
        }
    }

    // Imprime el número de piedras nuevas a añadir
    cout << nuevas_piedras << endl;

    return 0;
}
