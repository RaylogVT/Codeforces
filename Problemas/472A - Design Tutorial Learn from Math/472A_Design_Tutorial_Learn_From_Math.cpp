// 472A - Design Tutorial: Learn from Math
// https://codeforces.com/problemset/problem/472/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) N = Número a descomponer
    int n;
    cin >> n;

    // Si N es par, entonces los dos números compuestos pueden ser 8 y N-8 
    if(n % 2 == 0) {
        cout << 8 << " " << n-8 << endl;
    }

    // Si N es impar, entonces los dos números compuestos pueden ser 9 y N-9 
    if(n % 2 == 1) {
        cout << 9 << " " << n-9 << endl;
    }

    return 0;
}