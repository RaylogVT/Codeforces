// 1807B - Grab The Candies
// https://codeforces.com/problemset/problem/1807/B

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
        // 2) bolsas = Cantidad de bolsas de dulces
        int bolsas;
        cin >> bolsas;

        // Input:
        // 3) dulces = Cantidad de dulces por bolsa
        int dulces[101];
        for(int indice_bolsa = 0; indice_bolsa < bolsas; indice_bolsa++) {
            cin >> dulces[indice_bolsa];
        }

        // Suma de dulces en bolsas de cantidad par e impar
        int suma_pares = 0;
        int suma_impares = 0;
        
        // Itera sobre la lista de dulces por bolsa
        for(int indice_bolsa = 0; indice_bolsa < bolsas; indice_bolsa++) {
            
            // Suma los dulces a los contadores dependiendo de si su cantidad es par o impar
            if(dulces[indice_bolsa] % 2 == 0) {
                suma_pares += dulces[indice_bolsa];
            } else {
                suma_impares += dulces[indice_bolsa];
            }
        }

        // Si la suma de bolsas con dulces es pares es mayor a la de los impares, entonces Mihai siempre tendrá más dulces que Bianca
        // Si la suma de bolsas con dulces es pares menor o igual a la de los impares, entonces Bianca tendrá más dulces que Mihai en algún turno
        if(suma_pares > suma_impares) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}