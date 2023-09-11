// 791A - Brother and Big Bear
// https://codeforces.com/problemset/problem/791/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Inputs:
    // 1) Peso de Limak (a) 
    // 2) Peso de Bob (b)
    int limak, bob;
    cin >> limak >> bob;

    // Numero de años pasados
    int anios = 0;

    // Mientras Limak pese menos que Bob:
    // Suma 1 año, multiplica x3 el peso de Limak y x2 el de Bob
    while(limak <= bob) {
        anios++;
        limak = limak * 3;
        bob = bob * 2;
    }

    // Imprime el número de años que pasaron para que Limak pesara más que Bob
    cout << anios << endl;

    return 0;
}