// 1873B - Good Kid 
// https://codeforces.com/problemset/problem/1873/B

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
        // 2) numero_digitos = Número de dígitos a multiplicar
        int numero_digitos;
        cin >> numero_digitos;

        // Input:
        // 3) lista_digitos = Dígitos a multiplicar
        int lista_digitos[10];
        for(int indice_digito = 0; indice_digito < numero_digitos; indice_digito++) {
            cin >> lista_digitos[indice_digito];
        }

        // Sortea la lista de dígitos de menor a mayor
        sort(lista_digitos, lista_digitos + numero_digitos);

        // Sumar +1 al dígito más pequeño
        lista_digitos[0] += 1;

        // Multiplicación máxima de dígitos
        int multiplicacion_maxima = 1;

        // Itera sobre la lista de dígitos para multiplicar cada uno de ellos
        for(int indice_digito = 0; indice_digito < numero_digitos; indice_digito++) {
            multiplicacion_maxima = multiplicacion_maxima * lista_digitos[indice_digito];
        }

        // Imprime la multiplicación máxima
        cout << multiplicacion_maxima << endl;
    }

    return 0;
}