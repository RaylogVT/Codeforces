// 959A - Mahmoud And Ehab And The Even-Odd Game 
// https://codeforces.com/problemset/problem/959/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) N = Número inicial del juego
    int N;
    cin >> N;

    // Si N es par, entonces gana Mahmoud, de lo contrario, gana Ehab
    if(N % 2 == 0) {
        cout << "Mahmoud" << endl;
    } else {
        cout << "Ehab" << endl;
    }

    return 0;
}