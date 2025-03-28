// 1353B - Two Arrays and Swaps
// https://codeforces.com/problemset/problem/1353/B

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
        // 2) n = Número de elementos en los arreglos
        // 2) k_swaps = Número de intercambios a realizar
        int n, k_swaps;
        cin >> n >> k_swaps;

        // Input:
        // 3) a = Arreglo a maximizar su suma
        int a[31];
        for(int indice_numero = 0; indice_numero < n; indice_numero++) {
            cin >> a[indice_numero];
        }

        // Input:
        // 4) b = Arreglo a intercambiar
        int b[31];
        for(int indice_numero = 0; indice_numero < n; indice_numero++) {
            cin >> b[indice_numero];
        }

        // Ordena A de menor a mayor
        // Ordena B de mayor a menor
        sort(a, a+n); 
        sort(b, b+n, greater<int>()); 

        // Itera sobre el arreglo A
        for(int indice_numero = 0; indice_numero < n; indice_numero++) {
            
            // Revisa cuántos movimientos aún puedes hacer
            if(k_swaps > 0) {

                // ¿El número más chico en A es más chico que el número más grande en B?
                // Si lo es, entonces realiza el intercambio, de lo contrario, no se hace nada
                if(a[indice_numero] <= b[indice_numero]) {
                    
                    // Intercambia el número más chico de A con el número más grande de B
                    a[indice_numero] = b[indice_numero];
                    k_swaps--;
                }
            }
        }

        // alcula la suma de los elementos de A
        int maxsum_a = 0;
        for(int indice_numero = 0; indice_numero < n; indice_numero++) {
            maxsum_a = maxsum_a + a[indice_numero];
        }

        // Imprime la suma de los elementos de A
        cout << maxsum_a << endl;
    }

    return 0;
}