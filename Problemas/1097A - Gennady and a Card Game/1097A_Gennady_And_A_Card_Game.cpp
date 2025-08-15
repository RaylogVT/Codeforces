// 1097A - Gennady and a Card Game
// https://codeforces.com/problemset/problem/1097/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) carta_mesa = Carta en la mesa
    string carta_mesa;
    cin >> carta_mesa;

    // Input:
    // 2) carta_mano = Cartas en la mano
    string cartas_mano[5];
    for(int indice_carta = 0; indice_carta < 5; indice_carta++) {
        cin >> cartas_mano[indice_carta];
    }

    // Compara los números y tipos de las cartas en tu mano con el de la mesa
    bool bajar_carta = false;
    for(int indice_carta = 0; indice_carta < 5; indice_carta++) {
        string carta_actual = cartas_mano[indice_carta];
        if(carta_actual[0] == carta_mesa[0]) {
            bajar_carta = true;
        }
        if(carta_actual[1] == carta_mesa[1]) {
            bajar_carta = true;
        }
    }

    // Si hay una coincidencia en una carta, entonces imprime "YES", de lo contrario, imprime "NO"
    if(bajar_carta) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}