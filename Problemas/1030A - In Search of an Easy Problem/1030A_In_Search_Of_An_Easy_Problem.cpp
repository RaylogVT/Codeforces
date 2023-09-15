// 1030A - In Search of an Easy Problem
// https://codeforces.com/problemset/problem/1030/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) Número de respuestas
    int num_respuestas;
    cin >> num_respuestas;

    // Checa la respuesta de cada persona
    while(num_respuestas--) {

        // Input:
        // 2) Respuesta de la persona
        int respuesta;
        cin >> respuesta;

        if(respuesta == 1) {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;

    return 0;
}