// 1426A - Floor Number
// https://codeforces.com/problemset/problem/1426/A

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
        // 2) departamento_petya = Número de departamento donde vive Petya
        // 3) departamentos_por_piso = Número de departamentos por piso
        int departamento_petya, departamentos_por_piso;
        cin >> departamento_petya >> departamentos_por_piso;

        // Piso actual
        int piso = 1;

        // Número del departamento recorrido actualmente (a partir del 2° piso)
        int departamento_actual = 3;

        // Número del departamento recorrido con respecto al piso actual
        int departamento_piso_actual = 0;

        // Si Petya vive en el departamento 1 o 2, entonces vive en el 1° piso
        if(departamento_petya < 3) {
            piso = 1;
        } else {
            
            // Empieza a recorrer los departamentos a partir del 2° piso
            piso = 2;

            // Recorre los departamentos uno a uno hasta encontrar el de Petya
            // Recorre los departamentos vistos en el piso uno a uno hasta llegar al final de este
            while(departamento_actual != departamento_petya) {

                departamento_actual += 1;
                departamento_piso_actual += 1;

                // Si llegamos al final del piso, entonces reinicia desde 1 el número de departamentos vistos en el piso actual
                // Suma +1 al piso para representar que se va al siguiente piso
                if(departamento_piso_actual == departamentos_por_piso) {
                    departamento_piso_actual = 0;
                    piso += 1;
                }
            }
        }

        // Imprime el número de piso donde se encuentra el departamento de Petya
        cout << piso << endl;

    }

    return 0;
}