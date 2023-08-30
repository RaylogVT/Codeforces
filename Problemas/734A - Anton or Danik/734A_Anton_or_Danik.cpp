// 734A - Anton or Danik
// https://codeforces.com/problemset/problem/734/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input #1 - Número de partidas de ajedrez jugadas
    int partidas;
    cin >> partidas;

    // Input #2 - Quién ganó cada partida
    string victorias;
    cin >> victorias;

    // Contador de victorias de Anton y Danik
    int victorias_anton = 0, victorias_danik = 0;

    // Cuenta cuántas victorias tuvo cada uno
    for(int letra = 0; letra < partidas; letra++) {

        // Si la letra es igual a 'A', entonces ganó Anton la partida
        if(victorias[letra] == 'A') {
            victorias_anton++;
        }

        // Si la letra es igual a 'D', entonces ganó Anton la partida
        if(victorias[letra] == 'D') {
            victorias_danik++;
        }
    }

    // Si Anton ganó más partidas que Danik, entonces imprime 'Anton'
    // Si Danik ganó más partidas que Anton, entonces imprime 'Danik'
    // Si ambos ganaron el mismo número de partidas, entonces imprime 'Friendship'
    if(victorias_anton > victorias_danik) {
        cout << "Anton" << endl;
    } else if(victorias_anton < victorias_danik) {
        cout << "Danik" << endl;
    } else if(victorias_anton == victorias_danik) {
        cout << "Friendship" << endl;
    }

    return 0;
}