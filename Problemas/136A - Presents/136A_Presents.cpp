// 136A - Presents
// https://codeforces.com/problemset/problem/136/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) Número de amigos
    int amigos;
    cin >> amigos;

    // Número del amigo P
    int num_amigos[100];

    // ¿De qué amigo recibió regalo el amigo I?
    // I = Índice el arreglo de amigos P
    int recibio_de[100];

    // Input:
    // 2) ¿El amigo I a quién le dió regalo (amigo P)?
    for(int amigo_actual = 0; amigo_actual < amigos; amigo_actual++) {
        cin >> num_amigos[amigo_actual];
    }

    // Recorre la lista de números de amigo P 
    for(int amigo_actual = 0; amigo_actual < amigos; amigo_actual++) {

        // ¿El amigo I le dio a qué amigo P?
        int dio_a = num_amigos[amigo_actual];
        
        // ¿En la lista de amigos, quién está en la posición del amigo P?
        int pos_amigos = num_amigos[dio_a-1];
        
        // ¿De quién recibió regalo el amigo I?
        recibio_de[pos_amigos-1] = dio_a;
    }

    // Imprime el arreglo con el número del amigo que le dio regalo al amigo I
    for(int amigo_actual = 0; amigo_actual < amigos; amigo_actual++) {
        cout << recibio_de[amigo_actual] << " ";
    }

    return 0;
}