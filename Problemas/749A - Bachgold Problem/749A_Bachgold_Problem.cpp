// 749A - Goldbach Problem
// https://codeforces.com/problemset/problem/749/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) N = Número a descomponer
    int N;
    cin >> N;

    // Calcula la cantidad de números primos a utilizar
    int numeros_primos = N / 2;

    // Imprime la cantidad de números primos a utilizar
    cout << numeros_primos << endl;

    // Si N es impar, entonces resta -1 a la cantidad de números a utilizar
    // El número primo que se elimina del total es la resta -3 a N
    if(N % 2 == 1) {
        cout << "3 ";
        numeros_primos--;
    }

    // Itera sobre la cantidad de número primos a utilizar
    // Por cada número a utilizar, se resta -2 a N
    for(int numero = 0; numero < numeros_primos; numero++) {
        cout << "2 ";
    }

    return 0;
}