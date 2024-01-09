// 677A - Vanya And Fence
// https://codeforces.com/problemset/problem/677/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) amigos = Número de amigos
    // 2) altura_valla = Altura de la valla
    int amigos, altura_valla;
    cin >> amigos >> altura_valla;

    // Altura de cada amigo
    int altura_amigo;

    // Largo de la fila a crear para recorrer la valla sin ser visto
    int largo_fila = 0;

    // Revisa la altura de cada amigo contra el de la valla
    for(int amigo_actual = 0; amigo_actual < amigos; amigo_actual++) {
        cin >> altura_amigo;

        // Si el amigo mide más que la valla, entonces suma +2 al ancho de la fila, de lo contrario, suma +1
        if(altura_amigo / float(altura_valla) > 1.0) {
            largo_fila = largo_fila + 2;
        } else { 
            largo_fila = largo_fila + 1;
        }
    }

    // Imprime el largo final de la fila
    cout << largo_fila << endl;

    return 0;
}
