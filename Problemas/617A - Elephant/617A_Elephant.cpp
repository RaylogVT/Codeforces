// 977A - Wrong Substraction
// https://codeforces.com/problemset/problem/977/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) posicion_amigo = Posición del amigo
    int posicion_amigo;
    cin >> posicion_amigo;

    // Avanza en posiciones de 5 en 5
    // Redondea hacia arriba para contemplar el último paso (si en este avanzar menos de 5 posiciones)
    int pasos = ceil(posicion_amigo / 5.0);
    cout << pasos << endl;

    return 0;
}
