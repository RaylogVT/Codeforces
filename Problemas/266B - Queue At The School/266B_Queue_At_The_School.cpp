// 266B - Queue At The School
// https://codeforces.com/problemset/problem/266/B

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) chicos = Número de chicos en la fila
    // 2) Segundos = Segundos a transcurrir
    int chicos, segundos;
    cin >> chicos >> segundos;

    // Input:
    // fila = 3) Alineación de la fila (B = Boy, G = Girl)
    string fila;
    cin >> fila;

    // Tamaño de la fila
    int tamano_fila = fila.length();

    // Actualiza la fila con cada segundo
    for(int segundo = 0; segundo < segundos; segundo++) {

        // Itera sobre la fila
        for(int chico = 0; chico < tamano_fila-1; chico++) {

            // Cuando hay un chico enfrente de la chica (BG), se invierten los lugares (GB)
            if(fila[chico] == 'B' && fila[chico+1] == 'G') {
                swap(fila[chico], fila[chico+1]);
                chico++;
            }
        }
    }

    // Imprime la fila resultante
    cout << fila;

    return 0;
}
