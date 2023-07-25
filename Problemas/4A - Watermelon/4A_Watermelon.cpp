// 4A - Watermelon
// https://codeforces.com/problemset/problem/4/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Peso de sandía (w)
    int w;
    cin >> w;

    // Si el peso de la sandia es par y mayor a 2, entonces se puede partir en dos trozos pares
    if(w % 2 == 0 && w > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
