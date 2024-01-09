// 50A - Domino Piling
// https://codeforces.com/problemset/problem/50/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) m = Ancho
    // 2) n = Alto
    int m, n;  
    cin >> m >> n;

    // Calcula el número de dominós 
    int dominos = floor((m*n)/2);

    // Imprime el número de dominós
    cout << dominos << endl;

    return 0;
}
