// 236A - Boy or Girl
// https://codeforces.com/problemset/problem/236/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Input:
    // 1) username = Username a evaluar
    string username;
    cin >> username;

    // Cuenta el número de letras únicas en el username
    // El set() guarda las letras únicas
    set<char> letras_unicas(username.begin(), username.end());

    // Si el número de letras distintas es par, entonces el usuario es hombre, de lo contrario, es mujer
    if(letras_unicas.size() % 2 == 1) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}
