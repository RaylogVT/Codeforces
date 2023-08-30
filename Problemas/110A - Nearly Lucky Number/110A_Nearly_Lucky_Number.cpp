// 110A - Nearly Lucky Number
// https://codeforces.com/problemset/problem/110/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Número a checar los dígitos
    long long int numero;
    cin >> numero;

    // Contador de dígitos de la suerte
    int contador_suerte = 0;

    // Mientras tu numero sea positivo
    while(numero > 0) {

        // Realiza módulo 10 para sacar el último dígito del número
        // Si el dígito es 4 o 7, añade 1 al contador
        if(numero % 10 == 4 || numero % 10 == 7) {
            contador_suerte++;
        }

        // Divide el número entre 10 para eliminar el último dígito
        numero = numero / 10;
    }

    // Si el número tiene 4 o 7 dígitos de la suerte, entonces imprime 'YES', de lo contrario, imprime 'NO'
    if(contador_suerte == 4 || contador_suerte == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}