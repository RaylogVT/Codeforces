// 80A - Panoramix Prediction 
// https://codeforces.com/problemset/problem/XXX/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// isPrime: ¿Un número es primo?
// Input: 
//   1) Número = Número a evaluar
// Output:
//   a) Número = El número sí es primo
//   b) -1 = El número no es primo
int isPrime(int numero) {

    // Si el número no es mayor a 1, entonces no es primo
    if(numero > 1) {

        // Itera desde el 2 hasta N/2 + 1
        for(int numero_actual = 2; numero_actual < numero / 2 + 1; numero_actual++) {

            // Si algún número es divisible con nuestro número, entonces no es primo
            if(numero % numero_actual == 0) {
                return -1;
            }
        }
        
        // Si ningún número fue divisible con nuestro número, entonces es primo
        return 1;

    } else {
        return -1;
    } 
}

int main(){

    // Input:
    // 1) n,m = Números primos
    int n, m;
    cin >> n >> m;

    // Número primo próximo potencial actual a N
    int proximo_primo = n + 1;

    // Itera sobre el próximo número primo potencial actual
    while(isPrime(proximo_primo) != 1) {

        // Si el próximo número primo potencial actual no es primo, entonces suma +1
        // Termina el proceso cuando el próximo número primo potencial actual sea primo
        proximo_primo++;
    }

    // Si el próximo número primo encontrado es igual a M, entonces imprime YES, de lo contrario, imprime NO
    if(proximo_primo == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}