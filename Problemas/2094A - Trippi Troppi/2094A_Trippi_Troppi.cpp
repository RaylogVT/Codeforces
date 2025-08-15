// 2094A - Trippi Troppi  
// https://codeforces.com/problemset/problem/1858/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main(){

    // Input:
    // 1) pruebas = Número de casos de prueba
    int pruebas;
    cin >> pruebas;

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba <= pruebas; indice_prueba++) {

        // Input:
        // 2) pais = Nombre completo del país
        string pais;
        getline(cin, pais);

        // Guardar palabras del nombre del país
        string word;

        // Formatear el nombre del pais
        stringstream ss(pais);

        // Palabras del pais
        vector<string> palabras;

        // Extrae y guarda las palabras del país
        while(getline(ss, word, ' ')) {
            palabras.push_back(word);
        }

        // print the vector
        for (string palabra : palabras) {
            cout << palabra[0];
        }
        cout << endl;
    }

    return 0;
}