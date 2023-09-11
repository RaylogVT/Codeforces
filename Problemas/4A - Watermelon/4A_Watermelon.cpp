// 4A - Watermelon
// https://codeforces.com/problemset/problem/4/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Inputs:
    // 1) Peso de sandía (w)
    int peso_sandia;
    cin >> peso_sandia;

    // Revisa si la sandía se puede partir en partes pares
    // Si el peso de la sandia es par y mayor a 2, entonces imprime 'YES', de lo contrario, imprime 'NO'
    if(peso_sandia % 2 == 0 && peso_sandia > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
