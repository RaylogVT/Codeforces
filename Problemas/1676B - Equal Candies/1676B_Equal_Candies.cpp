// 1676B - Equal Candies
// https://codeforces.com/problemset/problem/1676/B

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
        // 2) cajas = Número de cajas
        int cajas;
        cin >> cajas;

        // Input:
        // 3) dulces_caja = Número de dulces por caja
        int dulces_caja[51];
        for(int indice_caja = 0; indice_caja < cajas; indice_caja++) {
            cin >> dulces_caja[indice_caja];
        }    

        // Ordena las cajas de menor a mayor
        sort(dulces_caja, dulces_caja + cajas);

        // Encuentra la cantidad mínima de dulces que deben las cajas
        int minimo_dulces = dulces_caja[0];

        // Número mínimo de dulces a comer
        int dulces_comer = 0;

        // Itera sobre cada caja
        // Resta la cantidad de dulces actual menos el mínimo de dulces que debe tener la caja
        // La resta representa la cantidad de dulces a comer
        for(int indice_caja = 0; indice_caja < cajas; indice_caja++) {
            dulces_comer = dulces_comer + (dulces_caja[indice_caja] - minimo_dulces);
        }    

        // Imprime la cantidad mínima de dulces a comer
        cout << dulces_comer << endl;
    }

    return 0;
}