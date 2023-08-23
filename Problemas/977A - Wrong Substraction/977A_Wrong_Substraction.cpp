// 977A - Wrong Substraction
// https://codeforces.com/problemset/problem/977/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    
    // Input:
    // 1) Número a restar
    // 2) Números de restas a realizar
    int numero, cantidad_restas;
    cin >> numero >> cantidad_restas;

    // Calcula el resultado de cada resta
    for(int resta = 0; resta < cantidad_restas; resta++) {
        
        // Si el último dígito es distinto de 0, resta -1
        // Si el último dígito es igual a 0, divide entre 10
        if(numero % 10 != 0) {
            numero--;
        } else if(numero % 10 == 0) {
            numero = numero / 10;
        }
        
    }
    
    // Imprime el número resultante
    cout << numero << endl;

    return 0;
}