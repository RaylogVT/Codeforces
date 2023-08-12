// 281A - Word Capitalization
// https://codeforces.com/problemset/problem/281/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    string palabra;
    cin >> palabra;

    palabra[0] = toupper(palabra[0]);
    cout << palabra << endl;
    
    return 0;
}