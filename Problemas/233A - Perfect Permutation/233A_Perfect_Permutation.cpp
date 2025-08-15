// 233A - Perfect Permutation
// https://codeforces.com/problemset/problem/233/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) N = Tamaño de la permutación
    int N;
    cin >> N;

    // Si N es par, entonces no se puede generar una permutación perfecta
    if(N % 2 == 0) {

        // Índice de la permutación
        int indice = 0;

        // Genera números hasta llegar a N
        while(indice < N) {

            // Si el índice es par, el número en la permutación es índice + 2
            if(indice % 2 == 0) {
                cout << indice + 2;
            
            // Si el índice es impar, el número en la permutación es igual al indice
            } else {
                cout << indice;
            }
                
            cout << " ";
            indice += 1;
        }

    // Si N es impar, entonces no se puede generar una permutación perfecta
    } else {
        cout << -1 << endl;
    }

    return 0;
}