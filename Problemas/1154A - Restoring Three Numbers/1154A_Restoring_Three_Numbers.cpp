// 1154A - Restoring Three Numbers
// https://codeforces.com/problemset/problem/1154/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) x1, x2, x3, x4
    // Pon las X's en un arreglo
    int x[4];
    for(int i = 0; i < 4; i++) {
        cin >> x[i];
    }
    
    // Ordena la lista de menor a mayor
    sort(x, x+4);

    // Calcula a,b,c
    int a = x[3] - x[0];    // x4 - x1
    int b = x[3] - x[1];    // x4 - x2
    int c = x[3] - x[2];    // x4 - x3

    // Imprime a,b,c
    cout << a << " " << b << " " << c;

    return 0;
}