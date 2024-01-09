// 732A - Buy A Shovel
// https://codeforces.com/problemset/problem/732/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) precio_pala = Precio de pala
    // 2) r_moneda = Denominacion de moneda de R pesos
    int precio_pala, r_moneda;
    cin >> precio_pala >> r_moneda;

    // Itera sobre la cantidad de palas a comprar
    for(int palas_compradas = 1; palas_compradas < 10; palas_compradas++) {

        // Multiplica el precio de una pala x cantidad actual de palas a comprar
        // Si la multiplicación módulo 10 da 0, entonces no se necesita la r_moneda para pagar
        // Si la multiplicación módulo 10 da la denominación de la r-moneda, entonces se necesita la r_moneda para pagar
        if((precio_pala * palas_compradas) % 10 == r_moneda || (precio_pala * palas_compradas) % 10 == 0) {

            // Imprime el número de palas compradas
            cout << palas_compradas << endl;
            break;
        }
    }

    return 0;
}
