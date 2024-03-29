// 723A - New Year: Meeting Friends
// https://codeforces.com/problemset/problem/723/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) coordenadas_amigos = Coordenadas de las casas de los amigos
    int coordenadas_amigos[3];
    for(int amigo = 0; amigo < 3; amigo++) {
        cin >> coordenadas_amigos[amigo];
    }

    // Resta la coordenada más alta y baja de las 3 para calcular la distancia mínima
    int distancia = *max_element(coordenadas_amigos, coordenadas_amigos+3) - *min_element(coordenadas_amigos, coordenadas_amigos+3);

    // Imprime la distancia recorrida
    cout << distancia << endl;

    return 0;
}
