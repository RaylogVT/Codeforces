// 1760B - Atilla's Favorite Problem
// https://codeforces.com/problemset/problem/1760/B

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
        // 2) N = Longitud de string
        int N;
        cin >> N;

        // Input:
        // 3) mensaje = String a escribir
        string mensaje;
        cin >> mensaje;

        // Valor ASCII máximo encontrado en las letras del mensaje
        int ascii_maximo = 0;

        // Itera sobre las letras del mensaje
        for(int indice_letra = 0; indice_letra < N; indice_letra++) {
            
            // Compara el ASCII de la letra actual contra el máximo encontrado hasta el momento
            ascii_maximo = max(ascii_maximo, int(mensaje[indice_letra]));
        }

        // Calcula el tamaño mínimo del abecedario necesario para escribir el mensaje
        int abecedario_minimo = ascii_maximo - 96;

        // Imprime el tamaño mínimo del abecedario
        cout << abecedario_minimo << endl;
    }

    return 0;
}