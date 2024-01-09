// 486A - Calculating Function
// https://codeforces.com/problemset/problem/486/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) N = Número
    int n;
    cin >> n;

    // Si N es par, entonces la respuesta es N/2
    // Si N es impar, entonces la respuesta es -((N+1)/2)
    if(n % 2 == 0) {
        cout << n/2 << endl;
    } else {
        cout << -((n+1)/2) << endl;
    }

    return 0;
}
