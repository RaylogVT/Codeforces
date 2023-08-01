// 282A - Bit++
// https://codeforces.com/problemset/problem/282/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int statements;     // Número de statements
    int x = 0;          // X
    string operacion;   // Statement individual

    cin >> statements;

    // Lee cada statement
    while(statements--) {
        cin >> operacion;

        // Si el statement tiene en medio un +, entonces suma 1
        // Si el statement tiene en medio un -, entonces resta 1
        if(operacion[1] == '+') {
            x++;
        } else if(operacion[1] == '-') {
            x--;
        }
    }

    // Imprime el valor final de X
    cout << x << endl;

    return 0;
}
