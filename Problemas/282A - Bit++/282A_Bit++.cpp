// 282A - Bit++
// https://codeforces.com/problemset/problem/282/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main() {

    // Inputs:
    // 1) statements = Número de statements
    int statements; 
    cin >> statements;

    // Variable X    
    int x = 0;           

    // Lee cada statement
    for(int indice_statement = 0; indice_statement < statements; indice_statement++) {

        // Inputs:
        // 2) operacion = Statement (X++, X--, ++X, --X)
        string operacion; 
        cin >> operacion;

        // Si el statement tiene en medio un +, entonces suma 1 a x
        // Si el statement tiene en medio un -, entonces resta 1 a x
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
