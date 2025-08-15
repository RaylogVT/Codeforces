// 1837A - Grasshopper On A Line  
// https://codeforces.com/problemset/problem/1837/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) pruebas = Número de casos de prueba
    int pruebas;
    cin >> pruebas;

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {

        // Input:
        // 2) destino = Punto de destino 
        // 3) restriccion = Múltiplo por el cual los saltos no se pueden realizar
        int destino, restriccion;
        cin >> destino >> restriccion;

        // Si el punto de destino es múltiplo de la restricción, entonces se necesitan 2 saltos: (X-1, 1)
        if(destino % restriccion == 0) {
            cout << 2 << endl;
            cout << destino-1 << " " << 1 << endl;
        
        // Si el punto de destino no es múltiplo de la restricción, entonces se necesitan 1 salto: X
        } else {
            cout << 1 << endl;
            cout << destino << endl;
        }
    }

    return 0;
}