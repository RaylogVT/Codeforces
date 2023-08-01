// 50A - Domino Piling
// https://codeforces.com/problemset/problem/50/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    int m, n;  // m = Ancho, n = Alto
    cin >> m >> n;

    int dominos = floor((m*n)/2);
    cout << dominos << endl;

    return 0;
}