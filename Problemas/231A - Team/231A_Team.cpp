// 231A - Team
// https://codeforces.com/problemset/problem/231/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Número de problemas
    int problemas;
    cin >> problemas;

    // Número de problemas implementados
    int problemas_implementados = 0;

    // Procesa cada problema
    while(problemas--) {

        // El amigo sabe o sabe el problema? (1 = Sí sabe, 0 = No sabe)
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        // Suma de amigos que saben el problema
        int saben = petya + vasya + tonya;
        
        // Si 2 o más amigos saben el problema, entonces lo implementan
        if (saben >= 2) {
            problemas_implementados++;
        } 
    }

    // Imprime el número de problemas implementados
    cout << problemas_implementados << endl;

    return 0;
}