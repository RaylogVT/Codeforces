// 1829B - Blank Space
// https://codeforces.com/problemset/problem/1829/B

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
        // 2) N = longitud del arreglo binario
        int N;
        cin >> N;

        // Input:
        // 3) binario = Arreglo de 0s y 1s
        int binario[101];
        for(int indice_arreglo = 0; indice_arreglo < N; indice_arreglo++) { 
            cin >> binario[indice_arreglo];
        }    

        // Longitud del segmento de ceros más largo encontrado hasta ahora
        int segmento_maximo = 0;

        // Longitud del segmento de ceros encontrado actualmente
        int segmento_actual = 0;

        // Itera sobre los digitos del arreglo binario
        for(int indice_arreglo = 0; indice_arreglo < N; indice_arreglo++) { 

            // Si detectas un 0, entonces empieza a contar la longitud del nuevo segmento de 0s
            if(binario[indice_arreglo] == 0) {
                segmento_actual++;

            // Si detectas un 1, entonces compara la longitud del segemento de 0s actual vs. máximo encontrado hasta ahora
            // Reinicia el contador del longitud del segmento actual
            } else {
                segmento_maximo = max(segmento_maximo, segmento_actual);
                segmento_actual = 0;
            }
        }  

        // Compara la longitud del último segemento de 0s del arreglo vs. el máximo encontrado hasta ahora
        segmento_maximo = max(segmento_maximo, segmento_actual);

        // Imprime la longitud del segmento de 0s más largo encontrado en el arreglo
        cout << segmento_maximo << endl;
    }

    return 0;
}