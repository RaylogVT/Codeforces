// 281A - Word Capitalization
// https://codeforces.com/problemset/problem/281/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) palabra = Palabra a capitalizar
    string palabra;
    cin >> palabra;

    // Capitaliza la 1° letra de la palabra
    palabra[0] = toupper(palabra[0]);

    // Imprime la palabra capitalizada
    cout << palabra << endl;
    
    return 0;
}
