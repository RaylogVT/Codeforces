// 9A - Die Roll 
// https://codeforces.com/problemset/problem/9/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) yakko = Resultado del dado de Yakko
    // 2) wakko = Resultado del dado de Wakko
    int yakko, wakko;
    cin >> yakko >> wakko;

    // Calcula el valor del dado que Dot debe superar
    int valor_maximo = max(yakko, wakko);

    // Cantidad de valores que le darán a Dot la victoria
    int dot = 6 - valor_maximo + 1;

    // Simplifica la fracción acorde a las especificaciones del problema
    switch(dot) {
        case 0: cout << "0/1" << endl; break;
        case 1: cout << "1/6" << endl; break;
        case 2: cout << "1/3" << endl; break;
        case 3: cout << "1/2" << endl; break;
        case 4: cout << "2/3" << endl; break;
        case 5: cout << "5/6" << endl; break;
        case 6: cout << "1/1" << endl; break;
    }

    return 0;
}